#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInAppPurchaseQueryCallbackProxy : UObject
{
	char __padding[0x58L];
	TSharedPtr<FOnlineProductInformationRead,1>& ReadObjectField() { return *GetNativePointerField<TSharedPtr<FOnlineProductInformationRead,1>*>(this, "UInAppPurchaseQueryCallbackProxy.ReadObject"); }
	bool& bFailedToEvenSubmitField() { return *GetNativePointerField<bool*>(this, "UInAppPurchaseQueryCallbackProxy.bFailedToEvenSubmit"); }
	TWeakObjectPtr<UWorld>& WorldPtrField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "UInAppPurchaseQueryCallbackProxy.WorldPtr"); }
	bool& bSavedWasSuccessfulField() { return *GetNativePointerField<bool*>(this, "UInAppPurchaseQueryCallbackProxy.bSavedWasSuccessful"); }
	TArray<FInAppPurchaseProductInfo>& SavedProductInformationField() { return *GetNativePointerField<TArray<FInAppPurchaseProductInfo>*>(this, "UInAppPurchaseQueryCallbackProxy.SavedProductInformation"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UInAppPurchaseQueryCallbackProxy.BeginDestroy"); }
	static UInAppPurchaseQueryCallbackProxy * CreateProxyObjectForInAppPurchaseQuery(APlayerController * PlayerController, const TArray<FString> * ProductIdentifiers) { return NativeCall<UInAppPurchaseQueryCallbackProxy *, APlayerController *, const TArray<FString> *>(nullptr, "UInAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery", PlayerController, ProductIdentifiers); }
	void OnInAppPurchaseRead(bool bWasSuccessful) { NativeCall<void, bool>(this, "UInAppPurchaseQueryCallbackProxy.OnInAppPurchaseRead", bWasSuccessful); }
	void OnInAppPurchaseRead_Delayed() { NativeCall<void>(this, "UInAppPurchaseQueryCallbackProxy.OnInAppPurchaseRead_Delayed"); }
	void TriggerQuery(APlayerController * PlayerController, const TArray<FString> * ProductIdentifiers) { NativeCall<void, APlayerController *, const TArray<FString> *>(this, "UInAppPurchaseQueryCallbackProxy.TriggerQuery", PlayerController, ProductIdentifiers); }
};

