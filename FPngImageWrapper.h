#pragma once

#include "BaseDeclarations.h"
#include "FImageWrapperBase.h"
#include "IImageWrapper.h"

struct FPngImageWrapper : FImageWrapperBase
{
	char __padding[0x10L];
	int& ReadOffsetField() { return *GetNativePointerField<int*>(this, "FPngImageWrapper.ReadOffset"); }
	int& ColorTypeField() { return *GetNativePointerField<int*>(this, "FPngImageWrapper.ColorType"); }
	char& ChannelsField() { return *GetNativePointerField<char*>(this, "FPngImageWrapper.Channels"); }

	// Functions

	void Compress(int Quality) { NativeCall<void, int>(this, "FPngImageWrapper.Compress", Quality); }
	bool LoadPNGHeader() { return NativeCall<bool>(this, "FPngImageWrapper.LoadPNGHeader"); }
	void Reset() { NativeCall<void>(this, "FPngImageWrapper.Reset"); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FPngImageWrapper.SetCompressed", InCompressedData, InCompressedSize); }
	void Uncompress(const ERGBFormat::Type InFormat, int InBitDepth) { NativeCall<void, const ERGBFormat::Type, int>(this, "FPngImageWrapper.Uncompress", InFormat, InBitDepth); }
	void UncompressPNGData(const ERGBFormat::Type InFormat, const int InBitDepth) { NativeCall<void, const ERGBFormat::Type, const int>(this, "FPngImageWrapper.UncompressPNGData", InFormat, InBitDepth); }
	static void user_error_fn(png_struct_def * png_ptr, const char * error_msg) { NativeCall<void, png_struct_def *, const char *>(nullptr, "FPngImageWrapper.user_error_fn", png_ptr, error_msg); }
	static void user_free(png_struct_def * __formal, void * struct_ptr) { NativeCall<void, png_struct_def *, void *>(nullptr, "FPngImageWrapper.user_free", __formal, struct_ptr); }
	static void * user_malloc(png_struct_def * __formal, unsigned __int64 size) { return NativeCall<void *, png_struct_def *, unsigned __int64>(nullptr, "FPngImageWrapper.user_malloc", __formal, size); }
	static void user_read_compressed(png_struct_def * png_ptr, char * data, unsigned __int64 length) { NativeCall<void, png_struct_def *, char *, unsigned __int64>(nullptr, "FPngImageWrapper.user_read_compressed", png_ptr, data, length); }
	static void user_write_compressed(png_struct_def * png_ptr, char * data, unsigned __int64 length) { NativeCall<void, png_struct_def *, char *, unsigned __int64>(nullptr, "FPngImageWrapper.user_write_compressed", png_ptr, data, length); }
};

