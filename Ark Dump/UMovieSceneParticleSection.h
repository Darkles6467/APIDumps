#pragma once

#include "BaseDeclarations.h"
#include "UMovieSceneSection.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneParticleSection : UMovieSceneSection
{
	char __padding[0x8L];
	TEnumAsByte<enum EParticleKey::Type>& KeyTypeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleKey::Type>*>(this, "UMovieSceneParticleSection.KeyType"); }

	// Functions

};

