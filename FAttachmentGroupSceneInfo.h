#pragma once

#include "BaseDeclarations.h"
struct FAttachmentGroupSceneInfo
{
	char __padding[0x18L];
	FPrimitiveSceneInfo * ParentSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FAttachmentGroupSceneInfo.ParentSceneInfo"); }
	TArray<FPrimitiveSceneInfo *>& PrimitivesField() { return *GetNativePointerField<TArray<FPrimitiveSceneInfo *>*>(this, "FAttachmentGroupSceneInfo.Primitives"); }
};

