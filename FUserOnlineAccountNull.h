#pragma once

#include "BaseDeclarations.h"
#include "FUserOnlineAccount.h"
#include "FOnlineUser.h"
#include "FSlateRenderer.h"

struct FUserOnlineAccountNull : FUserOnlineAccount
{
	char __padding[0xb0L];

	// Functions

	TSharedPtr<FSlateRenderer,0> * GetUserId(TSharedPtr<FSlateRenderer,0> * result) { return NativeCall<TSharedPtr<FSlateRenderer,0> *, TSharedPtr<FSlateRenderer,0> *>(this, "FUserOnlineAccountNull.GetUserId", result); }
	FString * GetAccessToken(FString * result) { return NativeCall<FString *, FString *>(this, "FUserOnlineAccountNull.GetAccessToken", result); }
	bool GetAuthAttribute(const FString * AttrName, FString * OutAttrValue) { return NativeCall<bool, const FString *, FString *>(this, "FUserOnlineAccountNull.GetAuthAttribute", AttrName, OutAttrValue); }
	FString * GetDisplayName(FString * result) { return NativeCall<FString *, FString *>(this, "FUserOnlineAccountNull.GetDisplayName", result); }
	FString * GetRealName(FString * result) { return NativeCall<FString *, FString *>(this, "FUserOnlineAccountNull.GetRealName", result); }
	bool GetUserAttribute(const FString * AttrName, FString * OutAttrValue) { return NativeCall<bool, const FString *, FString *>(this, "FUserOnlineAccountNull.GetUserAttribute", AttrName, OutAttrValue); }
};

