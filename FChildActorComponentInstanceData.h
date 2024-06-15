#pragma once

#include "BaseDeclarations.h"
#include "FComponentInstanceDataBase.h"

struct FChildActorComponentInstanceData : FComponentInstanceDataBase
{
	char __padding[0x18L];
	FName& ChildActorNameField() { return *GetNativePointerField<FName*>(this, "FChildActorComponentInstanceData.ChildActorName"); }
	TArray<FChildActorComponentInstanceData::FAttachedActorInfo>& AttachedActorsField() { return *GetNativePointerField<TArray<FChildActorComponentInstanceData::FAttachedActorInfo>*>(this, "FChildActorComponentInstanceData.AttachedActors"); }

	// Functions

};

