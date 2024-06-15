#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureBase.h"

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase
{
	char __padding[0x128L];
	FExpressionInput& CoordinatesField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTextureSample.Coordinates"); }
	FExpressionInput& TextureObjectField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTextureSample.TextureObject"); }
	FExpressionInput& MipValueField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTextureSample.MipValue"); }
	FExpressionInput& CoordinatesDXField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTextureSample.CoordinatesDX"); }
	FExpressionInput& CoordinatesDYField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTextureSample.CoordinatesDY"); }
	TEnumAsByte<enum ETextureMipValueMode>& MipValueModeField() { return *GetNativePointerField<TEnumAsByte<enum ETextureMipValueMode>*>(this, "UMaterialExpressionTextureSample.MipValueMode"); }
	TEnumAsByte<enum ESamplerSourceMode>& SamplerSourceField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerSourceMode>*>(this, "UMaterialExpressionTextureSample.SamplerSource"); }
	unsigned int& ConstCoordinateField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialExpressionTextureSample.ConstCoordinate"); }
	int& ConstMipValueField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionTextureSample.ConstMipValue"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureSample.Compile", Compiler, OutputIndex, MultiplexIndex); }
	int CompileMipValue0(FMaterialCompiler * Compiler) { return NativeCall<int, FMaterialCompiler *>(this, "UMaterialExpressionTextureSample.CompileMipValue0", Compiler); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureSample.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionTextureSample.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionTextureSample.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionTextureSample.GetInputs", result); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionTextureSample.MatchesSearchQuery", SearchQuery); }
};

