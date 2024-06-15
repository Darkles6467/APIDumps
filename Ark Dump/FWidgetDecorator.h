#pragma once

#include "BaseDeclarations.h"
#include "ITextDecorator.h"

struct FWidgetDecorator : ITextDecorator
{
	char __padding[0x18L];
	FString& RunNameField() { return *GetNativePointerField<FString*>(this, "FWidgetDecorator.RunName"); }
};

