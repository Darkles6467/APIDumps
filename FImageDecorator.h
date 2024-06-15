#pragma once

#include "BaseDeclarations.h"
#include "ITextDecorator.h"

struct FImageDecorator : ITextDecorator
{
	char __padding[0x18L];
	FString& RunNameField() { return *GetNativePointerField<FString*>(this, "FImageDecorator.RunName"); }
};

