--- src/platformsupport/input/evdevkeyboard/qevdevkeyboardhandler.cpp.orig	2025-02-19 13:05:34 UTC
+++ src/platformsupport/input/evdevkeyboard/qevdevkeyboardhandler.cpp
@@ -17,11 +17,7 @@
 #include <QtGui/private/qguiapplication_p.h>
 #include <QtGui/private/qinputdevicemanager_p.h>
 
-#ifdef Q_OS_FREEBSD
-#include <dev/evdev/input.h>
-#else
 #include <linux/input.h>
-#endif
 
 #ifndef input_event_sec
 #define input_event_sec time.tv_sec
