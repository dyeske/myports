PORTNAME=	python-digitalocean
PORTVERSION=	1.17.0
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	API to manage digitalocean.com droplets
WWW=		https://github.com/koalalorenzo/python-digitalocean

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.0.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsonpickle>0:devel/py-jsonpickle@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

USE_LOCALE=	en_US.UTF-8
NO_ARCH=	yes

.include <bsd.port.mk>
