#pragma once

#include "BaseDeclarations.h"
struct FARKTributeData
{
	char __padding[0x78L];
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "FARKTributeData.ID"); }
	TEnumAsByte<enum EPrimalARKTributeDataType::Type>& DataTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalARKTributeDataType::Type>*>(this, "FARKTributeData.DataType"); }
	TArray<unsigned char>& DataBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FARKTributeData.DataBytes"); }
	FString& DataClassNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataClassName"); }
	FString& DataTagNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.DataTagName"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FARKTributeData.Name"); }
	TArray<FString>& DataStatsField() { return *GetNativePointerField<TArray<FString>*>(this, "FARKTributeData.DataStats"); }
	long double& LastReceiveDataTimeField() { return *GetNativePointerField<long double*>(this, "FARKTributeData.LastReceiveDataTime"); }
	unsigned int& DataID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID1"); }
	unsigned int& DataID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeData.DataID2"); }

	// Functions

	FARKTributeData * operator=(const FARKTributeData * __that) { return NativeCall<FARKTributeData *, const FARKTributeData *>(this, "FARKTributeData.operator=", __that); }
};

