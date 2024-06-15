#pragma once

#include "BaseDeclarations.h"
struct INavLinkCustomInterfaceVtbl
{
	char __padding[0x48L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "INavLinkCustomInterfaceVtbl.gap8"}; }
};

