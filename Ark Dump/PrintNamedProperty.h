#pragma once

#include "BaseDeclarations.h"
struct PrintNamedProperty
{
	char __padding[0x20L];
	wchar_t * propertyNameField() { return GetNativePointerField<wchar_t *>(this, "PrintNamedProperty.propertyName"); }
	PrintPropertyValue& propertyValueField() { return *GetNativePointerField<PrintPropertyValue*>(this, "PrintNamedProperty.propertyValue"); }
};

