#pragma once

#include "BaseDeclarations.h"
#include "ICompressedAudioInfo.h"

struct FADPCMAudioInfo : ICompressedAudioInfo
{
	char __padding[0x98L];
	FWaveModInfo& WaveInfoField() { return *GetNativePointerField<FWaveModInfo*>(this, "FADPCMAudioInfo.WaveInfo"); }
	const char * SrcBufferDataField() { return GetNativePointerField<const char *>(this, "FADPCMAudioInfo.SrcBufferData"); }
	unsigned int& SrcBufferDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.SrcBufferDataSize"); }
	unsigned int& SrcBufferOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.SrcBufferOffset"); }
	unsigned int& UncompressedBlockSizeField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.UncompressedBlockSize"); }
	unsigned int& CompressedBlockSizeField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.CompressedBlockSize"); }
	unsigned int& BlockSizeField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.BlockSize"); }
	int& StreamBufferSizeField() { return *GetNativePointerField<int*>(this, "FADPCMAudioInfo.StreamBufferSize"); }
	unsigned int& StreamBufferSizeInBlocksField() { return *GetNativePointerField<unsigned int*>(this, "FADPCMAudioInfo.StreamBufferSizeInBlocks"); }
};

