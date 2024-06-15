#pragma once

#include "BaseDeclarations.h"
struct FSavingTaskInfo
{
	char __padding[0x18L];
	int& UniquePaintingIdField() { return *GetNativePointerField<int*>(this, "FSavingTaskInfo.UniquePaintingId"); }
	UPaintingTexture * PaintingTextureField() { return GetNativePointerField<UPaintingTexture *>(this, "FSavingTaskInfo.PaintingTexture"); }
	TRefCountPtr<FGraphEvent>& CompletionHandleField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FSavingTaskInfo.CompletionHandle"); }
};

