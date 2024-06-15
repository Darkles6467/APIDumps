#pragma once

#include "BaseDeclarations.h"
struct FWaveModInfo
{
	char __padding[0x70L];
	unsigned int * pSamplesPerSecField() { return GetNativePointerField<unsigned int *>(this, "FWaveModInfo.pSamplesPerSec"); }
	unsigned int * pAvgBytesPerSecField() { return GetNativePointerField<unsigned int *>(this, "FWaveModInfo.pAvgBytesPerSec"); }
	unsigned __int16 * pBlockAlignField() { return GetNativePointerField<unsigned __int16 *>(this, "FWaveModInfo.pBlockAlign"); }
	unsigned __int16 * pBitsPerSampleField() { return GetNativePointerField<unsigned __int16 *>(this, "FWaveModInfo.pBitsPerSample"); }
	unsigned __int16 * pChannelsField() { return GetNativePointerField<unsigned __int16 *>(this, "FWaveModInfo.pChannels"); }
	unsigned __int16 * pFormatTagField() { return GetNativePointerField<unsigned __int16 *>(this, "FWaveModInfo.pFormatTag"); }
	unsigned int& OldBitsPerSampleField() { return *GetNativePointerField<unsigned int*>(this, "FWaveModInfo.OldBitsPerSample"); }
	unsigned int * pWaveDataSizeField() { return GetNativePointerField<unsigned int *>(this, "FWaveModInfo.pWaveDataSize"); }
	unsigned int * pMasterSizeField() { return GetNativePointerField<unsigned int *>(this, "FWaveModInfo.pMasterSize"); }
	char * SampleDataStartField() { return GetNativePointerField<char *>(this, "FWaveModInfo.SampleDataStart"); }
	char * SampleDataEndField() { return GetNativePointerField<char *>(this, "FWaveModInfo.SampleDataEnd"); }
	unsigned int& SampleDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FWaveModInfo.SampleDataSize"); }
	char * WaveDataEndField() { return GetNativePointerField<char *>(this, "FWaveModInfo.WaveDataEnd"); }
	unsigned int& NewDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FWaveModInfo.NewDataSize"); }
};

