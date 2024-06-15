#pragma once

#include "BaseDeclarations.h"
#include "VkBufferMemoryBarrier.h"
#include "VkImageMemoryBarrier.h"

struct FPendingTransition
{
	char __padding[0x178L];
	EResourceTransitionAccess& TransitionTypeField() { return *GetNativePointerField<EResourceTransitionAccess*>(this, "FPendingTransition.TransitionType"); }
	TArray<TPair<FVulkanSurface *,VkImageSubresourceRange>,TInlineAllocator<9> >& TexturesField() { return *GetNativePointerField<TArray<TPair<FVulkanSurface *,VkImageSubresourceRange>,TInlineAllocator<9> >*>(this, "FPendingTransition.Textures"); }
	EResourceTransitionPipeline& TransitionPipelineField() { return *GetNativePointerField<EResourceTransitionPipeline*>(this, "FPendingTransition.TransitionPipeline"); }

	// Functions

	bool GatherBarriers(FTransitionAndLayoutManager * InTransitionAndLayoutManager, TArray<VkBufferMemoryBarrier> * OutBufferBarriers, TArray<VkImageMemoryBarrier> * OutImageBarriers) { return NativeCall<bool, FTransitionAndLayoutManager *, TArray<VkBufferMemoryBarrier> *, TArray<VkImageMemoryBarrier> *>(this, "FPendingTransition.GatherBarriers", InTransitionAndLayoutManager, OutBufferBarriers, OutImageBarriers); }
};

