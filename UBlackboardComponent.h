#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UBlackboardKeyType.h"

struct UBlackboardComponent : UActorComponent
{
	char __padding[0x98L];
	UBlackboardData * BlackboardAssetField() { return GetNativePointerField<UBlackboardData *>(this, "UBlackboardComponent.BlackboardAsset"); }
	TArray<unsigned char>& ValueMemoryField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UBlackboardComponent.ValueMemory"); }
	TArray<unsigned short>& ValueOffsetsField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "UBlackboardComponent.ValueOffsets"); }
	TArray<unsigned char>& QueuedUpdatesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UBlackboardComponent.QueuedUpdates"); }

	// Functions

	void ClearValueAsRotator(const FName * KeyName) { NativeCall<void, const FName *>(this, "UBlackboardComponent.ClearValueAsRotator", KeyName); }
	void ClearValueAsRotator(char KeyID) { NativeCall<void, char>(this, "UBlackboardComponent.ClearValueAsRotator", KeyID); }
	void ClearValueAsVector(const FName * KeyName) { NativeCall<void, const FName *>(this, "UBlackboardComponent.ClearValueAsVector", KeyName); }
	void ClearValueAsVector(char KeyID) { NativeCall<void, char>(this, "UBlackboardComponent.ClearValueAsVector", KeyID); }
	EBlackboardCompare::Type CompareKeyValues(TSubclassOf<UBlackboardKeyType> KeyType, char KeyA, char KeyB) { return NativeCall<EBlackboardCompare::Type, TSubclassOf<UBlackboardKeyType>, char, char>(this, "UBlackboardComponent.CompareKeyValues", KeyType, KeyA, KeyB); }
	FString * DescribeKeyValue(FString * result, char KeyID, EBlackboardDescription::Type Mode) { return NativeCall<FString *, FString *, char, EBlackboardDescription::Type>(this, "UBlackboardComponent.DescribeKeyValue", result, KeyID, Mode); }
	FString * GetDebugInfoString(FString * result, EBlackboardDescription::Type Mode) { return NativeCall<FString *, FString *, EBlackboardDescription::Type>(this, "UBlackboardComponent.GetDebugInfoString", result, Mode); }
	bool GetLocationFromEntry(const FName * KeyName, FVector * ResultLocation) { return NativeCall<bool, const FName *, FVector *>(this, "UBlackboardComponent.GetLocationFromEntry", KeyName, ResultLocation); }
	bool GetLocationFromEntry(char KeyID, FVector * ResultLocation) { return NativeCall<bool, char, FVector *>(this, "UBlackboardComponent.GetLocationFromEntry", KeyID, ResultLocation); }
	bool GetRotationFromEntry(const FName * KeyName, FRotator * ResultRotation) { return NativeCall<bool, const FName *, FRotator *>(this, "UBlackboardComponent.GetRotationFromEntry", KeyName, ResultRotation); }
	bool GetRotationFromEntry(char KeyID, FRotator * ResultRotation) { return NativeCall<bool, char, FRotator *>(this, "UBlackboardComponent.GetRotationFromEntry", KeyID, ResultRotation); }
	bool GetValueAsBool(const FName * KeyName) { return NativeCall<bool, const FName *>(this, "UBlackboardComponent.GetValueAsBool", KeyName); }
	char GetValueAsEnum(const FName * KeyName) { return NativeCall<char, const FName *>(this, "UBlackboardComponent.GetValueAsEnum", KeyName); }
	float GetValueAsFloat(const FName * KeyName) { return NativeCall<float, const FName *>(this, "UBlackboardComponent.GetValueAsFloat", KeyName); }
	int GetValueAsInt(const FName * KeyName) { return NativeCall<int, const FName *>(this, "UBlackboardComponent.GetValueAsInt", KeyName); }
	FName * GetValueAsName(FName * result, const FName * KeyName) { return NativeCall<FName *, FName *, const FName *>(this, "UBlackboardComponent.GetValueAsName", result, KeyName); }
	FRotator * GetValueAsRotator(FRotator * result, const FName * KeyName) { return NativeCall<FRotator *, FRotator *, const FName *>(this, "UBlackboardComponent.GetValueAsRotator", result, KeyName); }
	FRotator * GetValueAsRotator(FRotator * result, char KeyID) { return NativeCall<FRotator *, FRotator *, char>(this, "UBlackboardComponent.GetValueAsRotator", result, KeyID); }
	FString * GetValueAsString(FString * result, const FName * KeyName) { return NativeCall<FString *, FString *, const FName *>(this, "UBlackboardComponent.GetValueAsString", result, KeyName); }
	FString * GetValueAsString(FString * result, char KeyID) { return NativeCall<FString *, FString *, char>(this, "UBlackboardComponent.GetValueAsString", result, KeyID); }
	FVector * GetValueAsVector(FVector * result, const FName * KeyName) { return NativeCall<FVector *, FVector *, const FName *>(this, "UBlackboardComponent.GetValueAsVector", result, KeyName); }
	FVector * GetValueAsVector(FVector * result, char KeyID) { return NativeCall<FVector *, FVector *, char>(this, "UBlackboardComponent.GetValueAsVector", result, KeyID); }
	void InitializeBlackboard(UBlackboardData * NewAsset) { NativeCall<void, UBlackboardData *>(this, "UBlackboardComponent.InitializeBlackboard", NewAsset); }
	void InitializeComponent() { NativeCall<void>(this, "UBlackboardComponent.InitializeComponent"); }
	void NotifyObservers(char KeyID) { NativeCall<void, char>(this, "UBlackboardComponent.NotifyObservers", KeyID); }
	void ResumeUpdates() { NativeCall<void>(this, "UBlackboardComponent.ResumeUpdates"); }
	void SetValueAsBool(const FName * KeyName, bool BoolValue) { NativeCall<void, const FName *, bool>(this, "UBlackboardComponent.SetValueAsBool", KeyName, BoolValue); }
	void SetValueAsBool(char KeyID, bool BoolValue) { NativeCall<void, char, bool>(this, "UBlackboardComponent.SetValueAsBool", KeyID, BoolValue); }
	void SetValueAsClass(const FName * KeyName, UClass * ClassValue) { NativeCall<void, const FName *, UClass *>(this, "UBlackboardComponent.SetValueAsClass", KeyName, ClassValue); }
	void SetValueAsClass(char KeyID, UClass * ClassValue) { NativeCall<void, char, UClass *>(this, "UBlackboardComponent.SetValueAsClass", KeyID, ClassValue); }
	void SetValueAsEnum(const FName * KeyName, char EnumValue) { NativeCall<void, const FName *, char>(this, "UBlackboardComponent.SetValueAsEnum", KeyName, EnumValue); }
	void SetValueAsEnum(char KeyID, char EnumValue) { NativeCall<void, char, char>(this, "UBlackboardComponent.SetValueAsEnum", KeyID, EnumValue); }
	void SetValueAsFloat(const FName * KeyName, float FloatValue) { NativeCall<void, const FName *, float>(this, "UBlackboardComponent.SetValueAsFloat", KeyName, FloatValue); }
	void SetValueAsFloat(char KeyID, float FloatValue) { NativeCall<void, char, float>(this, "UBlackboardComponent.SetValueAsFloat", KeyID, FloatValue); }
	void SetValueAsInt(const FName * KeyName, int IntValue) { NativeCall<void, const FName *, int>(this, "UBlackboardComponent.SetValueAsInt", KeyName, IntValue); }
	void SetValueAsInt(char KeyID, int IntValue) { NativeCall<void, char, int>(this, "UBlackboardComponent.SetValueAsInt", KeyID, IntValue); }
	void SetValueAsName(const FName * KeyName, FName NameValue) { NativeCall<void, const FName *, FName>(this, "UBlackboardComponent.SetValueAsName", KeyName, NameValue); }
	void SetValueAsName(char KeyID, const FName * NameValue) { NativeCall<void, char, const FName *>(this, "UBlackboardComponent.SetValueAsName", KeyID, NameValue); }
	void SetValueAsObject(const FName * KeyName, UObject * ObjectValue) { NativeCall<void, const FName *, UObject *>(this, "UBlackboardComponent.SetValueAsObject", KeyName, ObjectValue); }
	void SetValueAsObject(char KeyID, UObject * ObjectValue) { NativeCall<void, char, UObject *>(this, "UBlackboardComponent.SetValueAsObject", KeyID, ObjectValue); }
	void SetValueAsRotator(const FName * KeyName, FRotator RotatorValue) { NativeCall<void, const FName *, FRotator>(this, "UBlackboardComponent.SetValueAsRotator", KeyName, RotatorValue); }
	void SetValueAsRotator(char KeyID, const FRotator * RotatorValue) { NativeCall<void, char, const FRotator *>(this, "UBlackboardComponent.SetValueAsRotator", KeyID, RotatorValue); }
	void SetValueAsString(const FName * KeyName, FString StringValue) { NativeCall<void, const FName *, FString>(this, "UBlackboardComponent.SetValueAsString", KeyName, StringValue); }
	void SetValueAsString(char KeyID, const FString * StringValue) { NativeCall<void, char, const FString *>(this, "UBlackboardComponent.SetValueAsString", KeyID, StringValue); }
	void SetValueAsVector(const FName * KeyName, FVector VectorValue) { NativeCall<void, const FName *, FVector>(this, "UBlackboardComponent.SetValueAsVector", KeyName, VectorValue); }
	void SetValueAsVector(char KeyID, const FVector * VectorValue) { NativeCall<void, char, const FVector *>(this, "UBlackboardComponent.SetValueAsVector", KeyID, VectorValue); }
};

