#pragma once

#include "BaseDeclarations.h"
struct FFileHelper
{

	// Functions

	static void BufferToString(FString * Result, const char * Buffer, int Size) { NativeCall<void, FString *, const char *, int>(nullptr, "FFileHelper.BufferToString", Result, Buffer, Size); }
	static bool CreateBitmap(const wchar_t * Pattern, int SourceWidth, int SourceHeight, const FColor * Data, FIntRect * SubRectangle, IFileManager * FileManager, FString * OutFilename, bool bInWriteAlpha) { return NativeCall<bool, const wchar_t *, int, int, const FColor *, FIntRect *, IFileManager *, FString *, bool>(nullptr, "FFileHelper.CreateBitmap", Pattern, SourceWidth, SourceHeight, Data, SubRectangle, FileManager, OutFilename, bInWriteAlpha); }
	static bool GenerateNextBitmapFilename(const FString * Pattern, FString * OutFilename, IFileManager * FileManager) { return NativeCall<bool, const FString *, FString *, IFileManager *>(nullptr, "FFileHelper.GenerateNextBitmapFilename", Pattern, OutFilename, FileManager); }
	static bool LoadANSITextFileToStrings(const wchar_t * InFilename, IFileManager * InFileManager, TArray<FString> * OutStrings) { return NativeCall<bool, const wchar_t *, IFileManager *, TArray<FString> *>(nullptr, "FFileHelper.LoadANSITextFileToStrings", InFilename, InFileManager, OutStrings); }
	static bool LoadFileToArray(TArray<unsigned char> * Result, const wchar_t * Filename, unsigned int Flags) { return NativeCall<bool, TArray<unsigned char> *, const wchar_t *, unsigned int>(nullptr, "FFileHelper.LoadFileToArray", Result, Filename, Flags); }
	static bool LoadFileToString(FString * Result, const wchar_t * Filename, unsigned int VerifyFlags) { return NativeCall<bool, FString *, const wchar_t *, unsigned int>(nullptr, "FFileHelper.LoadFileToString", Result, Filename, VerifyFlags); }
	static bool LoadPartialFileToArray(TArray<unsigned char> * Result, const wchar_t * Filename, __int64 Offset, __int64 Length, unsigned int Flags) { return NativeCall<bool, TArray<unsigned char> *, const wchar_t *, __int64, __int64, unsigned int>(nullptr, "FFileHelper.LoadPartialFileToArray", Result, Filename, Offset, Length, Flags); }
	static bool SaveArrayToFile(const TArray<unsigned char> * Array, const wchar_t * Filename, IFileManager * FileManager) { return NativeCall<bool, const TArray<unsigned char> *, const wchar_t *, IFileManager *>(nullptr, "FFileHelper.SaveArrayToFile", Array, Filename, FileManager); }
	static bool SaveArraysToFile(const TArray<TArray<unsigned char> *> * Arrays, const wchar_t * Filename, IFileManager * FileManager) { return NativeCall<bool, const TArray<TArray<unsigned char> *> *, const wchar_t *, IFileManager *>(nullptr, "FFileHelper.SaveArraysToFile", Arrays, Filename, FileManager); }
	static bool SaveStringToFile(const FString * String, const wchar_t * Filename, FFileHelper::EEncodingOptions::Type EncodingOptions, IFileManager * FileManager) { return NativeCall<bool, const FString *, const wchar_t *, FFileHelper::EEncodingOptions::Type, IFileManager *>(nullptr, "FFileHelper.SaveStringToFile", String, Filename, EncodingOptions, FileManager); }
};

