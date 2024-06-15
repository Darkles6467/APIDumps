#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEQSRenderingComponent : UPrimitiveComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> DrawFlagNameField() { return {this, "UEQSRenderingComponent.DrawFlagName"}; }
	bool& bDrawOnlyWhenSelectedField() { return *GetNativePointerField<bool*>(this, "UEQSRenderingComponent.bDrawOnlyWhenSelected"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UEQSRenderingComponent.CalcBounds", result, LocalToWorld); }
};

