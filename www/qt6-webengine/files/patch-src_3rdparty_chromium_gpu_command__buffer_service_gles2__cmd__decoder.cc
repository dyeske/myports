--- src/3rdparty/chromium/gpu/command_buffer/service/gles2_cmd_decoder.cc.orig	2025-02-21 12:29:33 UTC
+++ src/3rdparty/chromium/gpu/command_buffer/service/gles2_cmd_decoder.cc
@@ -2908,7 +2908,7 @@ GLES2Decoder* GLES2Decoder::Create(
 // Fix for Qt WebEngine Crash when QSG_RHI_BACKEND=opengl
 // Allow linux to run fuzzers.
 #if BUILDFLAG(ENABLE_VALIDATING_COMMAND_DECODER) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_WIN)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
   return new GLES2DecoderImpl(client, command_buffer_service, outputter, group);
 #else
   LOG(FATAL) << "Validating command decoder is not supported.";
