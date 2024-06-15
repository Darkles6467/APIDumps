#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FillObjectsMapAsyncTask : FNonAbandonableTask
{
	char __padding[0x40L];
	float& FixedZField() { return *GetNativePointerField<float*>(this, "FillObjectsMapAsyncTask.FixedZ"); }
	UFloatMap * ProbabilityMapField() { return GetNativePointerField<UFloatMap *>(this, "FillObjectsMapAsyncTask.ProbabilityMap"); }
	int& StartRawInsdexField() { return *GetNativePointerField<int*>(this, "FillObjectsMapAsyncTask.StartRawInsdex"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FillObjectsMapAsyncTask.Count"); }
	int& BaseObjectIndexField() { return *GetNativePointerField<int*>(this, "FillObjectsMapAsyncTask.BaseObjectIndex"); }
	TArray<FObjectListItem>& ObjectsListField() { return *GetNativePointerField<TArray<FObjectListItem>*>(this, "FillObjectsMapAsyncTask.ObjectsList"); }
	int& MapSeedField() { return *GetNativePointerField<int*>(this, "FillObjectsMapAsyncTask.MapSeed"); }
	int& StepField() { return *GetNativePointerField<int*>(this, "FillObjectsMapAsyncTask.Step"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "FillObjectsMapAsyncTask.DoWork"); }
};

