#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct EvaluteModuleAsyncTask : FNonAbandonableTask
{
	char __padding[0x18L];
	UGeneratorModule * ModuleField() { return GetNativePointerField<UGeneratorModule *>(this, "EvaluteModuleAsyncTask.Module"); }
	UFloatMap * DestinationField() { return GetNativePointerField<UFloatMap *>(this, "EvaluteModuleAsyncTask.Destination"); }
	int& StartRawInsdexField() { return *GetNativePointerField<int*>(this, "EvaluteModuleAsyncTask.StartRawInsdex"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "EvaluteModuleAsyncTask.Count"); }

	// Functions

	void DoWork() { NativeCall<void>(this, "EvaluteModuleAsyncTask.DoWork"); }
};

