_PLUGIN  = 1
ARCH     = csky
XARCH    = cskyv2
CPU     ?= ck810
MEM     ?= 128M
QEMU    ?= v2.8.1.1
LINUX   ?= v4.9.56
# Near 2017.11 version
BUILDROOT?= 131995
NETDEV  ?= csky_mac_v2
SERIAL  ?= ttyS0
# None external initrd, csky Linux doesn't support -initrd and -append of qemu currently
# /dev/null: for builtin initramfs
# /dev/nfs : for nfs rootfs
ROOTDEV ?= /dev/nfs
FSTYPE  ?= ext2
ORIIMG  ?= vmlinux
CCPRE   ?= csky-abiv2-linux-
QTOOL   ?= $(BOARD_DIR)/qemu/$(XARCH)-softmmu/qemu-system-$(XARCH)
PREBUILT?= private
KIMAGE  ?= $(BOARD_DIR)/kernel/$(XARCH)/$(LINUX)/vmlinux
KCLI_DTS?= 1
#ORIDTS  ?= arch/$(ARCH)/boot/dts/ck810.dts
DTS     ?= $(BOARD_KERNEL)/$(XARCH)/$(LINUX)/ck810.dts
DTB     ?= $(BOARD_KERNEL)/$(XARCH)/$(LINUX)/ck810.dtb
CCPATH  ?= $(BOARD_TOOLCHAIN)/$(XARCH)/opt/ext-toolchain/bin
# The old busybox rootfs is not powerful enough
# Use the prebuilt one of Linux Lab
ROOTFS  ?= $(BOARD_ROOT)/$(XARCH)/$(CPU)/rootfs.cpio.gz
