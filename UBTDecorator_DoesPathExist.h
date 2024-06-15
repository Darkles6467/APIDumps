#pragma once

#include "BaseDeclarations.h"
#include "UBTDecorator.h"
#include "UBTAuxiliaryNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTDecorator_DoesPathExist : UBTDecorator
{
	char __padding[0x60L];
	FBlackboardKeySelector& BlackboardKeyAField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_DoesPathExist.BlackboardKeyA"); }
	FBlackboardKeySelector& BlackboardKeyBField() { return *GetNativePointerField<FBlackboardKeySelector*>(this, "UBTDecorator_DoesPathExist.BlackboardKeyB"); }
	TEnumAsByte<enum EPathExistanceQueryType::Type>& PathQueryTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPathExistanceQueryType::Type>*>(this, "UBTDecorator_DoesPathExist.PathQueryType"); }

	// Functions

	bool CalculateRawConditionValue(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<bool, UBehaviorTreeComponent *, char *>(this, "UBTDecorator_DoesPathExist.CalculateRawConditionValue", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTDecorator_DoesPathExist.GetStaticDescription", result); }
	void InitializeFromAsset(UBehaviorTree * Asset) { NativeCall<void, UBehaviorTree *>(this, "UBTDecorator_DoesPathExist.InitializeFromAsset", Asset); }
};

