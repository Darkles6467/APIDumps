#pragma once

#include "BaseDeclarations.h"
struct ITextInputMethodChangeNotifier
{
	enum ELayoutChangeType
	{
		Created = 0x0,
		Changed = 0x1,
		Destroyed = 0x2,
	};

	char __padding[0x8L];
};

