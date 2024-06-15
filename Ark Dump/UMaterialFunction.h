#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FFunctionExpressionInput.h"

struct UMaterialFunction : UObject
{
	char __padding[0x60L];
	FGuid& StateIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialFunction.StateId"); }
	TArray<FString>& AdditionalIncludesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMaterialFunction.AdditionalIncludes"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UMaterialFunction.Description"); }
	TArray<FString>& LibraryCategoriesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMaterialFunction.LibraryCategories"); }

	// Functions

	void AppendReferencedTextures(TArray<UTexture *> * InOutTextures) { NativeCall<void, TArray<UTexture *> *>(this, "UMaterialFunction.AppendReferencedTextures", InOutTextures); }
	int Compile(FMaterialCompiler * Compiler, const FFunctionExpressionOutput * Output, int MultiplexIndex, const TArray<FFunctionExpressionInput> * Inputs) { return NativeCall<int, FMaterialCompiler *, const FFunctionExpressionOutput *, int, const TArray<FFunctionExpressionInput> *>(this, "UMaterialFunction.Compile", Compiler, Output, MultiplexIndex, Inputs); }
	void GetDependentFunctions(TArray<UMaterialFunction *> * DependentFunctions) { NativeCall<void, TArray<UMaterialFunction *> *>(this, "UMaterialFunction.GetDependentFunctions", DependentFunctions); }
	void PostLoad() { NativeCall<void>(this, "UMaterialFunction.PostLoad"); }
};

