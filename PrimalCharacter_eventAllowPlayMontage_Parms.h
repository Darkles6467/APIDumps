#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventAllowPlayMontage_Parms
{
	char __padding[0x10L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventAllowPlayMontage_Parms.AnimMontage"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventAllowPlayMontage_Parms.ReturnValue"); }
};

