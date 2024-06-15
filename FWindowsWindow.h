#pragma once

#include "BaseDeclarations.h"
struct FGenericWindow
{
	char __padding[0x18L];
};

struct FWindowsWindow : FGenericWindow
{
	char __padding[0x90L];
	FWindowsApplication * OwningApplicationField() { return GetNativePointerField<FWindowsApplication *>(this, "FWindowsWindow.OwningApplication"); }
	HWND__ * HWndField() { return GetNativePointerField<HWND__ *>(this, "FWindowsWindow.HWnd"); }
	int& RegionWidthField() { return *GetNativePointerField<int*>(this, "FWindowsWindow.RegionWidth"); }
	int& RegionHeightField() { return *GetNativePointerField<int*>(this, "FWindowsWindow.RegionHeight"); }
	EWindowMode::Type& WindowModeField() { return *GetNativePointerField<EWindowMode::Type*>(this, "FWindowsWindow.WindowMode"); }
	int& OLEReferenceCountField() { return *GetNativePointerField<int*>(this, "FWindowsWindow.OLEReferenceCount"); }
	tagWINDOWPLACEMENT& PreFullscreenWindowPlacementField() { return *GetNativePointerField<tagWINDOWPLACEMENT*>(this, "FWindowsWindow.PreFullscreenWindowPlacement"); }
	tagWINDOWPLACEMENT& PreParentMinimizedWindowPlacementField() { return *GetNativePointerField<tagWINDOWPLACEMENT*>(this, "FWindowsWindow.PreParentMinimizedWindowPlacement"); }
	int& VirtualWidthField() { return *GetNativePointerField<int*>(this, "FWindowsWindow.VirtualWidth"); }
	int& VirtualHeightField() { return *GetNativePointerField<int*>(this, "FWindowsWindow.VirtualHeight"); }
};

