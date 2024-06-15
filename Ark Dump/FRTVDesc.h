#pragma once

#include "BaseDeclarations.h"
struct FRTVDesc
{
	char __padding[0x10L];
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FRTVDesc.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FRTVDesc.Height"); }
	DXGI_SAMPLE_DESC& SampleDescField() { return *GetNativePointerField<DXGI_SAMPLE_DESC*>(this, "FRTVDesc.SampleDesc"); }
};

