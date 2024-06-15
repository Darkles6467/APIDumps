#pragma once

#include "BaseDeclarations.h"
struct FDataTableCategoryHandle
{
	char __padding[0x18L];
	const UDataTable * DataTableField() { return GetNativePointerField<const UDataTable *>(this, "FDataTableCategoryHandle.DataTable"); }
	FName& ColumnNameField() { return *GetNativePointerField<FName*>(this, "FDataTableCategoryHandle.ColumnName"); }
	FName& RowContentsField() { return *GetNativePointerField<FName*>(this, "FDataTableCategoryHandle.RowContents"); }

	// Functions

};

