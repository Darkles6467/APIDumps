#pragma once

#include "BaseDeclarations.h"
#include "FObjectResource.h"

struct FObjectImport : FObjectResource
{
	char __padding[0x2cL];
	FName& ClassPackageField() { return *GetNativePointerField<FName*>(this, "FObjectImport.ClassPackage"); }
	FName& ClassNameField() { return *GetNativePointerField<FName*>(this, "FObjectImport.ClassName"); }
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FObjectImport.SourceIndex"); }

	// Functions

};

