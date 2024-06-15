#pragma once

#include "BaseDeclarations.h"
struct SOuputMapping
{
	char __padding[0x10L];
	unsigned int& NumChannelsField() { return *GetNativePointerField<unsigned int*>(this, "SOuputMapping.NumChannels"); }
	unsigned int& SpeakerMaskField() { return *GetNativePointerField<unsigned int*>(this, "SOuputMapping.SpeakerMask"); }
	const float * OuputMatrixField() { return GetNativePointerField<const float *>(this, "SOuputMapping.OuputMatrix"); }
};

