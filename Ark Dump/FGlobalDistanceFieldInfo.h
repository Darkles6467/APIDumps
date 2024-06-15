#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldInfo
{
	char __padding[0xe0L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FGlobalDistanceFieldInfo.bInitialized"); }
	TArray<FGlobalDistanceFieldClipmap>& MostlyStaticClipmapsField() { return *GetNativePointerField<TArray<FGlobalDistanceFieldClipmap>*>(this, "FGlobalDistanceFieldInfo.MostlyStaticClipmaps"); }
	TArray<FGlobalDistanceFieldClipmap>& ClipmapsField() { return *GetNativePointerField<TArray<FGlobalDistanceFieldClipmap>*>(this, "FGlobalDistanceFieldInfo.Clipmaps"); }
	FGlobalDistanceFieldParameterData& ParameterDataField() { return *GetNativePointerField<FGlobalDistanceFieldParameterData*>(this, "FGlobalDistanceFieldInfo.ParameterData"); }

	// Functions

	void UpdateParameterData(float MaxOcclusionDistance) { NativeCall<void, float>(this, "FGlobalDistanceFieldInfo.UpdateParameterData", MaxOcclusionDistance); }
};

