#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"

struct UNavRelevantComponent : UActorComponent
{
	char __padding[0x28L];
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "UNavRelevantComponent.Bounds"); }

	// Functions

	void CalcBounds() { NativeCall<void>(this, "UNavRelevantComponent.CalcBounds"); }
	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "UNavRelevantComponent.GetNavigationBounds", result); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UNavRelevantComponent.IsNavigationRelevant"); }
	void OnRegister() { NativeCall<void>(this, "UNavRelevantComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UNavRelevantComponent.OnUnregister"); }
	void SetNavigationRelevancy(bool bRelevant) { NativeCall<void, bool>(this, "UNavRelevantComponent.SetNavigationRelevancy", bRelevant); }
};

