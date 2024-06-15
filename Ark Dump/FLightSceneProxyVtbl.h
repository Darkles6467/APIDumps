#pragma once

#include "BaseDeclarations.h"
struct FLightSceneProxyVtbl
{
	char __padding[0xf8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "FLightSceneProxyVtbl.gap8"}; }
};

