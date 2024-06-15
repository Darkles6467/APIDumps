#pragma once

#include "BaseDeclarations.h"
struct FStaticSwitchParameter
{
	char __padding[0x1cL];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FStaticSwitchParameter.ParameterName"); }
	bool& ValueField() { return *GetNativePointerField<bool*>(this, "FStaticSwitchParameter.Value"); }
	bool& bOverrideField() { return *GetNativePointerField<bool*>(this, "FStaticSwitchParameter.bOverride"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "FStaticSwitchParameter.ExpressionGUID"); }
};

