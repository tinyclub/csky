
# Linux Lab Plugin: csky

This is a porting of [C-Sky Linux](https://github.com/c-sky) to [Linux Lab](https://github.com/tinyclub/linux-lab).

It aims to easier the learning and development of the [C-Sky](https://c-sky.github.io) CPU architecture.

A `csky/virt` board is added, its usage is similar to any other boards in Linux Lab.

Currently, the following packages are ported:

- Qemu
- Linux
- Buildroot

## Usage

At first, please install the Linux develoment environment with this document: [Linux Lab](https://github.com/tinyclub/linux-lab).

After booting into Linux Lab, just launch a terminal and do:

    $ cd boards
    $ git clone https://github.com/tinyclub/csky.git
    $ cd ../
    $ make list
    $ make BOARD=csky/virt
    $ make boot

Since csky Linux can not accept bootargs and initrd from qemu, so `-initrd` and `-append` options of qemu not work, to pass bootargs to Linux, we must use device tree, here it is `arch/csky/boot/dts/ck810.dts` and it means, we can not simply change root devince during boot but instead need to update dts with new bootargs, recompile it and then boot:

    $ make kernel ROOTDEV=/dev/nfs
    $ make boot

Or simply rebuild dtb:

    $ make dtb ROOTDEV=/dev/nfs
    $ make boot

The other usage is as same as the other boards.
