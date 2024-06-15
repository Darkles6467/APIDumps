#pragma once

#include "BaseDeclarations.h"
struct FSkelMeshExtraInfluenceImportData
{
	char __padding[0xb8L];
	FReferenceSkeleton& RefSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "FSkelMeshExtraInfluenceImportData.RefSkeleton"); }
	TArray<FVertInfluence>& InfluencesField() { return *GetNativePointerField<TArray<FVertInfluence>*>(this, "FSkelMeshExtraInfluenceImportData.Influences"); }
	TArray<FMeshWedge>& WedgesField() { return *GetNativePointerField<TArray<FMeshWedge>*>(this, "FSkelMeshExtraInfluenceImportData.Wedges"); }
	TArray<FMeshFace>& FacesField() { return *GetNativePointerField<TArray<FMeshFace>*>(this, "FSkelMeshExtraInfluenceImportData.Faces"); }
	TArray<FVector>& PointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FSkelMeshExtraInfluenceImportData.Points"); }
	int& MaxBoneCountPerChunkField() { return *GetNativePointerField<int*>(this, "FSkelMeshExtraInfluenceImportData.MaxBoneCountPerChunk"); }
};

