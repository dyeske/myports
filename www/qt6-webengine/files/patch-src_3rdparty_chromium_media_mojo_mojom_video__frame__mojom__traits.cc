--- src/3rdparty/chromium/media/mojo/mojom/video_frame_mojom_traits.cc.orig	2024-09-30 07:45:04 UTC
+++ src/3rdparty/chromium/media/mojo/mojom/video_frame_mojom_traits.cc
@@ -27,7 +27,7 @@
 #include "ui/gfx/mojom/color_space_mojom_traits.h"
 #include "ui/gfx/mojom/hdr_metadata_mojom_traits.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "base/posix/eintr_wrapper.h"
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 
