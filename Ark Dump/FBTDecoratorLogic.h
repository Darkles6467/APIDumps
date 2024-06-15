#pragma once

#include "BaseDeclarations.h"
struct FBTDecoratorLogic
{
	char __padding[0x4L];
	TEnumAsByte<enum EBTDecoratorLogic::Type>& OperationField() { return *GetNativePointerField<TEnumAsByte<enum EBTDecoratorLogic::Type>*>(this, "FBTDecoratorLogic.Operation"); }
	unsigned __int16& NumberField() { return *GetNativePointerField<unsigned __int16*>(this, "FBTDecoratorLogic.Number"); }

	// Functions

};

