#pragma once

#include "BaseDeclarations.h"
#include "IImageWrapper.h"

struct FImageWrapperBase : IImageWrapper
{
	char __padding[0x40L];
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FImageWrapperBase.RawData"); }
	TArray<unsigned char>& CompressedDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FImageWrapperBase.CompressedData"); }
	TEnumAsByte<enum ERGBFormat::Type>& RawFormatField() { return *GetNativePointerField<TEnumAsByte<enum ERGBFormat::Type>*>(this, "FImageWrapperBase.RawFormat"); }
	char& RawBitDepthField() { return *GetNativePointerField<char*>(this, "FImageWrapperBase.RawBitDepth"); }
	TEnumAsByte<enum ERGBFormat::Type>& FormatField() { return *GetNativePointerField<TEnumAsByte<enum ERGBFormat::Type>*>(this, "FImageWrapperBase.Format"); }
	char& BitDepthField() { return *GetNativePointerField<char*>(this, "FImageWrapperBase.BitDepth"); }
	int& WidthField() { return *GetNativePointerField<int*>(this, "FImageWrapperBase.Width"); }
	int& HeightField() { return *GetNativePointerField<int*>(this, "FImageWrapperBase.Height"); }
	FString& LastErrorField() { return *GetNativePointerField<FString*>(this, "FImageWrapperBase.LastError"); }

	// Functions

	int GetBitDepth() { return NativeCall<int>(this, "FImageWrapperBase.GetBitDepth"); }
	const TArray<unsigned char> * GetCompressed(int Quality) { return NativeCall<const TArray<unsigned char> *, int>(this, "FImageWrapperBase.GetCompressed", Quality); }
	ERGBFormat::Type GetFormat() { return NativeCall<ERGBFormat::Type>(this, "FImageWrapperBase.GetFormat"); }
	int GetHeight() { return NativeCall<int>(this, "FImageWrapperBase.GetHeight"); }
	bool GetRaw(const ERGBFormat::Type InFormat, int InBitDepth, const TArray<unsigned char> ** OutRawData) { return NativeCall<bool, const ERGBFormat::Type, int, const TArray<unsigned char> **>(this, "FImageWrapperBase.GetRaw", InFormat, InBitDepth, OutRawData); }
	int GetWidth() { return NativeCall<int>(this, "FImageWrapperBase.GetWidth"); }
	void Reset() { NativeCall<void>(this, "FImageWrapperBase.Reset"); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FImageWrapperBase.SetCompressed", InCompressedData, InCompressedSize); }
	void SetError(const wchar_t * ErrorMessage) { NativeCall<void, const wchar_t *>(this, "FImageWrapperBase.SetError", ErrorMessage); }
	bool SetRaw(const void * InRawData, int InRawSize, const int InWidth, const int InHeight, const ERGBFormat::Type InFormat, const int InBitDepth) { return NativeCall<bool, const void *, int, const int, const int, const ERGBFormat::Type, const int>(this, "FImageWrapperBase.SetRaw", InRawData, InRawSize, InWidth, InHeight, InFormat, InBitDepth); }
};

