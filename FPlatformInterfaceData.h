#pragma once

#include "BaseDeclarations.h"
struct FPlatformInterfaceData
{
	char __padding[0x30L];
	FName& DataNameField() { return *GetNativePointerField<FName*>(this, "FPlatformInterfaceData.DataName"); }
	TEnumAsByte<enum EPlatformInterfaceDataType>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EPlatformInterfaceDataType>*>(this, "FPlatformInterfaceData.Type"); }
	int& IntValueField() { return *GetNativePointerField<int*>(this, "FPlatformInterfaceData.IntValue"); }
	float& FloatValueField() { return *GetNativePointerField<float*>(this, "FPlatformInterfaceData.FloatValue"); }
	FString& StringValueField() { return *GetNativePointerField<FString*>(this, "FPlatformInterfaceData.StringValue"); }

	// Functions

};

