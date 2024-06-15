#pragma once

#include "BaseDeclarations.h"
struct FRepState
{
	char __padding[0x4d0L];
	TArray<unsigned char>& StaticBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FRepState.StaticBuffer"); }
	FUnmappedGuidMgr& UnmappedGuidsField() { return *GetNativePointerField<FUnmappedGuidMgr*>(this, "FRepState.UnmappedGuids"); }
	TSharedPtr<FRepLayout,1>& RepLayoutField() { return *GetNativePointerField<TSharedPtr<FRepLayout,1>*>(this, "FRepState.RepLayout"); }
	TSharedPtr<FRepChangedPropertyTracker,1>& RepChangedPropertyTrackerField() { return *GetNativePointerField<TSharedPtr<FRepChangedPropertyTracker,1>*>(this, "FRepState.RepChangedPropertyTracker"); }
	FieldArray<FRepChangedHistory, 32> ChangeHistoryField() { return {this, "FRepState.ChangeHistory"}; }
	int& HistoryStartField() { return *GetNativePointerField<int*>(this, "FRepState.HistoryStart"); }
	int& HistoryEndField() { return *GetNativePointerField<int*>(this, "FRepState.HistoryEnd"); }
	unsigned int& LastReplicationFrameField() { return *GetNativePointerField<unsigned int*>(this, "FRepState.LastReplicationFrame"); }
	int& NumNaksField() { return *GetNativePointerField<int*>(this, "FRepState.NumNaks"); }
	TArray<FRepChangedHistory>& PreOpenAckHistoryField() { return *GetNativePointerField<TArray<FRepChangedHistory>*>(this, "FRepState.PreOpenAckHistory"); }
	bool& OpenAckedCalledField() { return *GetNativePointerField<bool*>(this, "FRepState.OpenAckedCalled"); }
	bool& AwakeFromDormancyField() { return *GetNativePointerField<bool*>(this, "FRepState.AwakeFromDormancy"); }
	TArray<unsigned short>& ConditionalLifetimeField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FRepState.ConditionalLifetime"); }
	FReplicationFlags& RepFlagsField() { return *GetNativePointerField<FReplicationFlags*>(this, "FRepState.RepFlags"); }
	unsigned int& ActiveStatusChangedField() { return *GetNativePointerField<unsigned int*>(this, "FRepState.ActiveStatusChanged"); }

	// Functions

};

