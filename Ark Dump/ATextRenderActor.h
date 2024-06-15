#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATextRenderActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UTextRenderComponent>& TextRenderField() { return *GetNativePointerField<TSubobjectPtr<UTextRenderComponent>*>(this, "ATextRenderActor.TextRender"); }

	// Functions

};

