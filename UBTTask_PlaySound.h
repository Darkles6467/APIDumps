#pragma once

#include "BaseDeclarations.h"
#include "UBTTaskNode.h"
#include "UBTNode.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBTTask_PlaySound : UBTTaskNode
{
	char __padding[0x8L];
	USoundCue * SoundToPlayField() { return GetNativePointerField<USoundCue *>(this, "UBTTask_PlaySound.SoundToPlay"); }

	// Functions

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent * OwnerComp, char * NodeMemory) { return NativeCall<EBTNodeResult::Type, UBehaviorTreeComponent *, char *>(this, "UBTTask_PlaySound.ExecuteTask", OwnerComp, NodeMemory); }
	FString * GetStaticDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UBTTask_PlaySound.GetStaticDescription", result); }
};

