#pragma once

#include "BaseDeclarations.h"
struct GenericApplicationVtbl
{
	char __padding[0xe8L];
	FieldArray<_BYTE, 24> gap8Field() { return {this, "GenericApplicationVtbl.gap8"}; }
};

