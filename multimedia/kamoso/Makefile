PORTNAME=	kamoso
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Application to take pictures and videos out of your webcam
WWW=		https://apps.kde.org/kamoso/

LICENSE=	GPLv2

USES=		cmake compiler:c++11-lang gettext gl gnome gstreamer kde:5 \
		pkgconfig qt:5 tar:xz xorg
USE_GL=		gl
USE_GNOME=	glib20
USE_GSTREAMER=	v4l2
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons i18n itemviews jobwidgets kio kirigami2 \
		notifications purpose service solid widgetsaddons windowsystem \
		xmlgui \
		ecm:build
USE_QT=		concurrent core dbus declarative graphicaleffects gui network \
		quickcontrols widgets xml \
		buildtools:build qmake:build
USE_XORG=	x11

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
