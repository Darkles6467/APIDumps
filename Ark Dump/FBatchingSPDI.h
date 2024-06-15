#pragma once

#include "BaseDeclarations.h"
struct FStaticPrimitiveDrawInterface
{
	char __padding[0x8L];
};

struct FBatchingSPDI : FStaticPrimitiveDrawInterface
{
	char __padding[0x10L];
	FPrimitiveSceneInfo * PrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FBatchingSPDI.PrimitiveSceneInfo"); }
};

