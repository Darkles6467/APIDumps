#pragma once

#include "BaseDeclarations.h"
struct FVorbisFileWrapper
{
	char __padding[0x348L];
	OggVorbis_File& vfField() { return *GetNativePointerField<OggVorbis_File*>(this, "FVorbisFileWrapper.vf"); }
};

