PORTNAME=	sounddevice
DISTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	audio python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Play and record sound through OSS in python programs
WWW=		https://github.com/spatialaudio/python-sounddevice

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.0.0:devel/py-cffi@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.0.0:devel/py-cffi@${PY_FLAVOR} \
		${PYNUMPY} \
		portaudio>0:audio/portaudio

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

post-install: # workaround for https://github.com/spatialaudio/python-sounddevice/issues/116
	@${GREP} "/sounddevice\." < ${_PYTHONPKGLIST} \
		| ${SED} -e 's|/sounddevice\.|/_sounddevice.|' \
		>> ${_PYTHONPKGLIST}

.include <bsd.port.mk>
