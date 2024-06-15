#pragma once

#include "BaseDeclarations.h"
struct FVisForPrimParams
{
	char __padding[0x58L];
	const FScene * SceneField() { return GetNativePointerField<const FScene *>(this, "FVisForPrimParams.Scene"); }
	FViewInfo * ViewField() { return GetNativePointerField<FViewInfo *>(this, "FVisForPrimParams.View"); }
	FViewElementPDI * OcclusionPDIField() { return GetNativePointerField<FViewElementPDI *>(this, "FVisForPrimParams.OcclusionPDI"); }
	int& StartIndexField() { return *GetNativePointerField<int*>(this, "FVisForPrimParams.StartIndex"); }
	int& NumToProcessField() { return *GetNativePointerField<int*>(this, "FVisForPrimParams.NumToProcess"); }
	bool& bSubmitQueriesField() { return *GetNativePointerField<bool*>(this, "FVisForPrimParams.bSubmitQueries"); }
	bool& bHZBOcclusionField() { return *GetNativePointerField<bool*>(this, "FVisForPrimParams.bHZBOcclusion"); }
	TArray<FPrimitiveOcclusionHistory> * InsertPrimitiveOcclusionHistoryField() { return GetNativePointerField<TArray<FPrimitiveOcclusionHistory> *>(this, "FVisForPrimParams.InsertPrimitiveOcclusionHistory"); }
	TArray<FPrimitiveOcclusionHistory *> * QueriesToReleaseField() { return GetNativePointerField<TArray<FPrimitiveOcclusionHistory *> *>(this, "FVisForPrimParams.QueriesToRelease"); }
	TArray<FHZBBound> * HZBBoundsToAddField() { return GetNativePointerField<TArray<FHZBBound> *>(this, "FVisForPrimParams.HZBBoundsToAdd"); }
	TArray<FOcclusionBounds> * QueriesToAddField() { return GetNativePointerField<TArray<FOcclusionBounds> *>(this, "FVisForPrimParams.QueriesToAdd"); }
	int& NumOccludedPrimsField() { return *GetNativePointerField<int*>(this, "FVisForPrimParams.NumOccludedPrims"); }
	TArray<bool> * SubIsOccludedField() { return GetNativePointerField<TArray<bool> *>(this, "FVisForPrimParams.SubIsOccluded"); }
};

