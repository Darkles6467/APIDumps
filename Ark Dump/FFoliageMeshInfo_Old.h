#pragma once

#include "BaseDeclarations.h"
struct FFoliageMeshInfo_Old
{
	char __padding[0x28L];
	TArray<FFoliageInstanceCluster_Deprecated>& InstanceClustersField() { return *GetNativePointerField<TArray<FFoliageInstanceCluster_Deprecated>*>(this, "FFoliageMeshInfo_Old.InstanceClusters"); }
	TArray<FFoliageInstance>& InstancesField() { return *GetNativePointerField<TArray<FFoliageInstance>*>(this, "FFoliageMeshInfo_Old.Instances"); }
};

