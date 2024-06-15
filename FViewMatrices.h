#pragma once

#include "BaseDeclarations.h"
struct FViewMatrices
{
	char __padding[0x130L];
	FMatrix& ProjMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewMatrices.ProjMatrix"); }
	FMatrix& ViewMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewMatrices.ViewMatrix"); }
	FMatrix& TranslatedViewProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewMatrices.TranslatedViewProjectionMatrix"); }
	FMatrix& InvTranslatedViewProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FViewMatrices.InvTranslatedViewProjectionMatrix"); }
	const FConvexVolume * GetDynamicMeshElementsShadowCullFrustumField() { return GetNativePointerField<const FConvexVolume *>(this, "FViewMatrices.GetDynamicMeshElementsShadowCullFrustum"); }
	FVector& PreShadowTranslationField() { return *GetNativePointerField<FVector*>(this, "FViewMatrices.PreShadowTranslation"); }
	FVector& PreViewTranslationField() { return *GetNativePointerField<FVector*>(this, "FViewMatrices.PreViewTranslation"); }
	FVector& ViewOriginField() { return *GetNativePointerField<FVector*>(this, "FViewMatrices.ViewOrigin"); }

	// Functions

	FMatrix * GetViewProjMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "FViewMatrices.GetViewProjMatrix", result); }
	FMatrix * GetInvViewProjMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "FViewMatrices.GetInvViewProjMatrix", result); }
	FMatrix * GetViewRotationProjMatrix(FMatrix * result) { return NativeCall<FMatrix *, FMatrix *>(this, "FViewMatrices.GetViewRotationProjMatrix", result); }
};

