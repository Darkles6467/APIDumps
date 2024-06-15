#pragma once

#include "BaseDeclarations.h"
struct FModelElement
{
	char __padding[0x80L];
	UModelComponent * ComponentField() { return GetNativePointerField<UModelComponent *>(this, "FModelElement.Component"); }
	TArray<unsigned short>& NodesField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FModelElement.Nodes"); }
	TArray<FGuid>& IrrelevantLightsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FModelElement.IrrelevantLights"); }
	unsigned int& FirstIndexField() { return *GetNativePointerField<unsigned int*>(this, "FModelElement.FirstIndex"); }
	unsigned int& NumTrianglesField() { return *GetNativePointerField<unsigned int*>(this, "FModelElement.NumTriangles"); }
	unsigned int& MinVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FModelElement.MinVertexIndex"); }
	unsigned int& MaxVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FModelElement.MaxVertexIndex"); }
	FBox& BoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FModelElement.BoundingBox"); }

	// Functions

};

