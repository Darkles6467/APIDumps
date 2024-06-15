#pragma once

#include "BaseDeclarations.h"
struct FPooledRenderTargetDesc
{
	char __padding[0x48L];
	FClearValueBinding& ClearValueField() { return *GetNativePointerField<FClearValueBinding*>(this, "FPooledRenderTargetDesc.ClearValue"); }
	FIntPoint& ExtentField() { return *GetNativePointerField<FIntPoint*>(this, "FPooledRenderTargetDesc.Extent"); }
	unsigned int& DepthField() { return *GetNativePointerField<unsigned int*>(this, "FPooledRenderTargetDesc.Depth"); }
	unsigned int& ArraySizeField() { return *GetNativePointerField<unsigned int*>(this, "FPooledRenderTargetDesc.ArraySize"); }
	bool& bIsArrayField() { return *GetNativePointerField<bool*>(this, "FPooledRenderTargetDesc.bIsArray"); }
	unsigned __int16& NumMipsField() { return *GetNativePointerField<unsigned __int16*>(this, "FPooledRenderTargetDesc.NumMips"); }
	unsigned __int16& NumSamplesField() { return *GetNativePointerField<unsigned __int16*>(this, "FPooledRenderTargetDesc.NumSamples"); }
	EPixelFormat& FormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FPooledRenderTargetDesc.Format"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "FPooledRenderTargetDesc.Flags"); }
	unsigned int& TargetableFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FPooledRenderTargetDesc.TargetableFlags"); }
	bool& bForceSeparateTargetAndShaderResourceField() { return *GetNativePointerField<bool*>(this, "FPooledRenderTargetDesc.bForceSeparateTargetAndShaderResource"); }
	const wchar_t * DebugNameField() { return GetNativePointerField<const wchar_t *>(this, "FPooledRenderTargetDesc.DebugName"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FPooledRenderTargetDesc.IsValid"); }
	bool operator==(const FPooledRenderTargetDesc * rhs) { return NativeCall<bool, const FPooledRenderTargetDesc *>(this, "FPooledRenderTargetDesc.operator==", rhs); }
	FString * GenerateInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "FPooledRenderTargetDesc.GenerateInfoString", result); }
};

