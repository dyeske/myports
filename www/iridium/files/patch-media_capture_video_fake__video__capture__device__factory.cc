--- media/capture/video/fake_video_capture_device_factory.cc.orig	2025-05-07 06:48:23 UTC
+++ media/capture/video/fake_video_capture_device_factory.cc
@@ -231,7 +231,7 @@ void FakeVideoCaptureDeviceFactory::GetDevicesInfo(
   int entry_index = 0;
   for (const auto& entry : devices_config_) {
     VideoCaptureApi api =
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
         VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE;
 #elif BUILDFLAG(IS_IOS)
         VideoCaptureApi::UNKNOWN;
