#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalGlobals : UObject
{
	char __padding[0x190L];
	UPrimalGameData * PrimalGameDataField() { return GetNativePointerField<UPrimalGameData *>(this, "UPrimalGlobals.PrimalGameData"); }
	UPrimalGameData * PrimalGameDataOverrideField() { return GetNativePointerField<UPrimalGameData *>(this, "UPrimalGlobals.PrimalGameDataOverride"); }
	FStringAssetReference& PrimalGameDataAssetField() { return *GetNativePointerField<FStringAssetReference*>(this, "UPrimalGlobals.PrimalGameDataAsset"); }
	TArray<FStringAssetReference>& PrimalGameDataAssetExtendedField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "UPrimalGlobals.PrimalGameDataAssetExtended"); }
	TSubclassOf<UUI_GenericConfirmationDialog>& GlobalGenericConfirmationDialogField() { return *GetNativePointerField<TSubclassOf<UUI_GenericConfirmationDialog>*>(this, "UPrimalGlobals.GlobalGenericConfirmationDialog"); }
	bool& bAllowSingleplayerField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowSingleplayer"); }
	bool& bAllowNonDedicatedHostField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bAllowNonDedicatedHost"); }
	TArray<FString>& UIOnlyShowMapFileNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowMapFileNames"); }
	TArray<FString>& UIOnlyShowModIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGlobals.UIOnlyShowModIDs"); }
	bool& bTotalConversionShowUnofficialServersField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bTotalConversionShowUnofficialServers"); }
	FString& CreditStringField() { return *GetNativePointerField<FString*>(this, "UPrimalGlobals.CreditString"); }
	FLinearColor& AlphaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.AlphaMissionColor"); }
	FLinearColor& BetaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.BetaMissionColor"); }
	FLinearColor& GammaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.GammaMissionColor"); }
	FLinearColor& MissionCompleteMultiUseWheelTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobals.MissionCompleteMultiUseWheelTextColor"); }
	TArray<FStringAssetReference>& UIGamepadIconRefsField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "UPrimalGlobals.UIGamepadIconRefs"); }
	bool& bGameMediaLoadedField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bGameMediaLoaded"); }
	bool& bStartedAsyncLoadField() { return *GetNativePointerField<bool*>(this, "UPrimalGlobals.bStartedAsyncLoad"); }
	FStreamableManager& StreamableManagerField() { return *GetNativePointerField<FStreamableManager*>(this, "UPrimalGlobals.StreamableManager"); }

	// Functions

	void AsyncLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.AsyncLoadGameMedia"); }
	void FinishLoadGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishLoadGameMedia"); }
	void FinishedLoadingGameMedia() { NativeCall<void>(this, "UPrimalGlobals.FinishedLoadingGameMedia"); }
	static ADayCycleManager * GetDayCycleManager(UWorld * World) { return NativeCall<ADayCycleManager *, UWorld *>(nullptr, "UPrimalGlobals.GetDayCycleManager", World); }
	static ASOTFNotification * GetSOTFNotificationManager(UWorld * World) { return NativeCall<ASOTFNotification *, UWorld *>(nullptr, "UPrimalGlobals.GetSOTFNotificationManager", World); }
	void LoadNextTick(UWorld * ForWorld) { NativeCall<void, UWorld *>(this, "UPrimalGlobals.LoadNextTick", ForWorld); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UPrimalGlobals.OnConfirmationDialogClosed", bAccept); }
};

