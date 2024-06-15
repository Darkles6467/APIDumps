#pragma once

#include "BaseDeclarations.h"
struct FMorphTargetMap
{
	char __padding[0x10L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FMorphTargetMap.Name"); }
	UMorphTarget * MorphTargetField() { return GetNativePointerField<UMorphTarget *>(this, "FMorphTargetMap.MorphTarget"); }

	// Functions

};

