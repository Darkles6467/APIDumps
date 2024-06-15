#pragma once

#include "BaseDeclarations.h"
struct FClothPhysicsProperties
{
	char __padding[0x24L];
	float& BendResistanceField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.BendResistance"); }
	float& ShearResistanceField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.ShearResistance"); }
	float& StretchLimitField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.StretchLimit"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.Friction"); }
	float& DampingField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.Damping"); }
	float& DragField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.Drag"); }
	float& GravityScaleField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.GravityScale"); }
	float& InertiaBlendField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.InertiaBlend"); }
	float& SelfCollisionThicknessField() { return *GetNativePointerField<float*>(this, "FClothPhysicsProperties.SelfCollisionThickness"); }

	// Functions

};

