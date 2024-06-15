#pragma once

#include "BaseDeclarations.h"
struct PrintPropertyValue
{
	char __padding[0x18L];
	EPrintPropertyType& ePropertyTypeField() { return *GetNativePointerField<EPrintPropertyType*>(this, "PrintPropertyValue.ePropertyType"); }
	PrintPropertyValue::<unnamed_type_value>& valueField() { return *GetNativePointerField<PrintPropertyValue::<unnamed_type_value>*>(this, "PrintPropertyValue.value"); }
};

