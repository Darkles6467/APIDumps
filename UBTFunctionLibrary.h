#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTFunctionLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void ClearBlackboardValueAsVector(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.ClearBlackboardValueAsVector", NodeOwner, Key); }
	static void ForceNotifyBlackboardValue(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.ForceNotifyBlackboardValue", NodeOwner, Key); }
	static UBehaviorTreeComponent * GetBehaviorTree(UBTNode * NodeOwner) { return NativeCall<UBehaviorTreeComponent *, UBTNode *>(nullptr, "UBTFunctionLibrary.GetBehaviorTree", NodeOwner); }
	static UBlackboardComponent * GetBlackboard(UBTNode * NodeOwner) { return NativeCall<UBlackboardComponent *, UBTNode *>(nullptr, "UBTFunctionLibrary.GetBlackboard", NodeOwner); }
	static bool GetBlackboardValueAsBool(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<bool, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsBool", NodeOwner, Key); }
	static char GetBlackboardValueAsEnum(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<char, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsEnum", NodeOwner, Key); }
	static float GetBlackboardValueAsFloat(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<float, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsFloat", NodeOwner, Key); }
	static int GetBlackboardValueAsInt(UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<int, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsInt", NodeOwner, Key); }
	static FName * GetBlackboardValueAsName(FName * result, UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<FName *, FName *, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsName", result, NodeOwner, Key); }
	static FString * GetBlackboardValueAsString(FString * result, UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<FString *, FString *, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsString", result, NodeOwner, Key); }
	static FVector * GetBlackboardValueAsVector(FVector * result, UBTNode * NodeOwner, const FBlackboardKeySelector * Key) { return NativeCall<FVector *, FVector *, UBTNode *, const FBlackboardKeySelector *>(nullptr, "UBTFunctionLibrary.GetBlackboardValueAsVector", result, NodeOwner, Key); }
	static void SetBlackboardValueAsBool(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, bool Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, bool>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsBool", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsClass(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, UClass * Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, UClass *>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsClass", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsEnum(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, char Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, char>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsEnum", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsFloat(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, float Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, float>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsFloat", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsInt(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, int Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, int>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsInt", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsName(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, FName Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, FName>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsName", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsObject(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, UObject * Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, UObject *>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsObject", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsString(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, FString Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, FString>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsString", NodeOwner, Key, Value); }
	static void SetBlackboardValueAsVector(UBTNode * NodeOwner, const FBlackboardKeySelector * Key, FVector Value) { NativeCall<void, UBTNode *, const FBlackboardKeySelector *, FVector>(nullptr, "UBTFunctionLibrary.SetBlackboardValueAsVector", NodeOwner, Key, Value); }
};

