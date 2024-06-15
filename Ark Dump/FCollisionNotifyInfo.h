#pragma once

#include "BaseDeclarations.h"
struct FCollisionNotifyInfo
{
	char __padding[0x68L];
	bool& bCallEvent0Field() { return *GetNativePointerField<bool*>(this, "FCollisionNotifyInfo.bCallEvent0"); }
	bool& bCallEvent1Field() { return *GetNativePointerField<bool*>(this, "FCollisionNotifyInfo.bCallEvent1"); }
	FRigidBodyCollisionInfo& Info0Field() { return *GetNativePointerField<FRigidBodyCollisionInfo*>(this, "FCollisionNotifyInfo.Info0"); }
	FRigidBodyCollisionInfo& Info1Field() { return *GetNativePointerField<FRigidBodyCollisionInfo*>(this, "FCollisionNotifyInfo.Info1"); }
	FCollisionImpactData& RigidCollisionDataField() { return *GetNativePointerField<FCollisionImpactData*>(this, "FCollisionNotifyInfo.RigidCollisionData"); }
};

