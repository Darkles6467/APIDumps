#pragma once

#include "BaseDeclarations.h"
struct FTribeAlliance
{
	char __padding[0x48L];
	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "FTribeAlliance.AllianceName"); }
	unsigned int& AllianceIDField() { return *GetNativePointerField<unsigned int*>(this, "FTribeAlliance.AllianceID"); }
	TArray<FString>& MembersTribeNameField() { return *GetNativePointerField<TArray<FString>*>(this, "FTribeAlliance.MembersTribeName"); }
	TArray<unsigned int>& MembersTribeIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeAlliance.MembersTribeID"); }
	TArray<unsigned int>& AdminsTribeIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FTribeAlliance.AdminsTribeID"); }

	// Functions

	FString * GetDescriptiveString(FString * result) { return NativeCall<FString *, FString *>(this, "FTribeAlliance.GetDescriptiveString", result); }
	FTribeAlliance * operator=(const FTribeAlliance * __that) { return NativeCall<FTribeAlliance *, const FTribeAlliance *>(this, "FTribeAlliance.operator=", __that); }
	bool operator==(const FTribeAlliance * Other) { return NativeCall<bool, const FTribeAlliance *>(this, "FTribeAlliance.operator==", Other); }
};

