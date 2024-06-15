#pragma once

#include "BaseDeclarations.h"
struct FBPVariableDescription
{
	char __padding[0xb8L];
	FName& VarNameField() { return *GetNativePointerField<FName*>(this, "FBPVariableDescription.VarName"); }
	FGuid& VarGuidField() { return *GetNativePointerField<FGuid*>(this, "FBPVariableDescription.VarGuid"); }
	FEdGraphPinType& VarTypeField() { return *GetNativePointerField<FEdGraphPinType*>(this, "FBPVariableDescription.VarType"); }
	FString& FriendlyNameField() { return *GetNativePointerField<FString*>(this, "FBPVariableDescription.FriendlyName"); }
	FName& CategoryField() { return *GetNativePointerField<FName*>(this, "FBPVariableDescription.Category"); }
	unsigned __int64& PropertyFlagsField() { return *GetNativePointerField<unsigned __int64*>(this, "FBPVariableDescription.PropertyFlags"); }
	char& RepConditionField() { return *GetNativePointerField<char*>(this, "FBPVariableDescription.RepCondition"); }
	FName& RepNotifyFuncField() { return *GetNativePointerField<FName*>(this, "FBPVariableDescription.RepNotifyFunc"); }
	TArray<FBPVariableMetaDataEntry>& MetaDataArrayField() { return *GetNativePointerField<TArray<FBPVariableMetaDataEntry>*>(this, "FBPVariableDescription.MetaDataArray"); }
	FString& DefaultValueField() { return *GetNativePointerField<FString*>(this, "FBPVariableDescription.DefaultValue"); }

	// Functions

	FBPVariableDescription * operator=(const FBPVariableDescription * __that) { return NativeCall<FBPVariableDescription *, const FBPVariableDescription *>(this, "FBPVariableDescription.operator=", __that); }
};

