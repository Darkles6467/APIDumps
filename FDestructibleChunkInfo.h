#pragma once

#include "BaseDeclarations.h"
struct FDestructibleChunkInfo
{
	char __padding[0x18L];
	int& ChunkIndexField() { return *GetNativePointerField<int*>(this, "FDestructibleChunkInfo.ChunkIndex"); }
	TWeakObjectPtr<UDestructibleComponent>& OwningComponentField() { return *GetNativePointerField<TWeakObjectPtr<UDestructibleComponent>*>(this, "FDestructibleChunkInfo.OwningComponent"); }
	physx::PxRigidDynamic * ActorField() { return GetNativePointerField<physx::PxRigidDynamic *>(this, "FDestructibleChunkInfo.Actor"); }
};

