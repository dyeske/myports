PORTNAME=	tesseract
PORTVERSION=	5.5.1
CATEGORIES=	graphics

MAINTAINER=	pkubaj@FreeBSD.org
COMMENT=	Commercial quality open source OCR engine
WWW=		https://github.com/tesseract-ocr/tesseract

LICENSE=	APACHE20

BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
		xsltproc:textproc/libxslt \
		${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl
LIB_DEPENDS=	liblept.so:graphics/leptonica \
		libtiff.so:graphics/tiff \
		libharfbuzz.so:print/harfbuzz \
		libfreetype.so:print/freetype2 \
		libcurl.so:ftp/curl

RUN_DEPENDS=	tesseract-data>=0:graphics/tesseract-data

USES=		autoreconf compiler:c++20-lang cpe gnome libarchive libtool \
		localbase pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

CPE_VENDOR=	tesseract_project

USE_GITHUB=	yes
GH_ACCOUNT=	${PORTNAME}-ocr

DATADIR=	${PREFIX}/share/tessdata
PORTDATA=	*
PORTDOCS=	AUTHORS ChangeLog README.md
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS TOOLS
OPTIONS_DEFAULT=	TOOLS
OPTIONS_SUB=	yes

TOOLS_CONFIGURE_ENABLE=	training
TOOLS_DESC=	Include training tools
TOOLS_LIB_DEPENDS=libicui18n.so:devel/icu \
		libfontconfig.so:x11-fonts/fontconfig
TOOLS_USE=	GNOME=cairo,glib20,pango

.if exists(/usr/include/omp.h)
CMAKE_ON=	OPENMP_BUILD
.endif

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

post-install-TOOLS-on:
	@cd ${WRKSRC} && ${MAKE} DESTDIR=${STAGEDIR} training-install

.include <bsd.port.mk>
