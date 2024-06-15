#pragma once

#include "BaseDeclarations.h"
struct DragDropOperation_eventOnDragDropMulticast_Parms
{
	char __padding[0x8L];
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "DragDropOperation_eventOnDragDropMulticast_Parms.Operation"); }
};

