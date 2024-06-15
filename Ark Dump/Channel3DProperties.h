#pragma once

#include "BaseDeclarations.h"
struct Channel3DProperties
{
	char __padding[0x18L];
	int& _audibleDistanceField() { return *GetNativePointerField<int*>(this, "Channel3DProperties._audibleDistance"); }
	int& _conversationalDistanceField() { return *GetNativePointerField<int*>(this, "Channel3DProperties._conversationalDistance"); }
	long double& _audioFadeIntensityByDistanceField() { return *GetNativePointerField<long double*>(this, "Channel3DProperties._audioFadeIntensityByDistance"); }
	FieldArray<_BYTE, 1> _audioFadeModelField() { return {this, "Channel3DProperties._audioFadeModel"}; }

	// Functions

	long double AudioFadeIntensityByDistance() { return NativeCall<long double>(this, "Channel3DProperties.AudioFadeIntensityByDistance"); }
	EAudioFadeModel AudioFadeModel() { return NativeCall<EAudioFadeModel>(this, "Channel3DProperties.AudioFadeModel"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "Channel3DProperties.ToString", result); }
};

