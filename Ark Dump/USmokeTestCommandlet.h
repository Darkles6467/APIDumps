#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCommandlet : UObject
{
	char __padding[0x58L];
	FString& HelpDescriptionField() { return *GetNativePointerField<FString*>(this, "UCommandlet.HelpDescription"); }
	FString& HelpUsageField() { return *GetNativePointerField<FString*>(this, "UCommandlet.HelpUsage"); }
	FString& HelpWebLinkField() { return *GetNativePointerField<FString*>(this, "UCommandlet.HelpWebLink"); }
	TArray<FString>& HelpParamNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UCommandlet.HelpParamNames"); }
	TArray<FString>& HelpParamDescriptionsField() { return *GetNativePointerField<TArray<FString>*>(this, "UCommandlet.HelpParamDescriptions"); }

	// Functions

};

struct USmokeTestCommandlet : UCommandlet
{

	// Functions

	int Main(const FString * Params) { return NativeCall<int, const FString *>(this, "USmokeTestCommandlet.Main", Params); }
};

