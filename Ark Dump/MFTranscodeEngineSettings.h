#pragma once

#include "BaseDeclarations.h"
struct MFTranscodeEngineSettings
{
	char __padding[0x28L];
	__int64& hnsStartTimeField() { return *GetNativePointerField<__int64*>(this, "MFTranscodeEngineSettings.hnsStartTime"); }
	__int64& hnsStopTimeField() { return *GetNativePointerField<__int64*>(this, "MFTranscodeEngineSettings.hnsStopTime"); }
	int& bAlwaysReencodeField() { return *GetNativePointerField<int*>(this, "MFTranscodeEngineSettings.bAlwaysReencode"); }
	int& bSoftwareOnlyField() { return *GetNativePointerField<int*>(this, "MFTranscodeEngineSettings.bSoftwareOnly"); }
	int& bAudioField() { return *GetNativePointerField<int*>(this, "MFTranscodeEngineSettings.bAudio"); }
	int& bVideoField() { return *GetNativePointerField<int*>(this, "MFTranscodeEngineSettings.bVideo"); }
	unsigned int& unVideoProcessorAlgorithmField() { return *GetNativePointerField<unsigned int*>(this, "MFTranscodeEngineSettings.unVideoProcessorAlgorithm"); }
};

