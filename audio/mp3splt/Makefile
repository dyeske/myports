PORTNAME=	mp3splt
PORTVERSION=	2.6.2
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/mp3splt/${PORTNAME}/${PORTVERSION}

MAINTAINER=	citrin@citrin.ru
COMMENT=	Utility to split MP3 and Ogg files (via CUE sheets)
WWW=		https://mp3splt.sourceforge.net/

LICENSE=	GPLv2

LIB_DEPENDS=	libmp3splt.so:audio/libmp3splt \
		libltdl.so:devel/libltdl

USES=		cpe pkgconfig
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share
CONFIGURE_ARGS=	--enable-oggsplt_symlink

CPE_VENDOR=	mp3splt_project

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
