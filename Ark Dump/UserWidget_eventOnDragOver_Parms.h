#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDragOver_Parms
{
	char __padding[0xc0L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnDragOver_Parms.MyGeometry"); }
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDragOver_Parms.Operation"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "UserWidget_eventOnDragOver_Parms.ReturnValue"); }
};

