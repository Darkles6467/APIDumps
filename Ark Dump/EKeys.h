#pragma once

#include "BaseDeclarations.h"
#include "FKeyDetails.h"

struct EKeys
{

	// Functions

	static void AddKey(const FKeyDetails * KeyDetails) { NativeCall<void, const FKeyDetails *>(nullptr, "EKeys.AddKey", KeyDetails); }
	static FText * GetGamepadDisplayName(FText * result, const FKey Key) { return NativeCall<FText *, FText *, const FKey>(nullptr, "EKeys.GetGamepadDisplayName", result, Key); }
	static TSharedPtr<FKeyDetails,0> * GetKeyDetails(TSharedPtr<FKeyDetails,0> * result, const FKey Key) { return NativeCall<TSharedPtr<FKeyDetails,0> *, TSharedPtr<FKeyDetails,0> *, const FKey>(nullptr, "EKeys.GetKeyDetails", result, Key); }
};

