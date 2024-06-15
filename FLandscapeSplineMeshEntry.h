#pragma once

#include "BaseDeclarations.h"
struct FLandscapeSplineMeshEntry
{
	char __padding[0x38L];
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "FLandscapeSplineMeshEntry.Mesh"); }
	FVector2D& OffsetField() { return *GetNativePointerField<FVector2D*>(this, "FLandscapeSplineMeshEntry.Offset"); }
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FLandscapeSplineMeshEntry.Scale"); }
	TEnumAsByte<enum LandscapeSplineMeshOrientation>& Orientation_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum LandscapeSplineMeshOrientation>*>(this, "FLandscapeSplineMeshEntry.Orientation_DEPRECATED"); }
	TEnumAsByte<enum ESplineMeshAxis::Type>& ForwardAxisField() { return *GetNativePointerField<TEnumAsByte<enum ESplineMeshAxis::Type>*>(this, "FLandscapeSplineMeshEntry.ForwardAxis"); }
	TEnumAsByte<enum ESplineMeshAxis::Type>& UpAxisField() { return *GetNativePointerField<TEnumAsByte<enum ESplineMeshAxis::Type>*>(this, "FLandscapeSplineMeshEntry.UpAxis"); }

	// Functions

};

