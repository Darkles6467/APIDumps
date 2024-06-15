#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintGeneratedClass.h"
#include "UClass.h"
#include "UStruct.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	char __padding[0x48L];
	TArray<FBakedAnimationStateMachine>& BakedStateMachinesField() { return *GetNativePointerField<TArray<FBakedAnimationStateMachine>*>(this, "UAnimBlueprintGeneratedClass.BakedStateMachines"); }
	USkeleton * TargetSkeletonField() { return GetNativePointerField<USkeleton *>(this, "UAnimBlueprintGeneratedClass.TargetSkeleton"); }
	TArray<FAnimNotifyEvent>& AnimNotifiesField() { return *GetNativePointerField<TArray<FAnimNotifyEvent>*>(this, "UAnimBlueprintGeneratedClass.AnimNotifies"); }
	int& RootAnimNodeIndexField() { return *GetNativePointerField<int*>(this, "UAnimBlueprintGeneratedClass.RootAnimNodeIndex"); }

	// Functions

	void Link(FArchive * Ar, bool bRelinkExistingProperties) { NativeCall<void, FArchive *, bool>(this, "UAnimBlueprintGeneratedClass.Link", Ar, bRelinkExistingProperties); }
	void PurgeClass(bool bRecompilingOnLoad) { NativeCall<void, bool>(this, "UAnimBlueprintGeneratedClass.PurgeClass", bRecompilingOnLoad); }
};

