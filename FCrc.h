#pragma once

#include "BaseDeclarations.h"
struct FCrc
{

	// Functions

	static unsigned int MemCrc32(const void * InData, int Length, unsigned int CRC) { return NativeCall<unsigned int, const void *, int, unsigned int>(nullptr, "FCrc.MemCrc32", InData, Length, CRC); }
	static unsigned int MemCrc_DEPRECATED(const void * InData, int Length, unsigned int CRC) { return NativeCall<unsigned int, const void *, int, unsigned int>(nullptr, "FCrc.MemCrc_DEPRECATED", InData, Length, CRC); }
};

