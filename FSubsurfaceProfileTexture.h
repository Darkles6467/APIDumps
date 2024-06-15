#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FSubsurfaceProfileTexture : FRenderResource
{
	char __padding[0x18L];
	TArray<FSubsurfaceProfileTexture::FSubsurfaceProfileEntry>& SubsurfaceProfileEntriesField() { return *GetNativePointerField<TArray<FSubsurfaceProfileTexture::FSubsurfaceProfileEntry>*>(this, "FSubsurfaceProfileTexture.SubsurfaceProfileEntries"); }

	// Functions

	void CreateTexture(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSubsurfaceProfileTexture.CreateTexture", RHICmdList); }
	int FindAllocationId(void *const InProfile) { return NativeCall<int, void *const>(this, "FSubsurfaceProfileTexture.FindAllocationId", InProfile); }
	bool GetEntryString(unsigned int Index, FString * Out) { return NativeCall<bool, unsigned int, FString *>(this, "FSubsurfaceProfileTexture.GetEntryString", Index, Out); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSubsurfaceProfileTexture.ReleaseDynamicRHI"); }
};

