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
ROOTDEV ?= /dev/null
FSTYPE  ?= ext2
ORIDTS  ?= arch/$(ARCH)/boot/dts/ck810.dts
ORIDTB  ?= arch/$(ARCH)/boot/dts/ck810.dtb
ORIIMG  ?= vmlinux
CCPRE   ?= csky-abiv2-linux-
QTOOL   ?= $(TOP_DIR)/boards/$(BOARD)/qemu/$(XARCH)-softmmu/qemu-system-$(XARCH)
KIMAGE  ?= $(TOP_DIR)/boards/$(BOARD)/kernel/$(XARCH)/$(LINUX)/vmlinux
#KIMAGE  ?= $(TOP_DIR)/boards/$(BOARD)/kernel/$(XARCH)/$(LINUX)/Image
DTB     ?= $(TOP_DIR)/boards/$(BOARD)/kernel/$(XARCH)/$(LINUX)/ck810.dtb
CCPATH  ?= $(TOP_DIR)/boards/$(BOARD)/toolchains/$(XARCH)/opt/ext-toolchain/bin
# The old busybox rootfs is not powerful enough
# Use the prebuilt one of Linux Lab
ROOTFS  ?= $(TOP_DIR)/boards/$(BOARD)/root/$(XARCH)/$(CPU)/rootfs.cpio.gz
