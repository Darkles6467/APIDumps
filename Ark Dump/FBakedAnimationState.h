#pragma once

#include "BaseDeclarations.h"
struct FBakedAnimationState
{
	char __padding[0x30L];
	FName& StateNameField() { return *GetNativePointerField<FName*>(this, "FBakedAnimationState.StateName"); }
	TArray<FBakedStateExitTransition>& TransitionsField() { return *GetNativePointerField<TArray<FBakedStateExitTransition>*>(this, "FBakedAnimationState.Transitions"); }
	int& StateRootNodeIndexField() { return *GetNativePointerField<int*>(this, "FBakedAnimationState.StateRootNodeIndex"); }
	int& StartNotifyField() { return *GetNativePointerField<int*>(this, "FBakedAnimationState.StartNotify"); }
	int& EndNotifyField() { return *GetNativePointerField<int*>(this, "FBakedAnimationState.EndNotify"); }
	int& FullyBlendedNotifyField() { return *GetNativePointerField<int*>(this, "FBakedAnimationState.FullyBlendedNotify"); }
	bool& bIsAConduitField() { return *GetNativePointerField<bool*>(this, "FBakedAnimationState.bIsAConduit"); }
	int& EntryRuleNodeIndexField() { return *GetNativePointerField<int*>(this, "FBakedAnimationState.EntryRuleNodeIndex"); }

	// Functions

};

