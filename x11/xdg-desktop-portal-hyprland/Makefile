PORTNAME=	xdg-desktop-portal-hyprland
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.10
CATEGORIES=	x11 wayland

MAINTAINER=	tagattie@FreeBSD.org
COMMENT=	xdg-desktop-portal backend for hyprland
WWW=		https://github.com/hyprwm/xdg-desktop-portal-hyprland

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	hyprland-protocols>0:graphics/hyprland-protocols \
		hyprwayland-scanner>=0.4.2:devel/hyprwayland-scanner \
		wayland-protocols>=1.33:graphics/wayland-protocols
LIB_DEPENDS=	libhyprlang.so:devel/hyprlang \
		libhyprutils.so:devel/hyprutils \
		libsdbus-c++.so:devel/sdbus-cpp \
		libdrm.so:graphics/libdrm \
		libwayland-client.so:graphics/wayland \
		libpipewire-0.3.so:multimedia/pipewire
RUN_DEPENDS=	xdg-desktop-portal>0:deskutils/xdg-desktop-portal \
		grim:x11/grim \
		slurp:x11/slurp

USES=		cmake compiler:c++11-lib gl pkgconfig qt:6

USE_GITHUB=	yes
GH_ACCOUNT=	hyprwm

USE_GL=		gbm
USE_QT=		base wayland:run

LDFLAGS+=	-Wl,--as-needed # GL, sdbus-cpp deps

PLIST_FILES=	bin/hyprland-share-picker \
		lib/systemd/user/${PORTNAME}.service \
		libexec/${PORTNAME} \
		share/dbus-1/services/org.freedesktop.impl.portal.desktop.hyprland.service \
		share/xdg-desktop-portal/portals/hyprland.portal

PORTDOCS=	CONTRIBUTING.md README.md

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
