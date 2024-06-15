#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URadialForceComponent : USceneComponent
{
	char __padding[0x30L];
	float& ImpulseStrengthField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.ImpulseStrength"); }
	float& ForceStrengthField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.ForceStrength"); }
	float& DestructibleDamageField() { return *GetNativePointerField<float*>(this, "URadialForceComponent.DestructibleDamage"); }
	TArray<TEnumAsByte<enum EObjectTypeQuery>>& ObjectTypesToAffectField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EObjectTypeQuery>>*>(this, "URadialForceComponent.ObjectTypesToAffect"); }
	FCollisionObjectQueryParams& CollisionObjectQueryParamsField() { return *GetNativePointerField<FCollisionObjectQueryParams*>(this, "URadialForceComponent.CollisionObjectQueryParams"); }

	// Functions

	void AddObjectTypeToAffect(TEnumAsByte<enum EObjectTypeQuery> ObjectType) { NativeCall<void, TEnumAsByte<enum EObjectTypeQuery>>(this, "URadialForceComponent.AddObjectTypeToAffect", ObjectType); }
	void FireImpulse() { NativeCall<void>(this, "URadialForceComponent.FireImpulse"); }
	void PostLoad() { NativeCall<void>(this, "URadialForceComponent.PostLoad"); }
	void RemoveObjectTypeToAffect(TEnumAsByte<enum EObjectTypeQuery> ObjectType) { NativeCall<void, TEnumAsByte<enum EObjectTypeQuery>>(this, "URadialForceComponent.RemoveObjectTypeToAffect", ObjectType); }
};

