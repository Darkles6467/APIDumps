#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnDragLeave_Parms
{
	char __padding[0x80L];
	UDragDropOperation * OperationField() { return GetNativePointerField<UDragDropOperation *>(this, "UserWidget_eventOnDragLeave_Parms.Operation"); }
};

