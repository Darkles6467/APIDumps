#pragma once

#include "BaseDeclarations.h"
struct FShaderParameterMap
{
	char __padding[0x50L];

	// Functions

	bool ContainsParameterAllocation(const wchar_t * ParameterName) { return NativeCall<bool, const wchar_t *>(this, "FShaderParameterMap.ContainsParameterAllocation", ParameterName); }
	bool FindParameterAllocation(const wchar_t * ParameterName, unsigned __int16 * OutBufferIndex, unsigned __int16 * OutBaseIndex, unsigned __int16 * OutSize) { return NativeCall<bool, const wchar_t *, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *>(this, "FShaderParameterMap.FindParameterAllocation", ParameterName, OutBufferIndex, OutBaseIndex, OutSize); }
	void UpdateHash(FSHA1 * HashState) { NativeCall<void, FSHA1 *>(this, "FShaderParameterMap.UpdateHash", HashState); }
};

