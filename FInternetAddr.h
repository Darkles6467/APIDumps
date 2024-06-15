#pragma once

#include "BaseDeclarations.h"
struct FInternetAddr
{
	char __padding[0x8L];

	// Functions

	bool operator==(FInternetAddr * Other) { return NativeCall<bool, FInternetAddr *>(this, "FInternetAddr.operator==", Other); }
};

