#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDragEnter_Parms
{
	char __padding[0xb8L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnDragEnter_Parms.MyGeometry"); }
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDragEnter_Parms.Operation"); }
};

