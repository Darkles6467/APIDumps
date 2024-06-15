#pragma once

#include "BaseDeclarations.h"
struct FObjectItem
{
	char __padding[0x18L];
	int& ObjectInfoIndexField() { return *GetNativePointerField<int*>(this, "FObjectItem.ObjectInfoIndex"); }
	unsigned __int16& LocationXField() { return *GetNativePointerField<unsigned __int16*>(this, "FObjectItem.LocationX"); }
	unsigned __int16& LocationYField() { return *GetNativePointerField<unsigned __int16*>(this, "FObjectItem.LocationY"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FObjectItem.Rotation"); }
	float& FixedZField() { return *GetNativePointerField<float*>(this, "FObjectItem.FixedZ"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FObjectItem.Serialize", Ar); }
};

