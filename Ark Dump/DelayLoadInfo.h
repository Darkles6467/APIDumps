#pragma once

#include "BaseDeclarations.h"
struct DelayLoadInfo
{
	char __padding[0x48L];
	unsigned int& cbField() { return *GetNativePointerField<unsigned int*>(this, "DelayLoadInfo.cb"); }
	const ImgDelayDescr * piddField() { return GetNativePointerField<const ImgDelayDescr *>(this, "DelayLoadInfo.pidd"); }
	const char * szDllField() { return GetNativePointerField<const char *>(this, "DelayLoadInfo.szDll"); }
	DelayLoadProc& dlpField() { return *GetNativePointerField<DelayLoadProc*>(this, "DelayLoadInfo.dlp"); }
	HINSTANCE__ * hmodCurField() { return GetNativePointerField<HINSTANCE__ *>(this, "DelayLoadInfo.hmodCur"); }
	unsigned int& dwLastErrorField() { return *GetNativePointerField<unsigned int*>(this, "DelayLoadInfo.dwLastError"); }
};

