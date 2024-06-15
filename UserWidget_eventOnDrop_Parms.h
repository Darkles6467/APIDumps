#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDrop_Parms
{
	char __padding[0xc0L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnDrop_Parms.MyGeometry"); }
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDrop_Parms.Operation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "UserWidget_eventOnDrop_Parms.ReturnValue"); }
};

