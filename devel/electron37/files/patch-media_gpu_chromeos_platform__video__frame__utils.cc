--- media/gpu/chromeos/platform_video_frame_utils.cc.orig	2025-06-30 07:04:30 UTC
+++ media/gpu/chromeos/platform_video_frame_utils.cc
@@ -69,7 +69,7 @@ static std::unique_ptr<ui::GbmDevice> CreateGbmDevice(
     const base::FilePath dev_path(FILE_PATH_LITERAL(
         base::StrCat({drm_node_file_prefix, base::NumberToString(i)})));
 
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(USE_V4L2_CODEC)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(USE_V4L2_CODEC)
     const bool is_render_node = base::Contains(drm_node_file_prefix, "render");
 
     // TODO(b/313513760): don't guard base::File::FLAG_WRITE behind
@@ -190,7 +190,7 @@ class GbmDeviceWrapper {
       const base::FilePath dev_path(
           base::CommandLine::ForCurrentProcess()->GetSwitchValuePath(
               switches::kRenderNodeOverride));
-#if BUILDFLAG(IS_LINUX) && BUILDFLAG(USE_V4L2_CODEC)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)) && BUILDFLAG(USE_V4L2_CODEC)
       const bool is_render_node = base::Contains(dev_path.value(), "render");
 
       // TODO(b/313513760): don't guard base::File::FLAG_WRITE behind
