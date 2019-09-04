SUMMARY = "Bootlinlabs image minimal"

IMAGE_INSTALL = "packagegroup-core-boot ${CORE_IMAGE_EXTRA_INSTALL} packagegroup-bootlinlabs-games"

LICENSE = "MIT"

inherit core-image

IMAGE_ROOTFS_SIZE ?= "8192"

IMAGE_FSTYPES = "tar.gz"
