#pragma once

#include "BaseDeclarations.h"
struct FD3D11LockedData
{
	char __padding[0x20L];
	TRefCountPtr<ID3D11Resource>& StagingResourceField() { return *GetNativePointerField<TRefCountPtr<ID3D11Resource>*>(this, "FD3D11LockedData.StagingResource"); }
	unsigned int& PitchField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11LockedData.Pitch"); }
	unsigned int& DepthPitchField() { return *GetNativePointerField<unsigned int*>(this, "FD3D11LockedData.DepthPitch"); }
	char * DataField() { return GetNativePointerField<char *>(this, "FD3D11LockedData.Data"); }
	bool& bAllocDataWasUsedField() { return *GetNativePointerField<bool*>(this, "FD3D11LockedData.bAllocDataWasUsed"); }
};

