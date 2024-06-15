#pragma once

#include "BaseDeclarations.h"
struct FDeferredWindowsMessage
{
	char __padding[0x40L];
	TWeakPtr<FWindowsWindow,0>& NativeWindowField() { return *GetNativePointerField<TWeakPtr<FWindowsWindow,0>*>(this, "FDeferredWindowsMessage.NativeWindow"); }
	HWND__ * hWNDField() { return GetNativePointerField<HWND__ *>(this, "FDeferredWindowsMessage.hWND"); }
	unsigned int& MessageField() { return *GetNativePointerField<unsigned int*>(this, "FDeferredWindowsMessage.Message"); }
	unsigned __int64& wParamField() { return *GetNativePointerField<unsigned __int64*>(this, "FDeferredWindowsMessage.wParam"); }
	__int64& lParamField() { return *GetNativePointerField<__int64*>(this, "FDeferredWindowsMessage.lParam"); }
	int& XField() { return *GetNativePointerField<int*>(this, "FDeferredWindowsMessage.X"); }
	int& YField() { return *GetNativePointerField<int*>(this, "FDeferredWindowsMessage.Y"); }
	unsigned int& RawInputFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FDeferredWindowsMessage.RawInputFlags"); }
};

