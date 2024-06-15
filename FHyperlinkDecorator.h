#pragma once

#include "BaseDeclarations.h"
#include "ITextDecorator.h"

struct FHyperlinkDecorator : ITextDecorator
{
	char __padding[0x28L];
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FHyperlinkDecorator.Id"); }
};

