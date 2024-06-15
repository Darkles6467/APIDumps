#pragma once

#include "BaseDeclarations.h"
struct FPrimalPlayerCharacterConfigStruct
{
	char __padding[0xd8L];
	FieldArray<FLinearColor, 4> BodyColorsField() { return {this, "FPrimalPlayerCharacterConfigStruct.BodyColors"}; }
	FLinearColor& OverrideHeadHairColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalPlayerCharacterConfigStruct.OverrideHeadHairColor"); }
	FLinearColor& OverrideFacialHairColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalPlayerCharacterConfigStruct.OverrideFacialHairColor"); }
	char& FacialHairIndexField() { return *GetNativePointerField<char*>(this, "FPrimalPlayerCharacterConfigStruct.FacialHairIndex"); }
	char& HeadHairIndexField() { return *GetNativePointerField<char*>(this, "FPrimalPlayerCharacterConfigStruct.HeadHairIndex"); }
	FString& PlayerCharacterNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerCharacterName"); }
	FieldArray<float, 22> RawBoneModifiersField() { return {this, "FPrimalPlayerCharacterConfigStruct.RawBoneModifiers"}; }
	int& PlayerSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerSpawnRegionIndex"); }

	// Functions

	FPrimalPlayerCharacterConfigStruct * operator=(const FPrimalPlayerCharacterConfigStruct * __that) { return NativeCall<FPrimalPlayerCharacterConfigStruct *, const FPrimalPlayerCharacterConfigStruct *>(this, "FPrimalPlayerCharacterConfigStruct.operator=", __that); }
};

