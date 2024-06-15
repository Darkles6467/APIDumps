#pragma once

#include "BaseDeclarations.h"
struct FBoneMirrorInfo
{
	char __padding[0x8L];
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FBoneMirrorInfo.SourceIndex"); }
	TEnumAsByte<enum EAxis::Type>& BoneFlipAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxis::Type>*>(this, "FBoneMirrorInfo.BoneFlipAxis"); }

	// Functions

};

