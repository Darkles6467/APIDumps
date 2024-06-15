#pragma once

#include "BaseDeclarations.h"
struct FNodeDebugData
{
	char __padding[0x20L];
	float& AbsoluteWeightField() { return *GetNativePointerField<float*>(this, "FNodeDebugData.AbsoluteWeight"); }
	TArray<FNodeDebugData::DebugItem>& NodeChainField() { return *GetNativePointerField<TArray<FNodeDebugData::DebugItem>*>(this, "FNodeDebugData.NodeChain"); }

	// Functions

	void DebugItem(const FNodeDebugData::DebugItem * __that) { NativeCall<void, const FNodeDebugData::DebugItem *>(this, "FNodeDebugData.DebugItem", __that); }
	void DebugItem() { NativeCall<void>(this, "FNodeDebugData.DebugItem"); }
	void AddDebugItem(FString DebugData, bool bPoseSource) { NativeCall<void, FString, bool>(this, "FNodeDebugData.AddDebugItem", DebugData, bPoseSource); }
	FNodeDebugData * BranchFlow(float BranchWeight) { return NativeCall<FNodeDebugData *, float>(this, "FNodeDebugData.BranchFlow", BranchWeight); }
	TArray<FNodeDebugData::FFlattenedDebugData> * GetFlattenedDebugData(TArray<FNodeDebugData::FFlattenedDebugData> * result) { return NativeCall<TArray<FNodeDebugData::FFlattenedDebugData> *, TArray<FNodeDebugData::FFlattenedDebugData> *>(this, "FNodeDebugData.GetFlattenedDebugData", result); }
	void GetFlattenedDebugData(TArray<FNodeDebugData::FFlattenedDebugData> * FlattenedDebugData, int Indent, int * ChainID) { NativeCall<void, TArray<FNodeDebugData::FFlattenedDebugData> *, int, int *>(this, "FNodeDebugData.GetFlattenedDebugData", FlattenedDebugData, Indent, ChainID); }
};

