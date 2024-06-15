#pragma once

#include "BaseDeclarations.h"
struct BuildContext
{
	char __padding[0x30L];
	dtTileCacheLayer * layerField() { return GetNativePointerField<dtTileCacheLayer *>(this, "BuildContext.layer"); }
	dtTileCacheDistanceField * dfieldField() { return GetNativePointerField<dtTileCacheDistanceField *>(this, "BuildContext.dfield"); }
	dtTileCacheContourSet * lcsetField() { return GetNativePointerField<dtTileCacheContourSet *>(this, "BuildContext.lcset"); }
	dtTileCacheClusterSet * lclustersField() { return GetNativePointerField<dtTileCacheClusterSet *>(this, "BuildContext.lclusters"); }
	dtTileCachePolyMesh * lmeshField() { return GetNativePointerField<dtTileCachePolyMesh *>(this, "BuildContext.lmesh"); }
	dtTileCacheAlloc * allocField() { return GetNativePointerField<dtTileCacheAlloc *>(this, "BuildContext.alloc"); }
};

