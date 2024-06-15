#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"

struct FOutputDeviceFile : FOutputDevice
{
	char __padding[0x810L];
	FieldArray<wchar_t, 1024> FilenameField() { return {this, "FOutputDeviceFile.Filename"}; }
	bool& OpenedField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceFile.Opened"); }
	bool& DeadField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceFile.Dead"); }
	bool& bDisableBackupField() { return *GetNativePointerField<bool*>(this, "FOutputDeviceFile.bDisableBackup"); }

	// Functions

	void CastAndSerializeData(const wchar_t * Data) { NativeCall<void, const wchar_t *>(this, "FOutputDeviceFile.CastAndSerializeData", Data); }
	void Flush() { NativeCall<void>(this, "FOutputDeviceFile.Flush"); }
	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceFile.Serialize", Data, Verbosity, Category); }
	void SetFilename(const wchar_t * InFilename) { NativeCall<void, const wchar_t *>(this, "FOutputDeviceFile.SetFilename", InFilename); }
	void TearDown() { NativeCall<void>(this, "FOutputDeviceFile.TearDown"); }
	void WriteDataToArchive(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FOutputDeviceFile.WriteDataToArchive", Data, Verbosity, Category); }
};

