--- ui/gfx/font_fallback_linux.cc.orig	2025-05-07 06:48:23 UTC
+++ ui/gfx/font_fallback_linux.cc
@@ -32,6 +32,8 @@
 #include "ui/gfx/linux/fontconfig_util.h"
 #include "ui/gfx/platform_font.h"
 
+#include <unistd.h>
+
 namespace gfx {
 
 namespace {
