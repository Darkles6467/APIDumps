#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct AReverbVolume : AVolume
{
	char __padding[0x50L];
	float& PriorityField() { return *GetNativePointerField<float*>(this, "AReverbVolume.Priority"); }
	FReverbSettings& SettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "AReverbVolume.Settings"); }
	FInteriorSettings& AmbientZoneSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "AReverbVolume.AmbientZoneSettings"); }
	AReverbVolume * NextLowerPriorityVolumeField() { return GetNativePointerField<AReverbVolume *>(this, "AReverbVolume.NextLowerPriorityVolume"); }

	// Functions

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "AReverbVolume.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AReverbVolume.PostRegisterAllComponents"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AReverbVolume.PostUnregisterAllComponents"); }
};

