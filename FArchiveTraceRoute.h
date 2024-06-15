#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveTraceRoute : FArchiveUObject
{
	char __padding[0x78L];
	int& DepthField() { return *GetNativePointerField<int*>(this, "FArchiveTraceRoute.Depth"); }
	bool& bIncludeTransientsField() { return *GetNativePointerField<bool*>(this, "FArchiveTraceRoute.bIncludeTransients"); }
	EObjectFlags& RequiredFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FArchiveTraceRoute.RequiredFlags"); }

	// Functions

	void CalculateReferenceDepthsForNode(FObjectGraphNode * ObjectNode) { NativeCall<void, FObjectGraphNode *>(this, "FArchiveTraceRoute.CalculateReferenceDepthsForNode", ObjectNode); }
	bool FindClosestLink(FObjectGraphNode * CurrentNode, int * LowestDepth, FArchiveTraceRoute::FRouteLink * ClosestLink) { return NativeCall<bool, FObjectGraphNode *, int *, FArchiveTraceRoute::FRouteLink *>(this, "FArchiveTraceRoute.FindClosestLink", CurrentNode, LowestDepth, ClosestLink); }
	void GenerateObjectGraph(TSparseArray<UObject *,FDefaultSparseArrayAllocator> * Objects) { NativeCall<void, TSparseArray<UObject *,FDefaultSparseArrayAllocator> *>(this, "FArchiveTraceRoute.GenerateObjectGraph", Objects); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchiveTraceRoute.GetArchiveName", result); }
	static FString * PrintRootPath(FString * result, const TMap<UObject *,UProperty *,FDefaultSetAllocator,TDefaultMapKeyFuncs<UObject *,UProperty *,0> > * Route, UObject * TargetObject) { return NativeCall<FString *, FString *, const TMap<UObject *,UProperty *,FDefaultSetAllocator,TDefaultMapKeyFuncs<UObject *,UProperty *,0> > *, UObject *>(nullptr, "FArchiveTraceRoute.PrintRootPath", result, Route, TargetObject); }
};

