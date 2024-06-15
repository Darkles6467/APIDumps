#pragma once

#include "BaseDeclarations.h"
struct PrintPropertiesCollection
{
	char __padding[0x10L];
	unsigned int& numberOfPropertiesField() { return *GetNativePointerField<unsigned int*>(this, "PrintPropertiesCollection.numberOfProperties"); }
	PrintNamedProperty * propertiesCollectionField() { return GetNativePointerField<PrintNamedProperty *>(this, "PrintPropertiesCollection.propertiesCollection"); }
};

