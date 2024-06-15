#pragma once

#include "BaseDeclarations.h"
struct FBoneNode
{
	char __padding[0x10L];
	FName& Name_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FBoneNode.Name_DEPRECATED"); }
	int& ParentIndex_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "FBoneNode.ParentIndex_DEPRECATED"); }
	TEnumAsByte<enum EBoneTranslationRetargetingMode::Type>& TranslationRetargetingModeField() { return *GetNativePointerField<TEnumAsByte<enum EBoneTranslationRetargetingMode::Type>*>(this, "FBoneNode.TranslationRetargetingMode"); }
	bool& bLockBoneField() { return *GetNativePointerField<bool*>(this, "FBoneNode.bLockBone"); }
	bool& bRemoveBoneField() { return *GetNativePointerField<bool*>(this, "FBoneNode.bRemoveBone"); }

	// Functions

};

