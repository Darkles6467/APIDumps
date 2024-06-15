#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompress.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimCompress_Automatic : UAnimCompress
{
	char __padding[0x8L];
	float& MaxEndEffectorErrorField() { return *GetNativePointerField<float*>(this, "UAnimCompress_Automatic.MaxEndEffectorError"); }

	// Functions

};

