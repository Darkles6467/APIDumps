#pragma once

#include "BaseDeclarations.h"
struct FGuid
{
	char __padding[0x10L];
	unsigned int& AField() { return *GetNativePointerField<unsigned int*>(this, "FGuid.A"); }
	unsigned int& BField() { return *GetNativePointerField<unsigned int*>(this, "FGuid.B"); }
	unsigned int& CField() { return *GetNativePointerField<unsigned int*>(this, "FGuid.C"); }
	unsigned int& DField() { return *GetNativePointerField<unsigned int*>(this, "FGuid.D"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FGuid.IsValid"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FGuid.ToString", result); }
	bool ExportTextItem(FString * ValueStr, const FGuid * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { return NativeCall<bool, FString *, const FGuid *, UObject *, int, UObject *>(this, "FGuid.ExportTextItem", ValueStr, DefaultValue, Parent, PortFlags, ExportRootScope); }
	bool ImportTextItem(const wchar_t ** Buffer, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<bool, const wchar_t **, int, UObject *, FOutputDevice *>(this, "FGuid.ImportTextItem", Buffer, PortFlags, Parent, ErrorText); }
	static FGuid * NewGuid(FGuid * result) { return NativeCall<FGuid *, FGuid *>(nullptr, "FGuid.NewGuid", result); }
	static bool Parse(const FString * GuidString, FGuid * OutGuid) { return NativeCall<bool, const FString *, FGuid *>(nullptr, "FGuid.Parse", GuidString, OutGuid); }
	static bool ParseExact(const FString * GuidString, EGuidFormats::Type Format, FGuid * OutGuid) { return NativeCall<bool, const FString *, EGuidFormats::Type, FGuid *>(nullptr, "FGuid.ParseExact", GuidString, Format, OutGuid); }
	FString * ToString(FString * result, EGuidFormats::Type Format) { return NativeCall<FString *, FString *, EGuidFormats::Type>(this, "FGuid.ToString", result, Format); }
};

