#pragma once

#include "BaseDeclarations.h"
struct FTrackInstancePropertyBindings
{
	char __padding[0x70L];
	FString& PropertyPathField() { return *GetNativePointerField<FString*>(this, "FTrackInstancePropertyBindings.PropertyPath"); }
	FName& FunctionNameField() { return *GetNativePointerField<FName*>(this, "FTrackInstancePropertyBindings.FunctionName"); }
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "FTrackInstancePropertyBindings.PropertyName"); }

	// Functions

	void CallFunction(UObject * InRuntimeObject, void * FunctionParams) { NativeCall<void, UObject *, void *>(this, "FTrackInstancePropertyBindings.CallFunction", InRuntimeObject, FunctionParams); }
	FTrackInstancePropertyBindings::FPropertyAddress * FindProperty(FTrackInstancePropertyBindings::FPropertyAddress * result, UObject * InObject, const FString * InPropertyPath) { return NativeCall<FTrackInstancePropertyBindings::FPropertyAddress *, FTrackInstancePropertyBindings::FPropertyAddress *, UObject *, const FString *>(this, "FTrackInstancePropertyBindings.FindProperty", result, InObject, InPropertyPath); }
	FTrackInstancePropertyBindings::FPropertyAddress * FindPropertyRecursive(FTrackInstancePropertyBindings::FPropertyAddress * result, UObject * Object, void * BasePointer, UStruct * InStruct, TArray<FString> * InPropertyNames, unsigned int Index) { return NativeCall<FTrackInstancePropertyBindings::FPropertyAddress *, FTrackInstancePropertyBindings::FPropertyAddress *, UObject *, void *, UStruct *, TArray<FString> *, unsigned int>(this, "FTrackInstancePropertyBindings.FindPropertyRecursive", result, Object, BasePointer, InStruct, InPropertyNames, Index); }
	void UpdateBindings(const TArray<UObject *> * InRuntimeObjects) { NativeCall<void, const TArray<UObject *> *>(this, "FTrackInstancePropertyBindings.UpdateBindings", InRuntimeObjects); }
};

