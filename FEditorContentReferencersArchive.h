#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FEditorContentReferencersArchive : FArchiveUObject
{
	char __padding[0xb0L];
	TArray<UPackage *>& EditorContentPackagesField() { return *GetNativePointerField<TArray<UPackage *>*>(this, "FEditorContentReferencersArchive.EditorContentPackages"); }
};

