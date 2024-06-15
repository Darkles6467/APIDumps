#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FColor.h"

struct UArrowComponent : UPrimitiveComponent
{
	char __padding[0x10L];
	bool& bIsScreenSizeScaledField() { return *GetNativePointerField<bool*>(this, "UArrowComponent.bIsScreenSizeScaled"); }
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "UArrowComponent.ScreenSize"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UArrowComponent.CalcBounds", result, LocalToWorld); }
	void SetArrowColor_DEPRECATED(FColor NewColor) { NativeCall<void, FColor>(this, "UArrowComponent.SetArrowColor_DEPRECATED", NewColor); }
	void SetArrowColor_New(FLinearColor NewColor) { NativeCall<void, FLinearColor>(this, "UArrowComponent.SetArrowColor_New", NewColor); }
};

