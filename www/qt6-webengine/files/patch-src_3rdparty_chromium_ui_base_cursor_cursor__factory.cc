--- src/3rdparty/chromium/ui/base/cursor/cursor_factory.cc.orig	2024-03-22 08:19:40 UTC
+++ src/3rdparty/chromium/ui/base/cursor/cursor_factory.cc
@@ -97,7 +97,7 @@ void CursorFactory::ObserveThemeChanges() {
   NOTIMPLEMENTED();
 }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 
 // Returns a cursor name compatible with either X11 or the FreeDesktop.org
 // cursor spec ([1] and [2]), followed by fallbacks that can work as
