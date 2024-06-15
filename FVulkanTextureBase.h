#pragma once

#include "BaseDeclarations.h"
#include "IRefCountedObject.h"

struct FVulkanBaseShaderResource : IRefCountedObject
{
};

struct FVulkanTextureBase : FVulkanBaseShaderResource
{
	char __padding[0xb0L];
	FVulkanSurface& SurfaceField() { return *GetNativePointerField<FVulkanSurface*>(this, "FVulkanTextureBase.Surface"); }
	FVulkanTextureView& DefaultViewField() { return *GetNativePointerField<FVulkanTextureView*>(this, "FVulkanTextureBase.DefaultView"); }
	FVulkanTextureView * PartialViewField() { return GetNativePointerField<FVulkanTextureView *>(this, "FVulkanTextureBase.PartialView"); }
	FVulkanSurface * MSAASurfaceField() { return GetNativePointerField<FVulkanSurface *>(this, "FVulkanTextureBase.MSAASurface"); }
	FVulkanTextureView& MSAAViewField() { return *GetNativePointerField<FVulkanTextureView*>(this, "FVulkanTextureBase.MSAAView"); }
	bool& bIsAliasedField() { return *GetNativePointerField<bool*>(this, "FVulkanTextureBase.bIsAliased"); }

	// Functions

	void AliasTextureResources(const FVulkanTextureBase * SrcTexture) { NativeCall<void, const FVulkanTextureBase *>(this, "FVulkanTextureBase.AliasTextureResources", SrcTexture); }
	void DestroyViews() { NativeCall<void>(this, "FVulkanTextureBase.DestroyViews"); }
};

