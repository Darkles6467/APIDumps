#pragma once

#include "BaseDeclarations.h"
struct FStripDataFlags
{
	enum EStrippedData
	{
		None = 0x0,
		Editor = 0x1,
		Server = 0x2,
		All = 0xff,
	};

	char __padding[0x2L];
	char& GlobalStripFlagsField() { return *GetNativePointerField<char*>(this, "FStripDataFlags.GlobalStripFlags"); }
	char& ClassStripFlagsField() { return *GetNativePointerField<char*>(this, "FStripDataFlags.ClassStripFlags"); }

	// Functions

};

