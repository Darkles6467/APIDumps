#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_CompareBBEntries : UBTDecorator
{
	char __padding[0x60L];
	TEnumAsByte<enum EBlackBoardEntryComparison::Type>& OperatorField() { return *GetNativePointerField<TEnumAsByte<enum EBlackBoardEntryComparison::Type>*>(this, "UBTDecorator_CompareBBEntries.Operator"); }
	FBlackboardKeySelector& BlackboardKeyAField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_CompareBBEntries.BlackboardKeyA"); }
	FBlackboardKeySelector& BlackboardKeyBField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_CompareBBEntries.BlackboardKeyB"); }

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_CompareBBEntries.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_CompareBBEntries.GetStaticDescription", result); }
	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTDecorator_CompareBBEntries.InitializeFromAsset", Asset); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_CompareBBEntries.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void OnBlackboardChange(const UBlackboardComponent * Blackboard, char ChangedKeyID) { NativeCall<void, const UBlackboardComponent *, char>(this, "UBTDecorator_CompareBBEntries.OnBlackboardChange", Blackboard, ChangedKeyID); }
	void OnCeaseRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_CompareBBEntries.OnCeaseRelevant", OwnerComp, NodeMemory); }
	void PostInitProperties() { NativeCall<void>(this, "UBTDecorator_CompareBBEntries.PostInitProperties"); }
};

