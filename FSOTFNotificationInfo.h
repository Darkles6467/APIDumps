#pragma once

#include "BaseDeclarations.h"
struct FSOTFNotificationInfo
{
	char __padding[0x70L];
	bool& bIsActiveField() { return *GetNativePointerField<bool*>(this, "FSOTFNotificationInfo.bIsActive"); }
	TArray<FString>& PlayerNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FSOTFNotificationInfo.PlayerNames"); }
	FString& PlayerDeathReasonField() { return *GetNativePointerField<FString*>(this, "FSOTFNotificationInfo.PlayerDeathReason"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "FSOTFNotificationInfo.TribeName"); }
	FString& CustomDrawStringField() { return *GetNativePointerField<FString*>(this, "FSOTFNotificationInfo.CustomDrawString"); }
	long double& StartDisplayTimeField() { return *GetNativePointerField<long double*>(this, "FSOTFNotificationInfo.StartDisplayTime"); }
	float& DisplayIntervalField() { return *GetNativePointerField<float*>(this, "FSOTFNotificationInfo.DisplayInterval"); }
	TArray<FPrimalPlayerCharacterConfigStructReplicated>& DisplayDataField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStructReplicated>*>(this, "FSOTFNotificationInfo.DisplayData"); }
	bool& bLastPlayerField() { return *GetNativePointerField<bool*>(this, "FSOTFNotificationInfo.bLastPlayer"); }
	TEnumAsByte<enum ESTOFNotificationType::Type>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum ESTOFNotificationType::Type>*>(this, "FSOTFNotificationInfo.Type"); }

	// Functions

	FSOTFNotificationInfo * operator=(const FSOTFNotificationInfo * __that) { return NativeCall<FSOTFNotificationInfo *, const FSOTFNotificationInfo *>(this, "FSOTFNotificationInfo.operator=", __that); }
};

