#pragma once

#include "BaseDeclarations.h"
struct FOperationStackInfo
{
	char __padding[0x4L];
	unsigned __int16& NumLeftField() { return *GetNativePointerField<unsigned __int16*>(this, "FOperationStackInfo.NumLeft"); }
	TEnumAsByte<enum EBTDecoratorLogic::Type>& OpField() { return *GetNativePointerField<TEnumAsByte<enum EBTDecoratorLogic::Type>*>(this, "FOperationStackInfo.Op"); }
};

