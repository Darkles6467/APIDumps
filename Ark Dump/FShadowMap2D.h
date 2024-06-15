#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FShadowMap : FDeferredCleanupInterface
{
	char __padding[0x18L];
	TArray<FGuid>& LightGuidsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FShadowMap.LightGuids"); }
	int& NumRefsField() { return *GetNativePointerField<int*>(this, "FShadowMap.NumRefs"); }

	// Functions

};

struct FShadowMap2D : FShadowMap
{
	char __padding[0x20L];
	UShadowMapTexture2D * TextureField() { return GetNativePointerField<UShadowMapTexture2D *>(this, "FShadowMap2D.Texture"); }
	FVector2D& CoordinateScaleField() { return *GetNativePointerField<FVector2D*>(this, "FShadowMap2D.CoordinateScale"); }
	FVector2D& CoordinateBiasField() { return *GetNativePointerField<FVector2D*>(this, "FShadowMap2D.CoordinateBias"); }
	FieldArray<bool, 4> bChannelValidField() { return {this, "FShadowMap2D.bChannelValid"}; }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FShadowMap2D.AddReferencedObjects", Collector); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FShadowMap2D.Serialize", Ar); }
};

