#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDragDetected_Parms
{
	char __padding[0xb8L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnDragDetected_Parms.MyGeometry"); }
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDragDetected_Parms.Operation"); }
};

