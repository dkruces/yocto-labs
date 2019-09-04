FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://0001-Add-nunchuk-driver.patch \
            file://0002-Add-i2c1-and-nunchuk-nodes-in-dts.patch \
            "
