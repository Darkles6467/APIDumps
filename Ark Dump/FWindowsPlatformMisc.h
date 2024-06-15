#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformMisc
{
	enum EScreenSaverAction
	{
		Disable = 0x0,
		Enable = 0x1,
	};


	// Functions

	static const wchar_t * EngineDir() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.EngineDir"); }
	static const wchar_t * GameDir() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.GameDir"); }
	static FString * GetDefaultLocale(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FGenericPlatformMisc.GetDefaultLocale", result); }
	static const wchar_t * GetEngineMode() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.GetEngineMode"); }
	static FString * GetHashedMacAddressString(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FGenericPlatformMisc.GetHashedMacAddressString", result); }
	static FString * GetMacAddressString(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FGenericPlatformMisc.GetMacAddressString", result); }
	static const wchar_t * GetNullRHIShaderFormat() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.GetNullRHIShaderFormat"); }
	static unsigned int GetStandardPrintableKeyMap(unsigned __int16 * KeyCodes, FString * KeyNames, unsigned int MaxMappings, bool bMapUppercaseKeys, bool bMapLowercaseKeys) { return NativeCall<unsigned int, unsigned __int16 *, FString *, unsigned int, bool, bool>(nullptr, "FGenericPlatformMisc.GetStandardPrintableKeyMap", KeyCodes, KeyNames, MaxMappings, bMapUppercaseKeys, bMapLowercaseKeys); }
	static const wchar_t * GetUBTPlatform() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.GetUBTPlatform"); }
	static FString * GetUniqueDeviceId(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FGenericPlatformMisc.GetUniqueDeviceId", result); }
	static void HandleIOFailure(const wchar_t * Filename) { NativeCall<void, const wchar_t *>(nullptr, "FGenericPlatformMisc.HandleIOFailure", Filename); }
	static void __stdcall(LPCWSTR lpOutputString) LowLevelOutputDebugString(LPCWSTR lpOutputString) { return NativeCall<void __stdcall(LPCWSTR lpOutputString), LPCWSTR>(nullptr, "FGenericPlatformMisc.LowLevelOutputDebugString", lpOutputString); }
	static void(const wchar_t *Fmt, ...) LowLevelOutputDebugStringf(const wchar_t * Fmt) { return NativeCall<void(const wchar_t *Fmt, ...), const wchar_t *>(nullptr, "FGenericPlatformMisc.LowLevelOutputDebugStringf", Fmt); }
	static int NumberOfWorkerThreadsToSpawn() { return NativeCall<int>(nullptr, "FGenericPlatformMisc.NumberOfWorkerThreadsToSpawn"); }
	static const wchar_t * RootDir() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformMisc.RootDir"); }
};

struct FWindowsPlatformMisc : FGenericPlatformMisc
{

	// Functions

	static void ClipboardCopy(const wchar_t * Str) { NativeCall<void, const wchar_t *>(nullptr, "FWindowsPlatformMisc.ClipboardCopy", Str); }
	static void ClipboardPaste(FString * Result) { NativeCall<void, FString *>(nullptr, "FWindowsPlatformMisc.ClipboardPaste", Result); }
	static bool CoInitialize() { return NativeCall<bool>(nullptr, "FWindowsPlatformMisc.CoInitialize"); }
	static void __stdcall() CoUninitialize() { return NativeCall<void __stdcall()>(nullptr, "FWindowsPlatformMisc.CoUninitialize"); }
	static bool CommandLineCommands() { return NativeCall<bool>(nullptr, "FWindowsPlatformMisc.CommandLineCommands"); }
	static HRESULT __stdcall(GUID *pguid) CreateGuid(GUID * pguid) { return NativeCall<HRESULT __stdcall(GUID *pguid), GUID *>(nullptr, "FWindowsPlatformMisc.CreateGuid", pguid); }
	static unsigned int GetCPUInfo() { return NativeCall<unsigned int>(nullptr, "FWindowsPlatformMisc.GetCPUInfo"); }
	static FString * GetCPUVendor(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FWindowsPlatformMisc.GetCPUVendor", result); }
	static int GetCacheLineSize() { return NativeCall<int>(nullptr, "FWindowsPlatformMisc.GetCacheLineSize"); }
	static unsigned int GetCharKeyMap(unsigned __int16 * KeyCodes, FString * KeyNames, unsigned int MaxMappings) { return NativeCall<unsigned int, unsigned __int16 *, FString *, unsigned int>(nullptr, "FWindowsPlatformMisc.GetCharKeyMap", KeyCodes, KeyNames, MaxMappings); }
	static const wchar_t * GetDefaultPathSeparator() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformMisc.GetDefaultPathSeparator"); }
	static void GetEnvironmentVariableW(const wchar_t * VariableName, wchar_t * Result, int ResultLength) { NativeCall<void, const wchar_t *, wchar_t *, int>(nullptr, "FWindowsPlatformMisc.GetEnvironmentVariableW", VariableName, Result, ResultLength); }
	static FGPUDriverInfo * GetGPUDriverInfo(FGPUDriverInfo * result, const FString * DeviceDescription) { return NativeCall<FGPUDriverInfo *, FGPUDriverInfo *, const FString *>(nullptr, "FWindowsPlatformMisc.GetGPUDriverInfo", result, DeviceDescription); }
	static unsigned int GetKeyMap(unsigned __int16 * KeyCodes, FString * KeyNames, unsigned int MaxMappings) { return NativeCall<unsigned int, unsigned __int16 *, FString *, unsigned int>(nullptr, "FWindowsPlatformMisc.GetKeyMap", KeyCodes, KeyNames, MaxMappings); }
	static DWORD __stdcall() GetLastError() { return NativeCall<DWORD __stdcall()>(nullptr, "FWindowsPlatformMisc.GetLastError"); }
	static TArray<unsigned char> * GetMacAddress(TArray<unsigned char> * result) { return NativeCall<TArray<unsigned char> *, TArray<unsigned char> *>(nullptr, "FWindowsPlatformMisc.GetMacAddress", result); }
	static const wchar_t * GetSystemErrorMessage(wchar_t * OutBuffer, int BufferCount, int Error) { return NativeCall<const wchar_t *, wchar_t *, int, int>(nullptr, "FWindowsPlatformMisc.GetSystemErrorMessage", OutBuffer, BufferCount, Error); }
	static void __stdcall(LPCWSTR lpOutputString) LocalPrint(LPCWSTR lpOutputString) { return NativeCall<void __stdcall(LPCWSTR lpOutputString), LPCWSTR>(nullptr, "FWindowsPlatformMisc.LocalPrint", lpOutputString); }
	static EAppReturnType::Type MessageBoxExt(EAppMsgType::Type MsgType, const wchar_t * Text, const wchar_t * Caption) { return NativeCall<EAppReturnType::Type, EAppMsgType::Type, const wchar_t *, const wchar_t *>(nullptr, "FWindowsPlatformMisc.MessageBoxExt", MsgType, Text, Caption); }
	static int NumberOfCores() { return NativeCall<int>(nullptr, "FWindowsPlatformMisc.NumberOfCores"); }
	static int NumberOfCoresIncludingHyperthreads() { return NativeCall<int>(nullptr, "FWindowsPlatformMisc.NumberOfCoresIncludingHyperthreads"); }
	static void PumpMessages(bool bFromMainLoop) { NativeCall<void, bool>(nullptr, "FWindowsPlatformMisc.PumpMessages", bFromMainLoop); }
	static bool QueryRegKey(HKEY__ *const InKey, const wchar_t * InSubKey, const wchar_t * InValueName, FString * OutData) { return NativeCall<bool, HKEY__ *const, const wchar_t *, const wchar_t *, FString *>(nullptr, "FWindowsPlatformMisc.QueryRegKey", InKey, InSubKey, InValueName, OutData); }
	static void RaiseException(unsigned int ExceptionCode) { NativeCall<void, unsigned int>(nullptr, "FWindowsPlatformMisc.RaiseException", ExceptionCode); }
	static void RequestExit(bool Force) { NativeCall<void, bool>(nullptr, "FWindowsPlatformMisc.RequestExit", Force); }
	static bool SetStoredValue(const FString * InStoreId, const FString * InSectionName, const FString * InKeyName, const FString * InValue) { return NativeCall<bool, const FString *, const FString *, const FString *, const FString *>(nullptr, "FWindowsPlatformMisc.SetStoredValue", InStoreId, InSectionName, InKeyName, InValue); }
	static void SubmitErrorReport(const wchar_t * InErrorHist, EErrorReportMode::Type InMode) { NativeCall<void, const wchar_t *, EErrorReportMode::Type>(nullptr, "FWindowsPlatformMisc.SubmitErrorReport", InErrorHist, InMode); }
	static bool VerifyWindowsMajorVersion(unsigned int MajorVersion) { return NativeCall<bool, unsigned int>(nullptr, "FWindowsPlatformMisc.VerifyWindowsMajorVersion", MajorVersion); }
	static bool VerifyWindowsVersion(unsigned int MajorVersion, unsigned int MinorVersion) { return NativeCall<bool, unsigned int, unsigned int>(nullptr, "FWindowsPlatformMisc.VerifyWindowsVersion", MajorVersion, MinorVersion); }
};

