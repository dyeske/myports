PORTNAME=	star-history
DISTVERSION=	1.0.21
PORTREVISION=	2
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Graph history of GitHub stars of a user or repo over time
WWW=		https://github.com/dtolnay/star-history

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

USES=		cargo ssl

USE_GITHUB=	yes
GH_ACCOUNT=	dtolnay

CARGO_CRATES=	addr2line-0.21.0 \
		adler-1.0.2 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anyhow-1.0.81 \
		autocfg-1.2.0 \
		backtrace-0.3.71 \
		base64-0.21.7 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		bstr-1.9.1 \
		bumpalo-3.15.4 \
		bytes-1.6.0 \
		cc-1.0.90 \
		cfg-if-1.0.0 \
		chrono-0.4.35 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		dbus-0.9.7 \
		encoding_rs-0.8.33 \
		equivalent-1.0.1 \
		errno-0.3.8 \
		fastrand-2.0.2 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-io-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		gimli-0.28.1 \
		h2-0.4.3 \
		hashbrown-0.14.3 \
		hermit-abi-0.3.9 \
		home-0.5.9 \
		http-1.1.0 \
		http-body-1.0.0 \
		http-body-util-0.1.1 \
		httparse-1.8.0 \
		hyper-1.2.0 \
		hyper-tls-0.6.0 \
		hyper-util-0.1.3 \
		iana-time-zone-0.1.60 \
		iana-time-zone-haiku-0.1.2 \
		idna-0.5.0 \
		indexmap-2.2.6 \
		ipnet-2.9.0 \
		itoa-1.0.10 \
		js-sys-0.3.69 \
		lazy_static-1.4.0 \
		libc-0.2.153 \
		libdbus-sys-0.2.5 \
		linux-raw-sys-0.4.13 \
		log-0.4.21 \
		memchr-2.7.1 \
		mime-0.3.17 \
		miniz_oxide-0.7.2 \
		mio-0.8.11 \
		native-tls-0.2.11 \
		normpath-1.2.0 \
		num-traits-0.2.18 \
		num_cpus-1.16.0 \
		object-0.32.2 \
		once_cell-1.19.0 \
		opener-0.7.0 \
		openssl-0.10.64 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-sys-0.9.101 \
		percent-encoding-2.3.1 \
		pin-project-1.1.5 \
		pin-project-internal-1.1.5 \
		pin-project-lite-0.2.13 \
		pin-utils-0.1.0 \
		pkg-config-0.3.30 \
		proc-macro2-1.0.79 \
		quote-1.0.35 \
		regex-automata-0.4.6 \
		reqwest-0.12.2 \
		rustc-demangle-0.1.23 \
		rustix-0.38.32 \
		rustls-pemfile-1.0.4 \
		ryu-1.0.17 \
		schannel-0.1.23 \
		security-framework-2.9.2 \
		security-framework-sys-2.9.1 \
		serde-1.0.197 \
		serde_derive-1.0.197 \
		serde_json-1.0.114 \
		serde_urlencoded-0.7.1 \
		serde_yaml-0.9.34+deprecated \
		slab-0.4.9 \
		smallvec-1.13.2 \
		socket2-0.5.6 \
		syn-2.0.55 \
		sync_wrapper-0.1.2 \
		system-configuration-0.5.1 \
		system-configuration-sys-0.5.0 \
		tempfile-3.10.1 \
		thiserror-1.0.58 \
		thiserror-impl-1.0.58 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.36.0 \
		tokio-native-tls-0.3.1 \
		tokio-util-0.7.10 \
		tower-0.4.13 \
		tower-layer-0.3.2 \
		tower-service-0.3.2 \
		tracing-0.1.40 \
		tracing-core-0.1.32 \
		try-lock-0.2.5 \
		unicode-bidi-0.3.15 \
		unicode-ident-1.0.12 \
		unicode-normalization-0.1.23 \
		unsafe-libyaml-0.2.11 \
		url-2.5.0 \
		vcpkg-0.2.15 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		web-sys-0.3.69 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-core-0.52.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.4 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.4 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.4 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.4 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.4 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.4 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.4 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.4 \
		winreg-0.50.0

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
