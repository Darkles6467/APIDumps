#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbyMemberEOS
{
	char __padding[0x30L];
	EOS_EpicAccountIdDetails * AccountIdField() { return GetNativePointerField<EOS_EpicAccountIdDetails *>(this, "FOnlineLobbyMemberEOS.AccountId"); }
	EOS_ProductUserIdDetails * ProductIdField() { return GetNativePointerField<EOS_ProductUserIdDetails *>(this, "FOnlineLobbyMemberEOS.ProductId"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FOnlineLobbyMemberEOS.DisplayName"); }
};

