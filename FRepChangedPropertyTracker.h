#pragma once

#include "BaseDeclarations.h"
struct IRepChangedPropertyTracker
{
	char __padding[0x8L];
};

struct FRepChangedPropertyTracker : IRepChangedPropertyTracker
{
	char __padding[0x28L];
	unsigned int& LastReplicationGroupFrameField() { return *GetNativePointerField<unsigned int*>(this, "FRepChangedPropertyTracker.LastReplicationGroupFrame"); }
	unsigned int& LastReplicationFrameField() { return *GetNativePointerField<unsigned int*>(this, "FRepChangedPropertyTracker.LastReplicationFrame"); }
	FRepState * LastRepStateField() { return GetNativePointerField<FRepState *>(this, "FRepChangedPropertyTracker.LastRepState"); }
	TArray<FRepChangedParent>& ParentsField() { return *GetNativePointerField<TArray<FRepChangedParent>*>(this, "FRepChangedPropertyTracker.Parents"); }
	unsigned int& ActiveStatusChangedField() { return *GetNativePointerField<unsigned int*>(this, "FRepChangedPropertyTracker.ActiveStatusChanged"); }
	bool& UnconditionalPropChangedField() { return *GetNativePointerField<bool*>(this, "FRepChangedPropertyTracker.UnconditionalPropChanged"); }

	// Functions

	void SetCustomIsActiveOverride(const unsigned __int16 RepIndex, const bool bIsActive) { NativeCall<void, const unsigned __int16, const bool>(this, "FRepChangedPropertyTracker.SetCustomIsActiveOverride", RepIndex, bIsActive); }
};

