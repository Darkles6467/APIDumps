#pragma once

#include "BaseDeclarations.h"
struct FHairStyleDefinition
{
	char __padding[0x40L];
	bool& bIsHairStyleLockedField() { return *GetNativePointerField<bool*>(this, "FHairStyleDefinition.bIsHairStyleLocked"); }
	FName& UnlockHairStyleNameField() { return *GetNativePointerField<FName*>(this, "FHairStyleDefinition.UnlockHairStyleName"); }
	FString& HairStyleNameField() { return *GetNativePointerField<FString*>(this, "FHairStyleDefinition.HairStyleName"); }
	float& MaleBeginHairMorphTargetRangeField() { return *GetNativePointerField<float*>(this, "FHairStyleDefinition.MaleBeginHairMorphTargetRange"); }
	float& FemaleBeginHairMorphTargetRangeField() { return *GetNativePointerField<float*>(this, "FHairStyleDefinition.FemaleBeginHairMorphTargetRange"); }

	// Functions

	FHairStyleDefinition * operator=(const FHairStyleDefinition * __that) { return NativeCall<FHairStyleDefinition *, const FHairStyleDefinition *>(this, "FHairStyleDefinition.operator=", __that); }
};

