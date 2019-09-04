require bootlinlabs-image-minimal.bb

IMAGE_FEATURES += "dev-pkgs"

IMAGE_INSTALL += "packagegroup-core-tools-debug"
