PORTNAME=	ekhtml
PORTVERSION=	0.3.2
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	El-Kabong is a speedy, yet forgiving, SAX-style HTML parser
WWW=		https://ekhtml.sourceforge.net/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Abandonware and obsolete, last release in 2002
EXPIRATION_DATE=2025-04-30

GNU_CONFIGURE=	yes
USES=		gmake libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes
INSTALL_TARGET=	install-strip

PLIST_FILES=	include/ekhtml.h lib/libekhtml.a \
		lib/libekhtml.so lib/libekhtml.so.0 \
		lib/libekhtml.so.0.0.0

.include <bsd.port.mk>
