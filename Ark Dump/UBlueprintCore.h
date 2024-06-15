#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UBlueprintCore : UObject
{
	char __padding[0x28L];
	bool& bLegacyNeedToPurgeSkelRefsField() { return *GetNativePointerField<bool*>(this, "UBlueprintCore.bLegacyNeedToPurgeSkelRefs"); }
	bool& bLegacyGeneratedClassIsAuthoritativeField() { return *GetNativePointerField<bool*>(this, "UBlueprintCore.bLegacyGeneratedClassIsAuthoritative"); }
	FGuid& BlueprintGuidField() { return *GetNativePointerField<FGuid*>(this, "UBlueprintCore.BlueprintGuid"); }

	// Functions

	void GenerateDeterministicGuid() { NativeCall<void>(this, "UBlueprintCore.GenerateDeterministicGuid"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UBlueprintCore.Serialize", Ar); }
};

