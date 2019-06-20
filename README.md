
# Linux Lab Plugin: csky

This is a porting of [C-Sky Linux](https://github.com/c-sky) to [Linux Lab](https://gitee.com/tinylab/linux-lab).

It aims to easier the learning and development of the [C-Sky](https://c-sky.github.io) CPU architecture.

A `csky/virt` board is added, its usage is similar to any other boards in Linux Lab.

Currently, the following packages are ported:

- Qemu
- Linux
- Buildroot

## Demonstration

To quickly take a look at the effect of this plugin, please open [this video](http://showterm.io/90d11debc3e51bb56d274) recorded by showterm. It simply issue:

    $ make test BOARD=csky/virt TEST=root-full,kernel-full

## Usage

At first, please install the Linux develoment environment with this document: [Linux Lab](https://gitee.com/tinylab/linux-lab).

After booting into Linux Lab, just launch a terminal and do:

    $ cd boards
    $ git clone https://gitee.com/tinylab/csky.git
    $ cd ../
    $ make list
    $ make BOARD=csky/virt
    $ make boot

The other usage is as same as the other boards.
