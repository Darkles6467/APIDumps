#pragma once

#include "BaseDeclarations.h"
#include "FWmfMediaTrack.h"
#include "IMediaTrack.h"

struct FWmfMediaVideoTrack : FWmfMediaTrack
{
	char __padding[0x18L];
	unsigned int& BitRateField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaVideoTrack.BitRate"); }
	float& FrameRateField() { return *GetNativePointerField<float*>(this, "FWmfMediaVideoTrack.FrameRate"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaVideoTrack.Height"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FWmfMediaVideoTrack.Width"); }

	// Functions

	FIntPoint * GetDimensions(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FWmfMediaVideoTrack.GetDimensions", result); }
};

