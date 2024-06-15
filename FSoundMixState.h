#pragma once

#include "BaseDeclarations.h"
struct FSoundMixState
{
	char __padding[0x40L];
	bool& IsBaseSoundMixField() { return *GetNativePointerField<bool*>(this, "FSoundMixState.IsBaseSoundMix"); }
	unsigned int& ActiveRefCountField() { return *GetNativePointerField<unsigned int*>(this, "FSoundMixState.ActiveRefCount"); }
	unsigned int& PassiveRefCountField() { return *GetNativePointerField<unsigned int*>(this, "FSoundMixState.PassiveRefCount"); }
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FSoundMixState.StartTime"); }
	long double& FadeInStartTimeField() { return *GetNativePointerField<long double*>(this, "FSoundMixState.FadeInStartTime"); }
	long double& FadeInEndTimeField() { return *GetNativePointerField<long double*>(this, "FSoundMixState.FadeInEndTime"); }
	long double& FadeOutStartTimeField() { return *GetNativePointerField<long double*>(this, "FSoundMixState.FadeOutStartTime"); }
	long double& EndTimeField() { return *GetNativePointerField<long double*>(this, "FSoundMixState.EndTime"); }
	float& InterpValueField() { return *GetNativePointerField<float*>(this, "FSoundMixState.InterpValue"); }
	ESoundMixState::Type& CurrentStateField() { return *GetNativePointerField<ESoundMixState::Type*>(this, "FSoundMixState.CurrentState"); }
};

