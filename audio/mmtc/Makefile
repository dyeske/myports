PORTNAME=	mmtc
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.2
PORTREVISION=	21
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Minimal mpd terminal client that is simple yet highly configurable
WWW=		https://github.com/figsoda/mmtc

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	figsoda

CARGO_CRATES=	anyhow-1.0.69 \
		async-channel-1.8.0 \
		async-io-1.12.0 \
		async-lock-2.6.0 \
		async-net-1.7.0 \
		async-task-4.3.0 \
		atomic-waker-1.1.0 \
		autocfg-1.1.0 \
		base64-0.13.1 \
		bitflags-1.3.2 \
		blocking-1.3.0 \
		cassowary-0.3.0 \
		cc-1.0.79 \
		cfg-if-1.0.0 \
		clap-4.1.6 \
		clap_complete-4.1.2 \
		clap_derive-4.1.0 \
		clap_lex-0.3.1 \
		clap_mangen-0.2.8 \
		concurrent-queue-2.1.0 \
		crossbeam-queue-0.3.8 \
		crossbeam-utils-0.8.14 \
		crossterm-0.25.0 \
		crossterm-0.26.0 \
		crossterm_winapi-0.9.0 \
		dirs-4.0.0 \
		dirs-sys-0.3.7 \
		errno-0.2.8 \
		errno-dragonfly-0.1.2 \
		event-listener-2.5.3 \
		expand-0.2.1 \
		fastrand-1.9.0 \
		futures-core-0.3.26 \
		futures-io-0.3.26 \
		futures-lite-1.12.0 \
		getrandom-0.2.8 \
		heck-0.4.1 \
		hermit-abi-0.3.1 \
		instant-0.1.12 \
		io-lifetimes-1.0.5 \
		is-terminal-0.4.3 \
		libc-0.2.139 \
		linux-raw-sys-0.1.4 \
		lock_api-0.4.9 \
		log-0.4.17 \
		memchr-2.5.0 \
		mio-0.8.6 \
		once_cell-1.17.1 \
		os_str_bytes-6.4.1 \
		parking-2.0.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.7 \
		pin-project-lite-0.2.9 \
		polling-2.5.2 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.51 \
		quote-1.0.23 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		roff-0.2.1 \
		ron-0.8.0 \
		rustix-0.36.8 \
		scopeguard-1.1.0 \
		secular-1.0.1 \
		serde-1.0.152 \
		serde_derive-1.0.152 \
		signal-hook-0.3.15 \
		signal-hook-mio-0.2.3 \
		signal-hook-registry-1.4.1 \
		slab-0.4.7 \
		smallvec-1.10.0 \
		socket2-0.4.7 \
		strsim-0.10.0 \
		syn-1.0.107 \
		termcolor-1.2.0 \
		terminal_size-0.2.5 \
		thiserror-1.0.38 \
		thiserror-impl-1.0.38 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tui-0.19.0 \
		unicase-2.6.0 \
		unicode-ident-1.0.6 \
		unicode-normalization-0.1.22 \
		unicode-segmentation-1.10.1 \
		unicode-width-0.1.10 \
		version_check-0.9.4 \
		waker-fn-1.1.0 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wepoll-ffi-0.1.2 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.42.0 \
		windows-sys-0.45.0 \
		windows-targets-0.42.1 \
		windows_aarch64_gnullvm-0.42.1 \
		windows_aarch64_msvc-0.42.1 \
		windows_i686_gnu-0.42.1 \
		windows_i686_msvc-0.42.1 \
		windows_x86_64_gnu-0.42.1 \
		windows_x86_64_gnullvm-0.42.1 \
		windows_x86_64_msvc-0.42.1

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
