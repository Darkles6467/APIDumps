#pragma once

#include "BaseDeclarations.h"
struct FRecastNavMeshCachedData
{
	char __padding[0x160L];
	FieldArray<unsigned __int16, 64> FlagsPerAreaField() { return {this, "FRecastNavMeshCachedData.FlagsPerArea"}; }
	FieldArray<unsigned __int16, 64> FlagsPerOffMeshLinkAreaField() { return {this, "FRecastNavMeshCachedData.FlagsPerOffMeshLinkArea"}; }
	const ARecastNavMesh * ActorOwnerField() { return GetNativePointerField<const ARecastNavMesh *>(this, "FRecastNavMeshCachedData.ActorOwner"); }

	// Functions

	void OnAreaAdded(const UClass * AreaClass, int AreaID) { NativeCall<void, const UClass *, int>(this, "FRecastNavMeshCachedData.OnAreaAdded", AreaClass, AreaID); }
};

