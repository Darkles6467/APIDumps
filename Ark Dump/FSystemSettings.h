#pragma once

#include "BaseDeclarations.h"
#include "FExec.h"

struct FSystemSettings : FExec
{
	char __padding[0x350L];
	bool& bIsEditorField() { return *GetNativePointerField<bool*>(this, "FSystemSettings.bIsEditor"); }
	bool& bInitialUseHighQualityLightmapsField() { return *GetNativePointerField<bool*>(this, "FSystemSettings.bInitialUseHighQualityLightmaps"); }
	FEngineShowFlags& Force0MaskField() { return *GetNativePointerField<FEngineShowFlags*>(this, "FSystemSettings.Force0Mask"); }
	FEngineShowFlags& Force1MaskField() { return *GetNativePointerField<FEngineShowFlags*>(this, "FSystemSettings.Force1Mask"); }

	// Functions

	void ApplyOverrides() { NativeCall<void>(this, "FSystemSettings.ApplyOverrides"); }
	void CVarSink() { NativeCall<void>(this, "FSystemSettings.CVarSink"); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FSystemSettings.Exec", InWorld, Cmd, Ar); }
	bool HandleHighendCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "FSystemSettings.HandleHighendCommand", Cmd, Ar); }
	bool HandleLowendCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "FSystemSettings.HandleLowendCommand", Cmd, Ar); }
	void Initialize(bool bSetupForEditor) { NativeCall<void, bool>(this, "FSystemSettings.Initialize", bSetupForEditor); }
};

