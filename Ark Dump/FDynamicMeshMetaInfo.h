#pragma once

#include "BaseDeclarations.h"
struct FDynamicMeshMetaInfo
{
	char __padding[0x20L];
	long double& TimeDeltaField() { return *GetNativePointerField<long double*>(this, "FDynamicMeshMetaInfo.TimeDelta"); }
	float& SizeDeltaField() { return *GetNativePointerField<float*>(this, "FDynamicMeshMetaInfo.SizeDelta"); }
	bool& bWantStreamField() { return *GetNativePointerField<bool*>(this, "FDynamicMeshMetaInfo.bWantStream"); }
	int& SortValueField() { return *GetNativePointerField<int*>(this, "FDynamicMeshMetaInfo.SortValue"); }
};

