#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleOrientationBase : UParticleModule
{

	// Functions

};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase
{
	char __padding[0x8L];
	TEnumAsByte<enum EParticleAxisLock>& LockAxisFlagsField() { return *GetNativePointerField<TEnumAsByte<enum EParticleAxisLock>*>(this, "UParticleModuleOrientationAxisLock.LockAxisFlags"); }

	// Functions

	void SetLockAxis(ETickingGroup NewTickGroup) { NativeCall<void, ETickingGroup>(this, "UParticleModuleOrientationAxisLock.SetLockAxis", NewTickGroup); }
};

