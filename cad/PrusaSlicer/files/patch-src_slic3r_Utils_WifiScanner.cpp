--- src/slic3r/Utils/WifiScanner.cpp.orig	2025-04-10 11:26:51 UTC
+++ src/slic3r/Utils/WifiScanner.cpp
@@ -18,7 +18,7 @@
 #include "WifiScannerMac.h"
 #endif 
 
-#if __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #include <dbus/dbus.h> /* Pull in all of D-Bus headers. */
 #endif //__linux__
 
@@ -355,7 +355,7 @@ std::string WifiScanner::get_psk(const std::string& ss
     }
     return {};
 }
-
+} // Slic3r
 #ifdef _WIN32
 // Fill SSID map. Implementation from Raspberry Pi imager and Win32 Api examples.
 // https://github.com/raspberrypi/rpi-imager/blob/qml/src/windows/winwlancredentials.cpp
@@ -491,4 +491,4 @@ void WifiScanner::fill_wifi_map(Slic3r::WifiSsidPskMap
         wlanFreeMemoryFunc(interface_list);
 }
 #endif // _WIN32
-} // Slic3r
+//} // Slic3r
