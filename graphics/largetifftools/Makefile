PORTNAME=	largetifftools
PORTVERSION=	1.4.1
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	https://www.imnc.in2p3.fr/pagesperso/deroulers/software/largetifftools/download/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Process very large TIFF files
WWW=		https://www.imnc.in2p3.fr/pagesperso/deroulers/software/largetifftools/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png \
		libtiff.so:graphics/tiff \
		libzstd.so:archivers/zstd

USES=		autoreconf jpeg localbase:ldconfig tar:bzip2
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
