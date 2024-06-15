#pragma once

#include "BaseDeclarations.h"
struct FPlayerCharacterGenderDefinition
{
	char __padding[0x5f0L];
	FString& GenderStringField() { return *GetNativePointerField<FString*>(this, "FPlayerCharacterGenderDefinition.GenderString"); }
	TSubclassOf<AShooterCharacter>& CharacterBlueprintField() { return *GetNativePointerField<TSubclassOf<AShooterCharacter>*>(this, "FPlayerCharacterGenderDefinition.CharacterBlueprint"); }
	TArray<FLinearColor>& ColorSetBodyField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "FPlayerCharacterGenderDefinition.ColorSetBody"); }
	TArray<FLinearColor>& ColorSetHairField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "FPlayerCharacterGenderDefinition.ColorSetHair"); }
	TArray<FLinearColor>& ColorSetEyesField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "FPlayerCharacterGenderDefinition.ColorSetEyes"); }
	TArray<FString>& DefaultCharacterNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FPlayerCharacterGenderDefinition.DefaultCharacterNames"); }
	TArray<float>& DefaultCharacterNameWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FPlayerCharacterGenderDefinition.DefaultCharacterNameWeights"); }
	FieldArray<FBoneModifierRangeArray, 22> CharacterBoneModifierRangesField() { return {this, "FPlayerCharacterGenderDefinition.CharacterBoneModifierRanges"}; }
	FieldArray<FBoneModifierRangeArray, 22> ExtraCharacterBoneModifierMaxField() { return {this, "FPlayerCharacterGenderDefinition.ExtraCharacterBoneModifierMax"}; }

	// Functions

	FLinearColor * GetInterpolatedColor(FLinearColor * result, int colorSet, float interpolantPercent) { return NativeCall<FLinearColor *, FLinearColor *, int, float>(this, "FPlayerCharacterGenderDefinition.GetInterpolatedColor", result, colorSet, interpolantPercent); }
	FPlayerCharacterGenderDefinition * operator=(const FPlayerCharacterGenderDefinition * __that) { return NativeCall<FPlayerCharacterGenderDefinition *, const FPlayerCharacterGenderDefinition *>(this, "FPlayerCharacterGenderDefinition.operator=", __that); }
};

