#pragma once

#include "BaseDeclarations.h"
struct FPainterMeshBuildDataProvider
{
	char __padding[0x8L];
	const TkDOPTree<FPainterMeshBuildDataProvider const ,unsigned __int64> * kDopTreeField() { return GetNativePointerField<const TkDOPTree<FPainterMeshBuildDataProvider const ,unsigned __int64> *>(this, "FPainterMeshBuildDataProvider.kDopTree"); }
};

