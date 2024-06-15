#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsAsset : UObject
{
	char __padding[0xd0L];
	TArray<int>& BoundsBodiesField() { return *GetNativePointerField<TArray<int>*>(this, "UPhysicsAsset.BoundsBodies"); }
	TArray<UPhysicsConstraintTemplate *>& ConstraintSetupField() { return *GetNativePointerField<TArray<UPhysicsConstraintTemplate *>*>(this, "UPhysicsAsset.ConstraintSetup"); }

	// Functions

	void BodyFindConstraints(int BodyIndex, TArray<int> * Constraints) { NativeCall<void, int, TArray<int> *>(this, "UPhysicsAsset.BodyFindConstraints", BodyIndex, Constraints); }
	FBox * CalcAABB(FBox * result, const USkinnedMeshComponent * MeshComp) { return NativeCall<FBox *, FBox *, const USkinnedMeshComponent *>(this, "UPhysicsAsset.CalcAABB", result, MeshComp); }
	int FindBodyIndex(FName bodyName) { return NativeCall<int, FName>(this, "UPhysicsAsset.FindBodyIndex", bodyName); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UPhysicsAsset.GetAssetRegistryTags", OutTags); }
	void GetBodyIndicesBelow(TArray<int> * OutBodyIndices, FName InBoneName, USkeletalMesh * SkelMesh, bool bIncludeParent) { NativeCall<void, TArray<int> *, FName, USkeletalMesh *, bool>(this, "UPhysicsAsset.GetBodyIndicesBelow", OutBodyIndices, InBoneName, SkelMesh, bIncludeParent); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UPhysicsAsset.GetDesc", result); }
	void PostLoad() { NativeCall<void>(this, "UPhysicsAsset.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPhysicsAsset.Serialize", Ar); }
	void UpdateBodySetupIndexMap() { NativeCall<void>(this, "UPhysicsAsset.UpdateBodySetupIndexMap"); }
	void UpdateBoundsBodiesArray() { NativeCall<void>(this, "UPhysicsAsset.UpdateBoundsBodiesArray"); }
};

