#pragma once

#include "BaseDeclarations.h"
#include "FArkTributeEntity.h"

struct FARKTributeDino : FArkTributeEntity
{
	char __padding[0x11cL];
	FString& DinoClassNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoClassName"); }
	TArray<unsigned char>& DinoDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FARKTributeDino.DinoData"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoName"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoNameInMap"); }
	FieldArray<FString, 12> DinoStatsField() { return {this, "FARKTributeDino.DinoStats"}; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.DinoExperiencePoints"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.Version"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID2"); }

	// Functions

	FARKTributeDino * operator=(const FARKTributeDino * __that) { return NativeCall<FARKTributeDino *, const FARKTributeDino *>(this, "FARKTributeDino.operator=", __that); }
};

