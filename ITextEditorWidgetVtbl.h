#pragma once

#include "BaseDeclarations.h"
struct ITextEditorWidgetVtbl
{
	char __padding[0x120L];
	FieldArray<_BYTE, 32> gap8Field() { return {this, "ITextEditorWidgetVtbl.gap8"}; }
};

