#pragma once

#include "BaseDeclarations.h"
struct FAISightTarget
{
	char __padding[0x20L];
	IAISightTargetInterface * SightTargetInterfaceField() { return GetNativePointerField<IAISightTargetInterface *>(this, "FAISightTarget.SightTargetInterface"); }
	FGenericTeamId& TeamIdField() { return *GetNativePointerField<FGenericTeamId*>(this, "FAISightTarget.TeamId"); }
	FName& TargetIdField() { return *GetNativePointerField<FName*>(this, "FAISightTarget.TargetId"); }
};

