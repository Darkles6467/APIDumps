#pragma once

#include "BaseDeclarations.h"
struct FFoliageRenderInstanceParams
{
	char __padding[0x198L];
	bool& bNeedsSingleLODRunsField() { return *GetNativePointerField<bool*>(this, "FFoliageRenderInstanceParams.bNeedsSingleLODRuns"); }
	bool& bNeedsMultipleLODRunsField() { return *GetNativePointerField<bool*>(this, "FFoliageRenderInstanceParams.bNeedsMultipleLODRuns"); }
	bool& bOverestimateField() { return *GetNativePointerField<bool*>(this, "FFoliageRenderInstanceParams.bOverestimate"); }
	FieldArray<int, 10> TotalSingleLODInstancesField() { return {this, "FFoliageRenderInstanceParams.TotalSingleLODInstances"}; }
	FieldArray<int, 10> TotalMultipleLODInstancesField() { return {this, "FFoliageRenderInstanceParams.TotalMultipleLODInstances"}; }
};

struct FFoliageCullInstanceParams : FFoliageRenderInstanceParams
{
	char __padding[0x1e8L];
	FConvexVolume& ViewFrustumLocalField() { return *GetNativePointerField<FConvexVolume*>(this, "FFoliageCullInstanceParams.ViewFrustumLocal"); }
	FieldArray<int, 10> MinInstancesToSplitField() { return {this, "FFoliageCullInstanceParams.MinInstancesToSplit"}; }
	FVector& ViewOriginInLocalZeroField() { return *GetNativePointerField<FVector*>(this, "FFoliageCullInstanceParams.ViewOriginInLocalZero"); }
	FVector& ViewOriginInLocalOneField() { return *GetNativePointerField<FVector*>(this, "FFoliageCullInstanceParams.ViewOriginInLocalOne"); }
	int& LODsField() { return *GetNativePointerField<int*>(this, "FFoliageCullInstanceParams.LODs"); }
	FieldArray<float, 10> LODPlanesMaxField() { return {this, "FFoliageCullInstanceParams.LODPlanesMax"}; }
	FieldArray<float, 10> LODPlanesMinField() { return {this, "FFoliageCullInstanceParams.LODPlanesMin"}; }
	int& FirstOcclusionNodeField() { return *GetNativePointerField<int*>(this, "FFoliageCullInstanceParams.FirstOcclusionNode"); }
	int& LastOcclusionNodeField() { return *GetNativePointerField<int*>(this, "FFoliageCullInstanceParams.LastOcclusionNode"); }
	const TArray<bool> * OcclusionResultsField() { return GetNativePointerField<const TArray<bool> *>(this, "FFoliageCullInstanceParams.OcclusionResults"); }
	int& OcclusionResultsStartField() { return *GetNativePointerField<int*>(this, "FFoliageCullInstanceParams.OcclusionResultsStart"); }
	bool& bShouldSortField() { return *GetNativePointerField<bool*>(this, "FFoliageCullInstanceParams.bShouldSort"); }
};

