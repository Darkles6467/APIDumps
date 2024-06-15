#pragma once

#include "BaseDeclarations.h"
struct FSimpleElementVertex
{
	char __padding[0x30L];
	FVector4& PositionField() { return *GetNativePointerField<FVector4*>(this, "FSimpleElementVertex.Position"); }
	FVector2D& TextureCoordinateField() { return *GetNativePointerField<FVector2D*>(this, "FSimpleElementVertex.TextureCoordinate"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSimpleElementVertex.Color"); }
	FColor& HitProxyIdColorField() { return *GetNativePointerField<FColor*>(this, "FSimpleElementVertex.HitProxyIdColor"); }

	// Functions

};

