PORTNAME=	gmusicbrowser
PORTVERSION=	1.1.15
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	http://gmusicbrowser.org/download/

MAINTAINER=	lichray@gmail.com
COMMENT=	Jukebox for large collections of mp3/ogg/flac/mpc files
WWW=		https://gmusicbrowser.org/

LICENSE=	GPLv3

RUN_DEPENDS=	p5-Gtk2>=1.0:x11-toolkits/p5-Gtk2

USES=		shebangfix
SHEBANG_FILES=	*.pl

NO_BUILD=	yes

PORTDOCS=	AUTHORS COPYING README NEWS INSTALL layout_doc.html
PORTDATA=	*

OPTIONS_DEFINE=	DBUS WEBKIT NLS LIBNOTIFY DOCS
OPTIONS_DEFAULT=	DBUS LIBNOTIFY
OPTIONS_SUB=	yes

LIBNOTIFY_DESC=	Desktop notification
WEBKIT_DESC=	Enable embedded web browser

DBUS_RUN_DEPENDS=	p5-Net-DBus>=1.0:devel/p5-Net-DBus
WEBKIT_RUN_DEPENDS=	p5-Gtk2-WebKit>=0:www/p5-Gtk2-WebKit
LIBNOTIFY_RUN_DEPENDS=	p5-Gtk2-Notify>=0.05:devel/p5-Gtk2-Notify
NLS_RUN_DEPENDS=	p5-Locale-gettext>=1.0:devel/p5-Locale-gettext

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.man ${STAGEDIR}${PREFIX}/share/man/man1/${MAN1}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.desktop ${STAGEDIR}${DESKTOPDIR}
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && (for d in layouts pix plugins; do \
		${COPYTREE_SHARE} $$d ${STAGEDIR}${DATADIR}; done) && \
		${INSTALL_DATA} *.pm ${STAGEDIR}${DATADIR} && \
		${INSTALL_SCRIPT} iceserver.pl ${STAGEDIR}${DATADIR})
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})
do-install-NLS-on:
	(cd ${WRKSRC}/locale && \
		${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/share/locale)

.include <bsd.port.mk>
