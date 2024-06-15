#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInAppPurchaseCallbackProxy : UObject
{
	char __padding[0x88L];
	TSharedPtr<FOnlineInAppPurchaseTransaction,1>& PurchaseRequestField() { return *GetNativePointerField<TSharedPtr<FOnlineInAppPurchaseTransaction,1>*>(this, "UInAppPurchaseCallbackProxy.PurchaseRequest"); }
	bool& bFailedToEvenSubmitField() { return *GetNativePointerField<bool*>(this, "UInAppPurchaseCallbackProxy.bFailedToEvenSubmit"); }
	TWeakObjectPtr<UWorld>& WorldPtrField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "UInAppPurchaseCallbackProxy.WorldPtr"); }
	EInAppPurchaseState::Type& SavedPurchaseStateField() { return *GetNativePointerField<EInAppPurchaseState::Type*>(this, "UInAppPurchaseCallbackProxy.SavedPurchaseState"); }
	FInAppPurchaseProductInfo& SavedProductInformationField() { return *GetNativePointerField<FInAppPurchaseProductInfo*>(this, "UInAppPurchaseCallbackProxy.SavedProductInformation"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UInAppPurchaseCallbackProxy.BeginDestroy"); }
	static UInAppPurchaseCallbackProxy * CreateProxyObjectForInAppPurchase(APlayerController * PlayerController, const FString * ProductIdentifier) { return NativeCall<UInAppPurchaseCallbackProxy *, APlayerController *, const FString *>(nullptr, "UInAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase", PlayerController, ProductIdentifier); }
	void OnInAppPurchaseComplete(EInAppPurchaseState::Type CompletionState) { NativeCall<void, EInAppPurchaseState::Type>(this, "UInAppPurchaseCallbackProxy.OnInAppPurchaseComplete", CompletionState); }
	void OnInAppPurchaseComplete_Delayed() { NativeCall<void>(this, "UInAppPurchaseCallbackProxy.OnInAppPurchaseComplete_Delayed"); }
	void Trigger(APlayerController * PlayerController, const FString * ProductIdentifier) { NativeCall<void, APlayerController *, const FString *>(this, "UInAppPurchaseCallbackProxy.Trigger", PlayerController, ProductIdentifier); }
};

