#pragma once

#include "BaseDeclarations.h"
struct FFishSnareData
{
	char __padding[0xcL];
	TWeakObjectPtr<APrimalDinoCharacter>& DinoCharacterField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "FFishSnareData.DinoCharacter"); }
	float& SnareTimeField() { return *GetNativePointerField<float*>(this, "FFishSnareData.SnareTime"); }

	// Functions

};

