#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FWorldBuffDefinition.h"
#include "UPrimalWorldBuffData.h"

struct UPrimalWorldBuffData : UObject
{
	char __padding[0x28L];
	TArray<FWorldBuffDefinition>& WorldBuffDefinitionsField() { return *GetNativePointerField<TArray<FWorldBuffDefinition>*>(this, "UPrimalWorldBuffData.WorldBuffDefinitions"); }
	TArray<UPrimalWorldBuffCustomImplement *>& ConstructedWorldBuffImplementsField() { return *GetNativePointerField<TArray<UPrimalWorldBuffCustomImplement *>*>(this, "UPrimalWorldBuffData.ConstructedWorldBuffImplements"); }
	bool& bWorldBuffsAreSuspendedField() { return *GetNativePointerField<bool*>(this, "UPrimalWorldBuffData.bWorldBuffsAreSuspended"); }

	// Functions

	static void AddWorldBuff(UObject * WorldContextObject, const FName WorldBuffIdentifier, const int StacksToGive) { NativeCall<void, UObject *, const FName, const int>(nullptr, "UPrimalWorldBuffData.AddWorldBuff", WorldContextObject, WorldBuffIdentifier, StacksToGive); }
	static void ApplyPropertyToObject(UObject * containerObject, const FName * propertyName, const float * value, bool bIsReplicated) { NativeCall<void, UObject *, const FName *, const float *, bool>(nullptr, "UPrimalWorldBuffData.ApplyPropertyToObject", containerObject, propertyName, value, bIsReplicated); }
	void ApplyWorldBuffSettings(UWorld * World) { NativeCall<void, UWorld *>(this, "UPrimalWorldBuffData.ApplyWorldBuffSettings", World); }
	void AuthorityTick(UWorld * world, float DeltaSeconds) { NativeCall<void, UWorld *, float>(this, "UPrimalWorldBuffData.AuthorityTick", world, DeltaSeconds); }
	static bool CanActivateWorldBuff(UObject * WorldContextObject, const FName WorldBuffIdentifier, TArray<FName> * OutWorldBuffsToBeReplaced) { return NativeCall<bool, UObject *, const FName, TArray<FName> *>(nullptr, "UPrimalWorldBuffData.CanActivateWorldBuff", WorldContextObject, WorldBuffIdentifier, OutWorldBuffsToBeReplaced); }
	void CheckWorldBuffsToClear() { NativeCall<void>(this, "UPrimalWorldBuffData.CheckWorldBuffsToClear"); }
	static float GetPropertyCurrentValue(UWorld * World, const FPropertyModifierDefinition * workingDefinition) { return NativeCall<float, UWorld *, const FPropertyModifierDefinition *>(nullptr, "UPrimalWorldBuffData.GetPropertyCurrentValue", World, workingDefinition); }
	static float GetPropertyFromObject(UWorld * World, UObject * containerObject, const FName * propertyName) { return NativeCall<float, UWorld *, UObject *, const FName *>(nullptr, "UPrimalWorldBuffData.GetPropertyFromObject", World, containerObject, propertyName); }
	static UPrimalWorldBuffData * GetWorldBuffData() { return NativeCall<UPrimalWorldBuffData *>(nullptr, "UPrimalWorldBuffData.GetWorldBuffData"); }
	static bool GetWorldBuffDefinitionByName(FName WorldBuffIdentifier, FWorldBuffDefinition * outWorldBuffDefinition) { return NativeCall<bool, FName, FWorldBuffDefinition *>(nullptr, "UPrimalWorldBuffData.GetWorldBuffDefinitionByName", WorldBuffIdentifier, outWorldBuffDefinition); }
	static TArray<FWorldBuffDefinition> * GetWorldBuffSet(TArray<FWorldBuffDefinition> * result, FName WorldBuffSetName) { return NativeCall<TArray<FWorldBuffDefinition> *, TArray<FWorldBuffDefinition> *, FName>(nullptr, "UPrimalWorldBuffData.GetWorldBuffSet", result, WorldBuffSetName); }
	void InitFromLoad() { NativeCall<void>(this, "UPrimalWorldBuffData.InitFromLoad"); }
	void MergeWorldBuffData(TSubclassOf<UPrimalWorldBuffData> inWorldBuffData) { NativeCall<void, TSubclassOf<UPrimalWorldBuffData>>(this, "UPrimalWorldBuffData.MergeWorldBuffData", inWorldBuffData); }
	void PostDynamicConfigUpdate() { NativeCall<void>(this, "UPrimalWorldBuffData.PostDynamicConfigUpdate"); }
	static void RemoveWorldBuff(UObject * WorldContextObject, const FName * WorldBuffIdentifier) { NativeCall<void, UObject *, const FName *>(nullptr, "UPrimalWorldBuffData.RemoveWorldBuff", WorldContextObject, WorldBuffIdentifier); }
	void UpdateWorldBuffPeristantData(UWorld * World) { NativeCall<void, UWorld *>(this, "UPrimalWorldBuffData.UpdateWorldBuffPeristantData", World); }
};

