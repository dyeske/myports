PORTNAME=	hexl
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.6
CATEGORIES=	security

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Intel homomorphic encryption acceleration library
WWW=		https://intel.github.io/hexl/v1.2.1/doxygen/html/index.html

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_i386=	error: __int128 is not supported on this target

LIB_DEPENDS=	libcpu_features.so:devel/cpu_features

USES=		cmake:testing compiler:c++17-lang localbase:ldflags
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	intel

CMAKE_ON=		HEXL_SHARED_LIB
CMAKE_OFF=		HEXL_BENCHMARK HEXL_TESTING
CMAKE_TESTING_ON=	HEXL_TESTING
CMAKE_TESTING_TARGET=	unittest

CXXFLAGS+=	-I${LOCALBASE}/include/cpu_features

# tests as of 1.2.6:
# [==========] 2138 tests from 21 test suites ran. (1617 ms total)
# [  PASSED  ] 2138 tests.

.include <bsd.port.mk>
