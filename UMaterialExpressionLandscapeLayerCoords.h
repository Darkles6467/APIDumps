#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
	char __padding[0x18L];
	TEnumAsByte<enum ETerrainCoordMappingType>& MappingTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETerrainCoordMappingType>*>(this, "UMaterialExpressionLandscapeLayerCoords.MappingType"); }
	TEnumAsByte<enum ELandscapeCustomizedCoordType>& CustomUVTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELandscapeCustomizedCoordType>*>(this, "UMaterialExpressionLandscapeLayerCoords.CustomUVType"); }
	float& MappingScaleField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerCoords.MappingScale"); }
	float& MappingRotationField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerCoords.MappingRotation"); }
	float& MappingPanUField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerCoords.MappingPanU"); }
	float& MappingPanVField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerCoords.MappingPanV"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeLayerCoords.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeLayerCoords.GetCaption", OutCaptions); }
};

