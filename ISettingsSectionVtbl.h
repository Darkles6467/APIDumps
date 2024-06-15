#pragma once

#include "BaseDeclarations.h"
struct ISettingsSectionVtbl
{
	char __padding[0xa0L];
	FieldArray<_BYTE, 16> gap8Field() { return {this, "ISettingsSectionVtbl.gap8"}; }
};

