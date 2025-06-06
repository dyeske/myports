PORTNAME=	treq
PORTVERSION=	22.2.0
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	contact@evilham.com
COMMENT=	Requests-like API built on top of twisted.web's Agent
WWW=		https://github.com/twisted/treq

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}incremental>=21.3.0:devel/py-incremental@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}attrs>=0:devel/py-attrs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hyperlink>=21.0.0:www/py-hyperlink@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=18.7.0:devel/py-twisted@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.1.0:www/py-requests@${PY_FLAVOR}
# Depend directly on twisted[tls] dependencies
# As Twisted port may not (optionally) install them
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}openssl>=16.0.0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}service-identity>=18.1.0:security/py-service-identity@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>=2.4:dns/py-idna@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}httpbin>=0.5.0:www/py-httpbin@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.13.0:devel/py-six@${PY_FLAVOR}

USES=		cpe python
USE_PYTHON=	autoplist distutils

CPE_VENDOR=	twistedmatrix

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${SETENV} PYTHONPATH=${PYTHONPATH}:${WRKSRC}/src ${PYTHON_CMD} -m twisted.trial treq

.include <bsd.port.mk>
