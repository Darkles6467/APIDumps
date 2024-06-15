#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
	char __padding[0x90L];
	FExpressionInput& LayerUsedField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLandscapeLayerSwitch.LayerUsed"); }
	FExpressionInput& LayerNotUsedField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLandscapeLayerSwitch.LayerNotUsed"); }
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionLandscapeLayerSwitch.ParameterName"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionLandscapeLayerSwitch.ExpressionGUID"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeLayerSwitch.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionLandscapeLayerSwitch.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeLayerSwitch.GetCaption", OutCaptions); }
	FGuid * GetParameterExpressionId() { return NativeCall<FGuid *>(this, "UMaterialExpressionLandscapeLayerSwitch.GetParameterExpressionId"); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionLandscapeLayerSwitch.IsResultMaterialAttributes", OutputIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionLandscapeLayerSwitch.Serialize", Ar); }
};

