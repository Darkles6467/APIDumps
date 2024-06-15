#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompress.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoneData.h"

struct UDEPRECATED_AnimCompress_RevertToRaw : UAnimCompress
{

	// Functions

	void DoReduction(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *>(this, "UDEPRECATED_AnimCompress_RevertToRaw.DoReduction", AnimSeq, BoneData); }
};

