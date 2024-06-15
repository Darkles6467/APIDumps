#pragma once

#include "BaseDeclarations.h"
struct FCanvasUVTri
{
	char __padding[0x60L];
	FVector2D& V0_PosField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V0_Pos"); }
	FVector2D& V0_UVField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V0_UV"); }
	FLinearColor& V0_ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasUVTri.V0_Color"); }
	FVector2D& V1_PosField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V1_Pos"); }
	FVector2D& V1_UVField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V1_UV"); }
	FLinearColor& V1_ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasUVTri.V1_Color"); }
	FVector2D& V2_PosField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V2_Pos"); }
	FVector2D& V2_UVField() { return *GetNativePointerField<FVector2D*>(this, "FCanvasUVTri.V2_UV"); }
	FLinearColor& V2_ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FCanvasUVTri.V2_Color"); }

	// Functions

};

