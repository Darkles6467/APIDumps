#pragma once

#include "BaseDeclarations.h"
struct FInterpPropertyGatherer
{
	char __padding[0x10L];
	TArray<FName> * GatheredPropertyPathsField() { return GetNativePointerField<TArray<FName> *>(this, "FInterpPropertyGatherer.GatheredPropertyPaths"); }
};

struct FStructInterpPropertyGatherer : FInterpPropertyGatherer
{
	char __padding[0x8L];
	FName& DesiredStructNameField() { return *GetNativePointerField<FName*>(this, "FStructInterpPropertyGatherer.DesiredStructName"); }
};

