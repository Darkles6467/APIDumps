#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_KeepInCone : UBTDecorator
{
	char __padding[0x60L];
	float& ConeHalfAngleField() { return *GetNativePointerField<float*>(this, "UBTDecorator_KeepInCone.ConeHalfAngle"); }
	FBlackboardKeySelector& ConeOriginField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_KeepInCone.ConeOrigin"); }
	FBlackboardKeySelector& ObservedField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_KeepInCone.Observed"); }
	float& ConeHalfAngleDotField() { return *GetNativePointerField<float*>(this, "UBTDecorator_KeepInCone.ConeHalfAngleDot"); }

	// Functions

	bool CalculateCurrentDirection(const UBehaviorTreeComponent * OwnerComp, FVector * Direction) { return NativeCall<bool, const UBehaviorTreeComponent *, FVector *>(this, "UBTDecorator_KeepInCone.CalculateCurrentDirection", OwnerComp, Direction); }
	void DescribeRuntimeValues(const UBehaviorTreeComponent * OwnerComp, char * NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString> * Values) { NativeCall<void, const UBehaviorTreeComponent *, char *, EBTDescriptionVerbosity::Type, TArray<FString> *>(this, "UBTDecorator_KeepInCone.DescribeRuntimeValues", OwnerComp, NodeMemory, Verbosity, Values); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_KeepInCone.GetStaticDescription", result); }
	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTDecorator_KeepInCone.InitializeFromAsset", Asset); }
	void OnBecomeRelevant(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { NativeCall<void, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_KeepInCone.OnBecomeRelevant", OwnerComp, NodeMemory); }
	void TickNode(UBehaviorTreeComponent * OwnerComp, char * NodeMemory, float DeltaSeconds) { NativeCall<void, UBehaviorTreeComponent *, char *, float>(this, "UBTDecorator_KeepInCone.TickNode", OwnerComp, NodeMemory, DeltaSeconds); }
	unsigned __int16 GetInstanceMemorySize() { return NativeCall<unsigned __int16>(this, "UBTDecorator_KeepInCone.GetInstanceMemorySize"); }
};

