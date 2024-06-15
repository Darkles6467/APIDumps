#pragma once

#include "BaseDeclarations.h"
#include "UBlueprint.h"
#include "UBlueprintCore.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimBlueprint : UBlueprint
{
	char __padding[0x18L];
	USkeleton * TargetSkeletonField() { return GetNativePointerField<USkeleton *>(this, "UAnimBlueprint.TargetSkeleton"); }
	TArray<FAnimGroupInfo>& GroupsField() { return *GetNativePointerField<TArray<FAnimGroupInfo>*>(this, "UAnimBlueprint.Groups"); }

	// Functions

};

