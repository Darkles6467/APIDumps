#pragma once

#include "BaseDeclarations.h"
struct FARKTributeDinoListing
{
	char __padding[0xf0L];
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDinoListing.DinoName"); }
	FieldArray<FString, 12> DinoStatsField() { return {this, "FARKTributeDinoListing.DinoStats"}; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDinoListing.DinoExperiencePoints"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID2"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.ExpirationTimeUTC"); }

	// Functions

	FARKTributeDinoListing * operator=(const FARKTributeDinoListing * __that) { return NativeCall<FARKTributeDinoListing *, const FARKTributeDinoListing *>(this, "FARKTributeDinoListing.operator=", __that); }
};

