#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHexagonTradableOption : UObject
{
	char __padding[0x48L];
	FString& OverrideNameField() { return *GetNativePointerField<FString*>(this, "UHexagonTradableOption.OverrideName"); }
	int& QuantityField() { return *GetNativePointerField<int*>(this, "UHexagonTradableOption.Quantity"); }
	int& ItemCostField() { return *GetNativePointerField<int*>(this, "UHexagonTradableOption.ItemCost"); }
	FString& OverrideDescriptionField() { return *GetNativePointerField<FString*>(this, "UHexagonTradableOption.OverrideDescription"); }
	int& OverwrittenRecievedItemCountField() { return *GetNativePointerField<int*>(this, "UHexagonTradableOption.OverwrittenRecievedItemCount"); }
	int& MaxItemPurchaseTimesField() { return *GetNativePointerField<int*>(this, "UHexagonTradableOption.MaxItemPurchaseTimes"); }

	// Functions

	bool AllowedToBePurchased(AShooterPlayerController * PlayerController) { return NativeCall<bool, AShooterPlayerController *>(this, "UHexagonTradableOption.AllowedToBePurchased", PlayerController); }
	int GetAmountInInventory(AShooterPlayerController * PlayerController) { return NativeCall<int, AShooterPlayerController *>(this, "UHexagonTradableOption.GetAmountInInventory", PlayerController); }
	FString * GetDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UHexagonTradableOption.GetDescription", result); }
	int GetItemCost(AShooterPlayerController * PlayerController) { return NativeCall<int, AShooterPlayerController *>(this, "UHexagonTradableOption.GetItemCost", PlayerController); }
	FString * GetName(FString * result) { return NativeCall<FString *, FString *>(this, "UHexagonTradableOption.GetName", result); }
	float GetWeight() { return NativeCall<float>(this, "UHexagonTradableOption.GetWeight"); }
	bool TradeAction(AShooterPlayerController * PlayerController, int OptionIndex, int RequiredQuantity) { return NativeCall<bool, AShooterPlayerController *, int, int>(this, "UHexagonTradableOption.TradeAction", PlayerController, OptionIndex, RequiredQuantity); }
	bool BPAllowedToBePurchased(AShooterPlayerController * PlayerController) { return NativeCall<bool, AShooterPlayerController *>(this, "UHexagonTradableOption.BPAllowedToBePurchased", PlayerController); }
	int BPGetItemCost(AShooterPlayerController * PlayerController) { return NativeCall<int, AShooterPlayerController *>(this, "UHexagonTradableOption.BPGetItemCost", PlayerController); }
	bool BPOverrideTradeAction(AShooterPlayerController * PlayerController) { return NativeCall<bool, AShooterPlayerController *>(this, "UHexagonTradableOption.BPOverrideTradeAction", PlayerController); }
};

