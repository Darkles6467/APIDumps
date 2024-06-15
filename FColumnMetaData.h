#pragma once

#include "BaseDeclarations.h"
struct FColumnMetaData
{
	char __padding[0xcL];
	const FName& ColumnNameField() { return *GetNativePointerField<const FName*>(this, "FColumnMetaData.ColumnName"); }
	const EOnlineKeyValuePairDataType::Type& DataTypeField() { return *GetNativePointerField<const EOnlineKeyValuePairDataType::Type*>(this, "FColumnMetaData.DataType"); }
};

