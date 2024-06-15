#pragma once

#include "BaseDeclarations.h"
struct FSizeParam
{
	enum ESizeRule
	{
		SizeRule_Auto = 0x0,
		SizeRule_Stretch = 0x1,
	};

	char __padding[0x20L];
	TAttribute<float>& ValueField() { return *GetNativePointerField<TAttribute<float>*>(this, "FSizeParam.Value"); }
};

