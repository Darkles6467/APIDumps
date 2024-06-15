#pragma once

#include "BaseDeclarations.h"
struct FComponentSocketDescription
{
	char __padding[0xcL];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FComponentSocketDescription.Name"); }
	TEnumAsByte<enum EComponentSocketType::Type>& TypeField() { return *GetNativePointerField<TEnumAsByte<enum EComponentSocketType::Type>*>(this, "FComponentSocketDescription.Type"); }
};

