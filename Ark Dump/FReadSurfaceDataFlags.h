#pragma once

#include "BaseDeclarations.h"
struct FReadSurfaceDataFlags
{
	char __padding[0x14L];
	ECubeFace& CubeFaceField() { return *GetNativePointerField<ECubeFace*>(this, "FReadSurfaceDataFlags.CubeFace"); }
	ERangeCompressionMode& CompressionModeField() { return *GetNativePointerField<ERangeCompressionMode*>(this, "FReadSurfaceDataFlags.CompressionMode"); }
	bool& bLinearToGammaField() { return *GetNativePointerField<bool*>(this, "FReadSurfaceDataFlags.bLinearToGamma"); }
	float& MaxDepthRangeField() { return *GetNativePointerField<float*>(this, "FReadSurfaceDataFlags.MaxDepthRange"); }
	bool& bOutputStencilField() { return *GetNativePointerField<bool*>(this, "FReadSurfaceDataFlags.bOutputStencil"); }
	char& MipLevelField() { return *GetNativePointerField<char*>(this, "FReadSurfaceDataFlags.MipLevel"); }
	bool& bConvertValuesField() { return *GetNativePointerField<bool*>(this, "FReadSurfaceDataFlags.bConvertValues"); }

	// Functions

	float ComputeNormalizedDepth(float DeviceZ) { return NativeCall<float, float>(this, "FReadSurfaceDataFlags.ComputeNormalizedDepth", DeviceZ); }
};

