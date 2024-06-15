#pragma once

#include "BaseDeclarations.h"
struct FDatabaseColumnInfo
{
	char __padding[0x18L];
	FString& ColumnNameField() { return *GetNativePointerField<FString*>(this, "FDatabaseColumnInfo.ColumnName"); }
	EDataBaseUnrealTypes& DataTypeField() { return *GetNativePointerField<EDataBaseUnrealTypes*>(this, "FDatabaseColumnInfo.DataType"); }
};

