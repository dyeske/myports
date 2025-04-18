PORTNAME=	sdl
PORTVERSION=	0.9.1
PORTREVISION=	7
CATEGORIES=	devel
MASTER_SITES=	SF/ocaml${PORTNAME}/OCamlSDL/ocaml${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX=	ocaml-
DISTNAME=	ocamlsdl-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OCaml interface to the SDL
WWW=		https://ocamlsdl.sourceforge.net/

LICENSE=	LGPL20+ # source says LGPL20+, COPYING says LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	ocaml-lablgl>0:graphics/ocaml-lablgl

USES=		gmake ocaml:findplist,ldconfig sdl
USE_SDL=	sdl

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-lablgldir=${LOCALBASE}/${OCAML_SITELIBDIR}/lablGL \
		--with-sdl-prefix=${LOCALBASE} \
		--with-installdir=${PREFIX}

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}

INFO=		ocamlsdl
PORTDOCS=	*

OPTIONS_DEFINE=	SDL_GFX SDL_IMAGE SDL_MIXER SDL_TTF DOCS
OPTIONS_DEFAULT=SDL_GFX SDL_IMAGE SDL_MIXER SDL_TTF

SDL_GFX_DESC=	Enable SDL_gfx support
SDL_IMAGE_DESC=	Enable SDL_image support
SDL_MIXER_DESC=	Enable SDL_mixer support
SDL_TTF_DESC=	Enable SDL_ttf support

SDL_GFX_USE=		SDL=gfx
SDL_GFX_CONFIGURE_OFF=	--disable-sdl-gfx

SDL_IMAGE_USE=		SDL=image
SDL_IMAGE_CONFIGURE_OFF=--disable-sdl-image

SDL_MIXER_USE=		SDL=mixer
SDL_MIXER_CONFIGURE_OFF=--disable-sdl-mixer

SDL_TTF_USE=		SDL=ttf
SDL_TTF_CONFIGURE_OFF=	--disable-sdl-ttf

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/ocaml/site-lib/sdl/*.so
	${INSTALL_DATA} ${WRKSRC}/doc/ocamlsdl.info ${STAGEDIR}${PREFIX}/${INFO_PATH}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/html/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
