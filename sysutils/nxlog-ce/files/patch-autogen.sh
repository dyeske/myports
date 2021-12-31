--- autogen.sh.bak	2021-12-31 14:22:06.501762000 -0500
+++ autogen.sh	2021-12-31 14:22:17.646830000 -0500
@@ -8,4 +8,3 @@
 if test "x`which dpkg-buildflags`" != "x"; then
     eval `dpkg-buildflags --export=sh`
 fi
-./configure "$@"
