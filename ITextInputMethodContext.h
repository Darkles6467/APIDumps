#pragma once

#include "BaseDeclarations.h"
struct ITextInputMethodContext
{
	enum ECaretPosition
	{
		Beginning = 0x0,
		Ending = 0x1,
	};

	char __padding[0x8L];
};

