PORTNAME=	vitunes
PORTVERSION=	2.3
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	http://vitunes.org/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Curses-based media player with vim-like keybinds
WWW=		http://vitunes.org/

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	mplayer:multimedia/mplayer
LIB_DEPENDS=	libtag.so:audio/taglib

USES=		ncurses
ALL_TARGET=	vitunes
PLIST_FILES=	bin/vitunes share/man/man1/${PORTNAME}.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e '27d' ${WRKSRC}/vitunes.h

.include <bsd.port.mk>
