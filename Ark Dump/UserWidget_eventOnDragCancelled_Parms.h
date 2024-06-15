#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDragCancelled_Parms
{
	char __padding[0x80L];
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDragCancelled_Parms.Operation"); }
};

