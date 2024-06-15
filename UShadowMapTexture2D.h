#pragma once

#include "BaseDeclarations.h"
#include "UTexture2D.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UShadowMapTexture2D : UTexture2D
{
	char __padding[0x8L];
	TEnumAsByte<enum EShadowMapFlags>& ShadowmapFlagsField() { return *GetNativePointerField<TEnumAsByte<enum EShadowMapFlags>*>(this, "UShadowMapTexture2D.ShadowmapFlags"); }

	// Functions

};

