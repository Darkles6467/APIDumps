#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBillboardComponent : UPrimitiveComponent
{
	char __padding[0x20L];
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.ScreenSize"); }
	float& UField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.U"); }
	float& ULField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.UL"); }
	float& VField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.V"); }
	float& VLField() { return *GetNativePointerField<float*>(this, "UBillboardComponent.VL"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UBillboardComponent.CalcBounds", result, LocalToWorld); }
	void SetSprite(UTexture2D * NewSprite) { NativeCall<void, UTexture2D *>(this, "UBillboardComponent.SetSprite", NewSprite); }
	void SetSpriteAndUV(UTexture2D * NewSprite, int NewU, int NewUL, int NewV, int NewVL) { NativeCall<void, UTexture2D *, int, int, int, int>(this, "UBillboardComponent.SetSpriteAndUV", NewSprite, NewU, NewUL, NewV, NewVL); }
	void SetUV(int NewU, int NewUL, int NewV, int NewVL) { NativeCall<void, int, int, int, int>(this, "UBillboardComponent.SetUV", NewU, NewUL, NewV, NewVL); }
};

