--- src/3rdparty/chromium/chrome/browser/media/webrtc/desktop_media_picker_controller.cc.orig	2024-02-23 21:04:38 UTC
+++ src/3rdparty/chromium/chrome/browser/media/webrtc/desktop_media_picker_controller.cc
@@ -92,7 +92,7 @@ bool DesktopMediaPickerController::IsSystemAudioCaptur
   } else {
     return base::FeatureList::IsEnabled(media::kMacLoopbackAudioForScreenShare);
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (request_source == Params::RequestSource::kCast) {
     return base::FeatureList::IsEnabled(media::kPulseaudioLoopbackForCast);
   } else {
