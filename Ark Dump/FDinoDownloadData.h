#pragma once

#include "BaseDeclarations.h"
struct FDinoDownloadData
{
	char __padding[0x10L];
	unsigned int& AllowDownloadTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FDinoDownloadData.AllowDownloadTimeUTC"); }
	TSubclassOf<APrimalDinoCharacter>& UniqueDinoField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "FDinoDownloadData.UniqueDino"); }

	// Functions

};

