--- src/3rdparty/chromium/gpu/command_buffer/service/webgpu_decoder_impl.cc.orig	2024-02-23 21:04:38 UTC
+++ src/3rdparty/chromium/gpu/command_buffer/service/webgpu_decoder_impl.cc
@@ -1243,7 +1243,7 @@ void WebGPUDecoderImpl::RequestAdapterImpl(
     force_fallback_adapter = true;
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (!shared_context_state_->GrContextIsVulkan() &&
       !shared_context_state_->IsGraphiteDawnVulkan() &&
       use_webgpu_adapter_ != WebGPUAdapterName::kOpenGLES) {
@@ -1895,7 +1895,7 @@ WebGPUDecoderImpl::AssociateMailboxDawn(
   }
 
 #if !BUILDFLAG(IS_WIN) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_APPLE) && \
-    !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_LINUX)
+    !BUILDFLAG(IS_ANDROID) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
   if (usage & wgpu::TextureUsage::StorageBinding) {
     LOG(ERROR) << "AssociateMailbox: wgpu::TextureUsage::StorageBinding is NOT "
                   "supported yet on this platform.";
