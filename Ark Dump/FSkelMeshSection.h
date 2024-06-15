#pragma once

#include "BaseDeclarations.h"
struct FSkelMeshSection
{
	char __padding[0x14L];
	unsigned __int16& MaterialIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FSkelMeshSection.MaterialIndex"); }
	unsigned __int16& ChunkIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FSkelMeshSection.ChunkIndex"); }
	unsigned int& BaseIndexField() { return *GetNativePointerField<unsigned int*>(this, "FSkelMeshSection.BaseIndex"); }
	unsigned int& NumTrianglesField() { return *GetNativePointerField<unsigned int*>(this, "FSkelMeshSection.NumTriangles"); }
	TEnumAsByte<enum ETriangleSortOption>& TriangleSortingField() { return *GetNativePointerField<TEnumAsByte<enum ETriangleSortOption>*>(this, "FSkelMeshSection.TriangleSorting"); }
	bool& bDisabledField() { return *GetNativePointerField<bool*>(this, "FSkelMeshSection.bDisabled"); }
	__int16& CorrespondClothSectionIndexField() { return *GetNativePointerField<__int16*>(this, "FSkelMeshSection.CorrespondClothSectionIndex"); }
	char& bEnableClothLOD_DEPRECATEDField() { return *GetNativePointerField<char*>(this, "FSkelMeshSection.bEnableClothLOD_DEPRECATED"); }
};

