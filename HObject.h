#pragma once

#include "BaseDeclarations.h"
#include "HHitProxy.h"
#include "FRefCountedObject.h"

struct HObject : HHitProxy
{
	char __padding[0x8L];
};

