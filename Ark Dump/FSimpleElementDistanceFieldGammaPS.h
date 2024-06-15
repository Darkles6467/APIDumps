#pragma once

#include "BaseDeclarations.h"
#include "FSimpleElementMaskedGammaBasePS.h"
#include "FSimpleElementGammaBasePS.h"
#include "FSimpleElementPS.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleElementDistanceFieldGammaPS : FSimpleElementMaskedGammaBasePS
{
	char __padding[0x40L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementDistanceFieldGammaPS.Serialize", Ar); }
};

