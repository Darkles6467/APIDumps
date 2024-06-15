#pragma once

#include "BaseDeclarations.h"
struct FReverbSettings
{
	char __padding[0x18L];
	TEnumAsByte<enum ReverbPreset>& ReverbType_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ReverbPreset>*>(this, "FReverbSettings.ReverbType_DEPRECATED"); }
	UReverbEffect * ReverbEffectField() { return GetNativePointerField<UReverbEffect *>(this, "FReverbSettings.ReverbEffect"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FReverbSettings.Volume"); }
	float& FadeTimeField() { return *GetNativePointerField<float*>(this, "FReverbSettings.FadeTime"); }

	// Functions

	void PostSerialize(const FArchive * Ar) { NativeCall<void, const FArchive *>(this, "FReverbSettings.PostSerialize", Ar); }
};

