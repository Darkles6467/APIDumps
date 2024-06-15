#pragma once

#include "BaseDeclarations.h"
struct FPrimalPlayerCharacterConfigStructReplicated
{
	char __padding[0xb8L];
	FieldArray<FLinearColor, 4> BodyColorsField() { return {this, "FPrimalPlayerCharacterConfigStructReplicated.BodyColors"}; }
	FString& PlayerCharacterNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerCharacterName"); }
	FieldArray<float, 22> RawBoneModifiersField() { return {this, "FPrimalPlayerCharacterConfigStructReplicated.RawBoneModifiers"}; }
	int& PlayerSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerSpawnRegionIndex"); }

	// Functions

	FPrimalPlayerCharacterConfigStruct * GetPlayerCharacterConfig(FPrimalPlayerCharacterConfigStruct * result) { return NativeCall<FPrimalPlayerCharacterConfigStruct *, FPrimalPlayerCharacterConfigStruct *>(this, "FPrimalPlayerCharacterConfigStructReplicated.GetPlayerCharacterConfig", result); }
	FPrimalPlayerCharacterConfigStructReplicated * operator=(const FPrimalPlayerCharacterConfigStructReplicated * __that) { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated *, const FPrimalPlayerCharacterConfigStructReplicated *>(this, "FPrimalPlayerCharacterConfigStructReplicated.operator=", __that); }
};

