PORTNAME=	awscli2
PORTVERSION=	2.13.25
CATEGORIES=	devel python
MASTER_SITES=	https://awscli.amazonaws.com/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=		awscli-${PORTVERSION}

MAINTAINER=	dyeske@gmail.com
COMMENT=	Universal Command Line Interface for Amazon Web Services
WWW=		https://awscli.amazonaws.com/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}ruamel.yaml>0:devel/py-ruamel.yaml@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}ruamel.yaml.clib>0:devel/py-ruamel.yaml.clib@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}flit-core>=0:devel/py-flit-core@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}cryptography>=0:security/py-cryptography@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}awscrt>=0:devel/py-awscrt@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}distro>=0:sysutils/py-distro@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}docutils>=0:textproc/py-docutils@${PY_FLAVOR}
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}prompt-toolkit>=0:devel/py-prompt-toolkit@${PY_FLAVOR}
# BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}jmespath>0:devel/py-jmespath@${PY_FLAVOR}
# BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}colorama>0:devel/py-colorama@${PY_FLAVOR}
# BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}urllib3>=1.25.2:net/py-urllib3@${PY_FLAVOR}

GNU_CONFIGURE=	yes
USES=		python:3.6+ gmake
# USE_PYTHON=	autoplist concurrent distutils
USE_PYTHON=		distutils
CONFIGURE_ARGS+=	--prefix=${PREFIX} --bindir=${PREFIX}/bin --libdir=${PREFIX}/lib
CONFIGURE_ARGS+=	--with-download-deps --with-install-type=portable-exe

# CONFIGURE_ENV+=	CC=${CC} CPP=${CPP} CXX=${CXX} LIBS="${LIBS}"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAKE_ARGS+=	V=1
NO_ARCH=	yes
# SUB_FILES=	pkg-message
# cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS}

# do-configure:
# 	echo "do-configure now"
# 	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${CONFIGURE_CMD} ${CONFIGURE_ARGS}

# do-build:
#	echo "do-build now"
# 	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD}

.include <bsd.port.mk>
