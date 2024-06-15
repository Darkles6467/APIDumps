#pragma once

#include "BaseDeclarations.h"
struct FSerializedMissionData
{
	char __padding[0x18L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "FSerializedMissionData.MissionTag"); }
	FString& SerializedDataField() { return *GetNativePointerField<FString*>(this, "FSerializedMissionData.SerializedData"); }

	// Functions

	FTaggedString * operator=(const FTaggedString * __that) { return NativeCall<FTaggedString *, const FTaggedString *>(this, "FSerializedMissionData.operator=", __that); }
};

