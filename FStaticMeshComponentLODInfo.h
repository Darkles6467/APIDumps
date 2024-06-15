#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshComponentLODInfo
{
	char __padding[0x28L];
	TArray<FPaintedVertex>& PaintedVerticesField() { return *GetNativePointerField<TArray<FPaintedVertex>*>(this, "FStaticMeshComponentLODInfo.PaintedVertices"); }
	FColorVertexBuffer * OverrideVertexColorsField() { return GetNativePointerField<FColorVertexBuffer *>(this, "FStaticMeshComponentLODInfo.OverrideVertexColors"); }

	// Functions

	void ExportText(FString * ValueStr) { NativeCall<void, FString *>(this, "FStaticMeshComponentLODInfo.ExportText", ValueStr); }
	void ImportText(const wchar_t ** SourceText) { NativeCall<void, const wchar_t **>(this, "FStaticMeshComponentLODInfo.ImportText", SourceText); }
};

