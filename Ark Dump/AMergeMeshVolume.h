#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMergeMeshVolume : AVolume
{
	char __padding[0x10L];
	float& GridCountXField() { return *GetNativePointerField<float*>(this, "AMergeMeshVolume.GridCountX"); }
	float& GridCountYField() { return *GetNativePointerField<float*>(this, "AMergeMeshVolume.GridCountY"); }
	float& GridCountZField() { return *GetNativePointerField<float*>(this, "AMergeMeshVolume.GridCountZ"); }

	// Functions

};

