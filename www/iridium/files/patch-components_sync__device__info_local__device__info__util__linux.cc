--- components/sync_device_info/local_device_info_util_linux.cc.orig	2025-05-07 06:48:23 UTC
+++ components/sync_device_info/local_device_info_util_linux.cc
@@ -9,6 +9,11 @@
 
 #include "base/linux_util.h"
 
+#if defined(__FreeBSD__)
+#include <sys/param.h>
+#define HOST_NAME_MAX MAXHOSTNAMELEN
+#endif
+
 namespace syncer {
 
 std::string GetPersonalizableDeviceNameInternal() {
