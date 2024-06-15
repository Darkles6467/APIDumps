#pragma once

#include "BaseDeclarations.h"
struct FSyntaxTokenizer
{
	enum ETokenType
	{
		Syntax = 0x0,
		Literal = 0x1,
	};

	char __padding[0x18L];
	TArray<FSyntaxTokenizer::FRule>& RulesField() { return *GetNativePointerField<TArray<FSyntaxTokenizer::FRule>*>(this, "FSyntaxTokenizer.Rules"); }
};

