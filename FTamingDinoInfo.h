#pragma once

#include "BaseDeclarations.h"
struct FTamingDinoInfo
{
	char __padding[0x58L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FTamingDinoInfo.Name"); }
	float& TameAffinityPercentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.TameAffinityPercent"); }
	float& HealthPercentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HealthPercent"); }
	float& HealthCurrentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HealthCurrent"); }
	float& HealthMaxField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HealthMax"); }
	float& HungerPercentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HungerPercent"); }
	float& HungerCurrentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HungerCurrent"); }
	float& HungerMaxField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.HungerMax"); }
	float& TorpidityPercentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.TorpidityPercent"); }
	float& TameEffectivenessPercentField() { return *GetNativePointerField<float*>(this, "FTamingDinoInfo.TameEffectivenessPercent"); }
	int& TameEffectivenessLvlModifierField() { return *GetNativePointerField<int*>(this, "FTamingDinoInfo.TameEffectivenessLvlModifier"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FTamingDinoInfo.Location"); }
	bool& bIsConciousField() { return *GetNativePointerField<bool*>(this, "FTamingDinoInfo.bIsConcious"); }
	bool& bUseGenderField() { return *GetNativePointerField<bool*>(this, "FTamingDinoInfo.bUseGender"); }
	bool& bIsFemaleField() { return *GetNativePointerField<bool*>(this, "FTamingDinoInfo.bIsFemale"); }
	bool& bIsTamedField() { return *GetNativePointerField<bool*>(this, "FTamingDinoInfo.bIsTamed"); }
	unsigned int& DataID1Field() { return *GetNativePointerField<unsigned int*>(this, "FTamingDinoInfo.DataID1"); }
	unsigned int& DataID2Field() { return *GetNativePointerField<unsigned int*>(this, "FTamingDinoInfo.DataID2"); }
	TSubclassOf<UPrimalDinoEntry>& DinoEntryField() { return *GetNativePointerField<TSubclassOf<UPrimalDinoEntry>*>(this, "FTamingDinoInfo.DinoEntry"); }

	// Functions

	FTamingDinoInfo * operator=(const FTamingDinoInfo * __that) { return NativeCall<FTamingDinoInfo *, const FTamingDinoInfo *>(this, "FTamingDinoInfo.operator=", __that); }
};

