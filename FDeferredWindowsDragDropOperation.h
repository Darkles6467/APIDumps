#pragma once

#include "BaseDeclarations.h"
struct FDeferredWindowsDragDropOperation
{
	char __padding[0x48L];
	EWindowsDragDropOperationType::Type& OperationTypeField() { return *GetNativePointerField<EWindowsDragDropOperationType::Type*>(this, "FDeferredWindowsDragDropOperation.OperationType"); }
	HWND__ * HWndField() { return GetNativePointerField<HWND__ *>(this, "FDeferredWindowsDragDropOperation.HWnd"); }
	FDragDropOLEData& OLEDataField() { return *GetNativePointerField<FDragDropOLEData*>(this, "FDeferredWindowsDragDropOperation.OLEData"); }
	unsigned int& KeyStateField() { return *GetNativePointerField<unsigned int*>(this, "FDeferredWindowsDragDropOperation.KeyState"); }
	_POINTL& CursorPositionField() { return *GetNativePointerField<_POINTL*>(this, "FDeferredWindowsDragDropOperation.CursorPosition"); }
};

