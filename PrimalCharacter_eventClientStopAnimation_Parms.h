#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventClientStopAnimation_Parms
{
	char __padding[0x10L];
	UAnimMontage * AnimMontageField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalCharacter_eventClientStopAnimation_Parms.AnimMontage"); }
	bool& bStopOnOwnerField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventClientStopAnimation_Parms.bStopOnOwner"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventClientStopAnimation_Parms.BlendOutTime"); }
};

