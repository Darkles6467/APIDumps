#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformProcess
{

	// Functions

	static void CloseProc(FProcHandle * ProcessHandle) { NativeCall<void, FProcHandle *>(nullptr, "FGenericPlatformProcess.CloseProc", ProcessHandle); }
	static const wchar_t * GetModulePrefix() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformProcess.GetModulePrefix"); }
	static const FString * GetModulesDirectory(const FString * result) { return NativeCall<const FString *, const FString *>(nullptr, "FGenericPlatformProcess.GetModulesDirectory", result); }
	static void ReturnSynchEventToPool(FEvent * Event) { NativeCall<void, FEvent *>(nullptr, "FGenericPlatformProcess.ReturnSynchEventToPool", Event); }
	static const wchar_t * ShaderDir() { return NativeCall<const wchar_t *>(nullptr, "FGenericPlatformProcess.ShaderDir"); }
	static const FString * ShaderWorkingDir(const FString * result) { return NativeCall<const FString *, const FString *>(nullptr, "FGenericPlatformProcess.ShaderWorkingDir", result); }
	static bool SupportsMultithreading() { return NativeCall<bool>(nullptr, "FGenericPlatformProcess.SupportsMultithreading"); }
};

struct FWindowsPlatformProcess : FGenericPlatformProcess
{

	// Functions

	static const wchar_t * ApplicationSettingsDir() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.ApplicationSettingsDir"); }
	static const wchar_t * BaseDir() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.BaseDir"); }
	static void ClosePipe(void * ReadPipe, void * WritePipe) { NativeCall<void, void *, void *>(nullptr, "FWindowsPlatformProcess.ClosePipe", ReadPipe, WritePipe); }
	static const wchar_t * ComputerName() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.ComputerName"); }
	static bool CreatePipe(void ** ReadPipe, void ** WritePipe) { return NativeCall<bool, void **, void **>(nullptr, "FWindowsPlatformProcess.CreatePipe", ReadPipe, WritePipe); }
	static const wchar_t * ExecutableName(bool bRemoveExtension) { return NativeCall<const wchar_t *, bool>(nullptr, "FWindowsPlatformProcess.ExecutableName", bRemoveExtension); }
	static void ExploreFolder(const wchar_t * FilePath) { NativeCall<void, const wchar_t *>(nullptr, "FWindowsPlatformProcess.ExploreFolder", FilePath); }
	static BOOL __stdcall(HMODULE hLibModule) FreeDllHandle(HMODULE hLibModule) { return NativeCall<BOOL __stdcall(HMODULE hLibModule), HMODULE>(nullptr, "FWindowsPlatformProcess.FreeDllHandle", hLibModule); }
	static const wchar_t * GetBinariesSubdirectory() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.GetBinariesSubdirectory"); }
	static DWORD __stdcall() GetCurrentProcessId() { return NativeCall<DWORD __stdcall()>(nullptr, "FWindowsPlatformProcess.GetCurrentProcessId"); }
	static int GetDllApiVersion(const wchar_t * Filename) { return NativeCall<int, const wchar_t *>(nullptr, "FWindowsPlatformProcess.GetDllApiVersion", Filename); }
	static void * GetDllExport(void * DllHandle, const wchar_t * ProcName) { return NativeCall<void *, void *, const wchar_t *>(nullptr, "FWindowsPlatformProcess.GetDllExport", DllHandle, ProcName); }
	static void * GetDllHandle(const wchar_t * Filename) { return NativeCall<void *, const wchar_t *>(nullptr, "FWindowsPlatformProcess.GetDllHandle", Filename); }
	static const wchar_t * GetModuleExtension() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.GetModuleExtension"); }
	static bool GetProcReturnCode(FProcHandle * ProcHandle, int * ReturnCode) { return NativeCall<bool, FProcHandle *, int *>(nullptr, "FWindowsPlatformProcess.GetProcReturnCode", ProcHandle, ReturnCode); }
	static bool IsProcRunning(FProcHandle * ProcessHandle) { return NativeCall<bool, FProcHandle *>(nullptr, "FWindowsPlatformProcess.IsProcRunning", ProcessHandle); }
	static bool IsThisApplicationForeground() { return NativeCall<bool>(nullptr, "FWindowsPlatformProcess.IsThisApplicationForeground"); }
	static void LaunchURL(const wchar_t * URL, const wchar_t * Parms, FString * Error) { NativeCall<void, const wchar_t *, const wchar_t *, FString *>(nullptr, "FWindowsPlatformProcess.LaunchURL", URL, Parms, Error); }
	static void PopDllDirectory(const wchar_t * Directory) { NativeCall<void, const wchar_t *>(nullptr, "FWindowsPlatformProcess.PopDllDirectory", Directory); }
	static void PushDllDirectory(const wchar_t * Directory) { NativeCall<void, const wchar_t *>(nullptr, "FWindowsPlatformProcess.PushDllDirectory", Directory); }
	static FString * ReadPipe(FString * result, void * ReadPipe) { return NativeCall<FString *, FString *, void *>(nullptr, "FWindowsPlatformProcess.ReadPipe", result, ReadPipe); }
	static void SetThreadAffinityMask(unsigned __int64 AffinityMask) { NativeCall<void, unsigned __int64>(nullptr, "FWindowsPlatformProcess.SetThreadAffinityMask", AffinityMask); }
	static void Sleep(float Seconds) { NativeCall<void, float>(nullptr, "FWindowsPlatformProcess.Sleep", Seconds); }
	static void SleepNoStats(float Seconds) { NativeCall<void, float>(nullptr, "FWindowsPlatformProcess.SleepNoStats", Seconds); }
	static void TerminateProc(FProcHandle * ProcessHandle, bool KillTree) { NativeCall<void, FProcHandle *, bool>(nullptr, "FWindowsPlatformProcess.TerminateProc", ProcessHandle, KillTree); }
	static const wchar_t * UserDir() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.UserDir"); }
	static const wchar_t * UserName(bool bOnlyAlphaNumeric) { return NativeCall<const wchar_t *, bool>(nullptr, "FWindowsPlatformProcess.UserName", bOnlyAlphaNumeric); }
	static const wchar_t * UserSettingsDir() { return NativeCall<const wchar_t *>(nullptr, "FWindowsPlatformProcess.UserSettingsDir"); }
	static void WaitForProc(FProcHandle * ProcessHandle) { NativeCall<void, FProcHandle *>(nullptr, "FWindowsPlatformProcess.WaitForProc", ProcessHandle); }
};

