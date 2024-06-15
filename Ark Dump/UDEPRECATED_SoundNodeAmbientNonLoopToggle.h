#pragma once

#include "BaseDeclarations.h"
#include "UDEPRECATED_SoundNodeDeprecated.h"
#include "USoundNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDEPRECATED_SoundNodeAmbient : UDEPRECATED_SoundNodeDeprecated
{
	char __padding[0x40L];
	float& dBAttenuationAtMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.dBAttenuationAtMax"); }
	TEnumAsByte<enum ESoundDistanceModel>& DistanceModelField() { return *GetNativePointerField<TEnumAsByte<enum ESoundDistanceModel>*>(this, "UDEPRECATED_SoundNodeAmbient.DistanceModel"); }
	float& RadiusMinField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.RadiusMin"); }
	float& RadiusMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.RadiusMax"); }
	float& LPFRadiusMinField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.LPFRadiusMin"); }
	float& LPFRadiusMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.LPFRadiusMax"); }
	float& PitchMinField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.PitchMin"); }
	float& PitchMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.PitchMax"); }
	float& VolumeMinField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.VolumeMin"); }
	float& VolumeMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbient.VolumeMax"); }
	TArray<FAmbientSoundSlot>& SoundSlotsField() { return *GetNativePointerField<TArray<FAmbientSoundSlot>*>(this, "UDEPRECATED_SoundNodeAmbient.SoundSlots"); }

	// Functions

};

struct UDEPRECATED_SoundNodeAmbientNonLoop : UDEPRECATED_SoundNodeAmbient
{
	char __padding[0x8L];
	float& DelayMinField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbientNonLoop.DelayMin"); }
	float& DelayMaxField() { return *GetNativePointerField<float*>(this, "UDEPRECATED_SoundNodeAmbientNonLoop.DelayMax"); }

	// Functions

};

struct UDEPRECATED_SoundNodeAmbientNonLoopToggle : UDEPRECATED_SoundNodeAmbientNonLoop
{

	// Functions

};

