#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeInstanceId
{
	char __padding[0x38L];
	UBehaviorTree * TreeAssetField() { return GetNativePointerField<UBehaviorTree *>(this, "FBehaviorTreeInstanceId.TreeAsset"); }
	TArray<unsigned short>& PathField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FBehaviorTreeInstanceId.Path"); }
	TArray<unsigned char>& InstanceMemoryField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBehaviorTreeInstanceId.InstanceMemory"); }
	int& FirstNodeInstanceField() { return *GetNativePointerField<int*>(this, "FBehaviorTreeInstanceId.FirstNodeInstance"); }
};

