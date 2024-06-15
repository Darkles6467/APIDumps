#pragma once

#include "BaseDeclarations.h"
struct FThumbnailCompressionInterface
{
	char __padding[0x8L];
};

struct FPNGThumbnailCompressor : FThumbnailCompressionInterface
{

	// Functions

	bool CompressImage(const TArray<unsigned char> * InUncompressedData, const int InWidth, const int InHeight, TArray<unsigned char> * OutCompressedData) { return NativeCall<bool, const TArray<unsigned char> *, const int, const int, TArray<unsigned char> *>(this, "FPNGThumbnailCompressor.CompressImage", InUncompressedData, InWidth, InHeight, OutCompressedData); }
	bool DecompressImage(const TArray<unsigned char> * InCompressedData, const int InWidth, const int InHeight, TArray<unsigned char> * OutUncompressedData) { return NativeCall<bool, const TArray<unsigned char> *, const int, const int, TArray<unsigned char> *>(this, "FPNGThumbnailCompressor.DecompressImage", InCompressedData, InWidth, InHeight, OutUncompressedData); }
};

