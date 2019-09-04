SUMMARY = "nInvaders game"
DESCRIPTION = \
  "nInvaders is a Space Invaders clone based on ncurses for ASCII output"
HOMEPAGE = "http://ninvaders.sourceforge.net/"
SECTION = "console/utils"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://gpl.txt;md5=393a5ca445f6965873eca0259a17f833"
DEPENDS = "ncurses"
SRC_URI = \
  "https://sourceforge.net/projects/${PN}/files/${PN}/${PV}/${PN}-${PV}.tar.gz"

inherit autotools-brokensep

EXTRA_OEMAKE += "'CC=${CC}'"

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/nInvaders ${D}${bindir}
}
