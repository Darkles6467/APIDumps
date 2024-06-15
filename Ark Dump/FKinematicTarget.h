#pragma once

#include "BaseDeclarations.h"
struct FKinematicTarget
{
	char __padding[0x70L];
	FBodyInstance * BodyInstanceField() { return GetNativePointerField<FBodyInstance *>(this, "FKinematicTarget.BodyInstance"); }
	FTransform& TargetTMField() { return *GetNativePointerField<FTransform*>(this, "FKinematicTarget.TargetTM"); }
	FTransform& OriginalTMField() { return *GetNativePointerField<FTransform*>(this, "FKinematicTarget.OriginalTM"); }
};

