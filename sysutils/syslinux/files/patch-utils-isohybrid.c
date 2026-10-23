--- utils/isohybrid.c.orig	2014-10-06 12:27:44.000000000 -0400
+++ utils/isohybrid.c	2026-10-22 05:36:54.164191000 -0400
@@ -29,7 +29,9 @@
 #include <ctype.h>
 #include <fcntl.h>
 #include <stdio.h>
+#ifdef __linux__
 #include <alloca.h>
+#endif
 #include <getopt.h>
 #include <signal.h>
 #include <stdlib.h>
