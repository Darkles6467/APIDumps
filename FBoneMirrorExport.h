#pragma once

#include "BaseDeclarations.h"
struct FBoneMirrorExport
{
	char __padding[0x14L];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneMirrorExport.BoneName"); }
	FName& SourceBoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneMirrorExport.SourceBoneName"); }
	TEnumAsByte<enum EAxis::Type>& BoneFlipAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxis::Type>*>(this, "FBoneMirrorExport.BoneFlipAxis"); }

	// Functions

};

