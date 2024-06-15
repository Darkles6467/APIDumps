#pragma once

#include "BaseDeclarations.h"
struct FWorldBuffDefinition
{
	char __padding[0xd8L];
	FName& WorldBuffIdentifierField() { return *GetNativePointerField<FName*>(this, "FWorldBuffDefinition.WorldBuffIdentifier"); }
	FString& WorldBuffDisplayTitleField() { return *GetNativePointerField<FString*>(this, "FWorldBuffDefinition.WorldBuffDisplayTitle"); }
	FLinearColor& WorldBuffDisplayTitleColorField() { return *GetNativePointerField<FLinearColor*>(this, "FWorldBuffDefinition.WorldBuffDisplayTitleColor"); }
	FString& WorldBuffDisplayTextField() { return *GetNativePointerField<FString*>(this, "FWorldBuffDefinition.WorldBuffDisplayText"); }
	FString& WorldBuffServerNotificationTextField() { return *GetNativePointerField<FString*>(this, "FWorldBuffDefinition.WorldBuffServerNotificationText"); }
	FLinearColor& WorldBuffServerNotificationTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "FWorldBuffDefinition.WorldBuffServerNotificationTextColor"); }
	int& StackLimitField() { return *GetNativePointerField<int*>(this, "FWorldBuffDefinition.StackLimit"); }
	float& WorldBuffDurationField() { return *GetNativePointerField<float*>(this, "FWorldBuffDefinition.WorldBuffDuration"); }
	TArray<FName>& WorldBuffsToRemoveOnStartField() { return *GetNativePointerField<TArray<FName>*>(this, "FWorldBuffDefinition.WorldBuffsToRemoveOnStart"); }
	TArray<FName>& WorldBuffsToPreventWhileActiveField() { return *GetNativePointerField<TArray<FName>*>(this, "FWorldBuffDefinition.WorldBuffsToPreventWhileActive"); }
	float& TimeFromEndToAllowReplacementField() { return *GetNativePointerField<float*>(this, "FWorldBuffDefinition.TimeFromEndToAllowReplacement"); }
	FName& WorldBuffSetNameField() { return *GetNativePointerField<FName*>(this, "FWorldBuffDefinition.WorldBuffSetName"); }
	TEnumAsByte<enum EWorldBuffDifficultyType::Type>& BuffDifficultyField() { return *GetNativePointerField<TEnumAsByte<enum EWorldBuffDifficultyType::Type>*>(this, "FWorldBuffDefinition.BuffDifficulty"); }
	FString& DifficultyDisplayTextField() { return *GetNativePointerField<FString*>(this, "FWorldBuffDefinition.DifficultyDisplayText"); }
	TSubclassOf<UPrimalWorldBuffCustomImplement>& WorldBuffCustomImplementationField() { return *GetNativePointerField<TSubclassOf<UPrimalWorldBuffCustomImplement>*>(this, "FWorldBuffDefinition.WorldBuffCustomImplementation"); }
	TArray<FPropertyModifierDefinition>& PropertyModifiersField() { return *GetNativePointerField<TArray<FPropertyModifierDefinition>*>(this, "FWorldBuffDefinition.PropertyModifiers"); }

	// Functions

	FWorldBuffDefinition * operator=(const FWorldBuffDefinition * __that) { return NativeCall<FWorldBuffDefinition *, const FWorldBuffDefinition *>(this, "FWorldBuffDefinition.operator=", __that); }
};

