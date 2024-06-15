#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSpeedTree : UMaterialExpression
{
	char __padding[0x8L];
	TEnumAsByte<enum ESpeedTreeGeometryType>& GeometryTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESpeedTreeGeometryType>*>(this, "UMaterialExpressionSpeedTree.GeometryType"); }
	TEnumAsByte<enum ESpeedTreeWindType>& WindTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESpeedTreeWindType>*>(this, "UMaterialExpressionSpeedTree.WindType"); }
	TEnumAsByte<enum ESpeedTreeLODType>& LODTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESpeedTreeLODType>*>(this, "UMaterialExpressionSpeedTree.LODType"); }
	float& BillboardThresholdField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionSpeedTree.BillboardThreshold"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSpeedTree.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSpeedTree.GetCaption", OutCaptions); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionSpeedTree.Serialize", Ar); }
};

