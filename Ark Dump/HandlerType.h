#pragma once

#include "BaseDeclarations.h"
struct HandlerType
{
	char __padding[0x14L];
	None& adjectivesField() { return *GetNativePointerField<None*>(this, "HandlerType.adjectives"); }
	None& pTypeField() { return *GetNativePointerField<None*>(this, "HandlerType.pType"); }
	None& dispCatchObjField() { return *GetNativePointerField<None*>(this, "HandlerType.dispCatchObj"); }
	None& addressOfHandlerField() { return *GetNativePointerField<None*>(this, "HandlerType.addressOfHandler"); }
	None& dispFrameField() { return *GetNativePointerField<None*>(this, "HandlerType.dispFrame"); }
};

