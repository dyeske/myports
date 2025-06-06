PORTNAME=	cpupdate
DISTVERSION=	g20180513
PORTREVISION=	10
CATEGORIES=	sysutils

MAINTAINER=	eugen@FreeBSD.org
COMMENT=	CPU microcode update utility for x86
WWW=		https://github.com/kernschmelze/cpupdate

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE
#
# The license of Intel's microcode binary files prohibits redistribution,
# so they are no part of this port to not restrict packaging and redistribution
# of the port itself. These binaries ought be downloaded and installed
# separately from this package by default. There are non-default port options
# and "make install-microcodes" command to download and install
# the whole bunch of microcode binaries.

USE_RC_SUBR=	${PORTNAME}

ONLY_FOR_ARCHS=		amd64 i386
ONLY_FOR_ARCHS_REASON=	specific to x86 processors

SUB_FILES=	pkg-message
SUB_LIST=	CPM_DIR="${CPM_DIR}" INTEL_DIR="${INTEL_DIR}" \
		CPM_DATADIR="${CPM_DATADIR}" INTEL_DATADIR="${INTEL_DATADIR}" \
		FETCH_CMD="${FETCH_CMD}" CPUPDATE_SITES="${CPUPDATE_SITES}" \
		CPUPDATE_DISTFILES="${CPUPDATE_DISTFILES}"

USE_GITHUB=	yes
GH_ACCOUNT=	kernschmelze
GH_TAGNAME=	48e42d5

PLIST_FILES=	sbin/${PORTNAME} share/man/man8/${PORTNAME}.8.gz

# MCE DB r332
CPM_ACCOUNT=	platomav
CPM_PROJECT=	CPUMicrocodes
CPM_TAGNAME=	2bcc2d8

OPTIONS_DEFINE=		CPM INTEL
CPM_DESC=		Download platomav/CPUMicrocodes collection
CPM_GH_ACCOUNT=		${CPM_ACCOUNT}:cpm
CPM_GH_PROJECT=		${CPM_PROJECT}:cpm
CPM_GH_TAGNAME=		${CPM_TAGNAME}:cpm
CPM_PACK?=		${CPM_ACCOUNT}-${CPM_PROJECT}-${CPM_TAGNAME}_GH0.tar.gz
CPM_DIR=		${WRKDIR}/${CPM_PROJECT}-${CPM_TAGNAME}
CPM_DATADIR=		${DATADIR}/CPUMicrocodes/secondary/Intel

INTEL_PACK=		microcode-20250512
INTEL_DESC=		Download Intel microcode pack ${INTEL_PACK}
INTEL_PROJECT=		Intel-Linux-Processor-Microcode-Data-Files
INTEL_MASTER_SITES=	https://codeload.github.com/intel/${INTEL_PROJECT}/tar.gz/:intel
INTEL_DISTFILES=	${INTEL_PACK}:intel
INTEL_DIR=		${WRKDIR}/${INTEL_PROJECT}-${INTEL_PACK}/intel-ucode
INTEL_DATADIR=		${DATADIR}/CPUMicrocodes/primary/Intel

CPUPDATE_SITES?=	${INTEL_MASTER_SITES} \
			https://codeload.github.com/platomav/${CPM_PROJECT}/tar.gz/${CPM_TAGNAME}?dummy=/:cpm
CPUPDATE_DISTFILES?=	${INTEL_PACK}:intel ${CPM_PACK}:cpm

post-patch:
	${REINPLACE_CMD} -e "s,/usr/local/share/cpupdate,${DATADIR},g" ${WRKSRC}/cpupdate.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.8 ${STAGEDIR}${PREFIX}/share/man/man8

.include <bsd.port.options.mk>

install-microcodes: extract
.if ${PORT_OPTIONS:MINTEL}
	${RM} -r ${INTEL_DATADIR}
	${MKDIR} ${INTEL_DATADIR}
	(cd ${INTEL_DIR} && ${COPYTREE_SHARE} . ${INTEL_DATADIR})
	(cd ${INTEL_DIR}-with-caveats && ${COPYTREE_SHARE} . ${INTEL_DATADIR})
.endif
.if ${PORT_OPTIONS:MCPM}
	${RM} -r ${CPM_DATADIR}
	${MKDIR} ${CPM_DATADIR}
	cpupdate -q -IC -S ${CPM_DIR}/Intel -T ${CPM_DATADIR} >/dev/null
.endif
.for _o in INTEL CPM
.if ${PORT_OPTIONS:M${_o}}
	@${ECHO} ''
	@${ECHO} '!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!'
	@${ECHO} NOTE: you have to manually remove the directory
	@${ECHO} ${${_o}_DATADIR}
	@${ECHO} after deinstallation of ${PORTNAME}.
	@${ECHO} '!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!'
.endif
.endfor

.include <bsd.port.mk>
