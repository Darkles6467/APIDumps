#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_ConeCheck : UBTDecorator
{
	char __padding[0x88L];
	float& ConeHalfAngleField() { return *GetNativePointerField<float*>(this, "UBTDecorator_ConeCheck.ConeHalfAngle"); }
	FBlackboardKeySelector& ConeOriginField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_ConeCheck.ConeOrigin"); }
	FBlackboardKeySelector& ConeDirectionField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_ConeCheck.ConeDirection"); }
	FBlackboardKeySelector& ObservedField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_ConeCheck.Observed"); }
	float& ConeHalfAngleDotField() { return *GetNativePointerField<float*>(this, "UBTDecorator_ConeCheck.ConeHalfAngleDot"); }

	// Functions

	bool CalculateDirection(const UBlackboardComponent * BlackboardComp, const FBlackboardKeySelector * Origin, const FBlackboardKeySelector * End, FVector * Direction) { return NativeCall<bool, const UBlackboardComponent *, const FBlackboardKeySelector *, const FBlackboardKeySelector *, FVector *>(this, "UBTDecorator_ConeCheck.CalculateDirection", BlackboardComp, Origin, End, Direction); }
	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_ConeCheck.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_ConeCheck.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_ConeCheck.GetStaticDescription", result); }
	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTDecorator_ConeCheck.InitializeFromAsset", Asset); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_ConeCheck.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTDecorator_ConeCheck.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
};

