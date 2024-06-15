#pragma once

#include "BaseDeclarations.h"
struct FStaticComponentMaskParameter
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FStaticComponentMaskParameter.ParameterName"); }
	bool& RField() { return *GetNativePointerField<bool*>(this, "FStaticComponentMaskParameter.R"); }
	bool& GField() { return *GetNativePointerField<bool*>(this, "FStaticComponentMaskParameter.G"); }
	bool& BField() { return *GetNativePointerField<bool*>(this, "FStaticComponentMaskParameter.B"); }
	bool& AField() { return *GetNativePointerField<bool*>(this, "FStaticComponentMaskParameter.A"); }
	bool& bOverrideField() { return *GetNativePointerField<bool*>(this, "FStaticComponentMaskParameter.bOverride"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "FStaticComponentMaskParameter.ExpressionGUID"); }
};

