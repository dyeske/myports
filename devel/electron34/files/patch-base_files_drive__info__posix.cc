--- base/files/drive_info_posix.cc.orig	2025-01-27 17:37:37 UTC
+++ base/files/drive_info_posix.cc
@@ -28,7 +28,7 @@ std::optional<DriveInfo> GetFileDriveInfo(const FilePa
 
 std::optional<DriveInfo> GetFileDriveInfo(const FilePath& file_path) {
   DriveInfo drive_info;
-#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   drive_info.has_seek_penalty = false;
   return drive_info;
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
