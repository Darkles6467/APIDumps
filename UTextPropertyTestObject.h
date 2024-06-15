#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTextPropertyTestObject : UObject
{
	char __padding[0x78L];
	FText& DefaultedTextField() { return *GetNativePointerField<FText*>(this, "UTextPropertyTestObject.DefaultedText"); }
	FText& UndefaultedTextField() { return *GetNativePointerField<FText*>(this, "UTextPropertyTestObject.UndefaultedText"); }
	FText& TransientTextField() { return *GetNativePointerField<FText*>(this, "UTextPropertyTestObject.TransientText"); }

	// Functions

};

