PORTNAME=	xbacklight
PORTVERSION=	1.2.3
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Program to adjust backlight brightness

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxcb-util.so:x11/xcb-util

USES=		xorg xorg-cat:app
USE_XORG=	x11 xrender xrandr xcb

PLIST_FILES=	bin/xbacklight share/man/man1/xbacklight.1.gz
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

.include <bsd.port.mk>
