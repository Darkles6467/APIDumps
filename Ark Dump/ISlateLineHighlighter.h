#pragma once

#include "BaseDeclarations.h"
struct ILineHighlighter
{
	char __padding[0x8L];
};

struct ISlateLineHighlighter : ILineHighlighter
{
};

