#pragma once

#include "BaseDeclarations.h"
struct FDragDropOLEData
{
	enum EWindowsOLEDataType
	{
		None = 0x0,
		Text = 0x1,
		Files = 0x2,
	};

	char __padding[0x28L];
	FString& OperationTextField() { return *GetNativePointerField<FString*>(this, "FDragDropOLEData.OperationText"); }
	TArray<FString>& OperationFilenamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FDragDropOLEData.OperationFilenames"); }
	FDragDropOLEData::EWindowsOLEDataType& TypeField() { return *GetNativePointerField<FDragDropOLEData::EWindowsOLEDataType*>(this, "FDragDropOLEData.Type"); }
};

