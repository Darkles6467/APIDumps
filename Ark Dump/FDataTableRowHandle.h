#pragma once

#include "BaseDeclarations.h"
struct FDataTableRowHandle
{
	char __padding[0x10L];
	const UDataTable * DataTableField() { return GetNativePointerField<const UDataTable *>(this, "FDataTableRowHandle.DataTable"); }
	FName& RowNameField() { return *GetNativePointerField<FName*>(this, "FDataTableRowHandle.RowName"); }

	// Functions

};

