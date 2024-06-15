#pragma once

#include "BaseDeclarations.h"
#include "IStreamingManager.h"

struct FStreamingManagerCollection : IStreamingManager
{
	char __padding[0x38L];
	int& NumIterationsField() { return *GetNativePointerField<int*>(this, "FStreamingManagerCollection.NumIterations"); }
	int& DisableResourceStreamingCountField() { return *GetNativePointerField<int*>(this, "FStreamingManagerCollection.DisableResourceStreamingCount"); }
	float& LoadMapTimeLimitField() { return *GetNativePointerField<float*>(this, "FStreamingManagerCollection.LoadMapTimeLimit"); }
	FStreamingManagerTexture * TextureStreamingManagerField() { return GetNativePointerField<FStreamingManagerTexture *>(this, "FStreamingManagerCollection.TextureStreamingManager"); }
	FStreamingManagerMesh * MeshStreamingManagerField() { return GetNativePointerField<FStreamingManagerMesh *>(this, "FStreamingManagerCollection.MeshStreamingManager"); }

	// Functions

	void AddLevel(ULevel * Level) { NativeCall<void, ULevel *>(this, "FStreamingManagerCollection.AddLevel", Level); }
	void AddOrRemoveTextureStreamingManagerIfNeeded(bool bIsInit) { NativeCall<void, bool>(this, "FStreamingManagerCollection.AddOrRemoveTextureStreamingManagerIfNeeded", bIsInit); }
	void AddPreparedLevel(ULevel * Level) { NativeCall<void, ULevel *>(this, "FStreamingManagerCollection.AddPreparedLevel", Level); }
	void AddStreamingManager(IStreamingManager * StreamingManager) { NativeCall<void, IStreamingManager *>(this, "FStreamingManagerCollection.AddStreamingManager", StreamingManager); }
	int BlockTillAllRequestsFinished(float TimeLimit, bool bLogResults) { return NativeCall<int, float, bool>(this, "FStreamingManagerCollection.BlockTillAllRequestsFinished", TimeLimit, bLogResults); }
	void CancelForcedResources() { NativeCall<void>(this, "FStreamingManagerCollection.CancelForcedResources"); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FStreamingManagerCollection.Exec", InWorld, Cmd, Ar); }
	int GetNumWantingResources() { return NativeCall<int>(this, "FStreamingManagerCollection.GetNumWantingResources"); }
	int GetNumWantingResourcesID() { return NativeCall<int>(this, "FStreamingManagerCollection.GetNumWantingResourcesID"); }
	bool IsTextureStreamingEnabled() { return NativeCall<bool>(this, "FStreamingManagerCollection.IsTextureStreamingEnabled"); }
	void NotifyActorDestroyed(AActor * Actor) { NativeCall<void, AActor *>(this, "FStreamingManagerCollection.NotifyActorDestroyed", Actor); }
	void NotifyActorSpawned(AActor * Actor) { NativeCall<void, AActor *>(this, "FStreamingManagerCollection.NotifyActorSpawned", Actor); }
	void NotifyLevelChange() { NativeCall<void>(this, "FStreamingManagerCollection.NotifyLevelChange"); }
	void NotifyPrimitiveAttached(UPrimitiveComponent * Primitive, EDynamicPrimitiveType DynamicType) { NativeCall<void, UPrimitiveComponent *, EDynamicPrimitiveType>(this, "FStreamingManagerCollection.NotifyPrimitiveAttached", Primitive, DynamicType); }
	void NotifyPrimitiveDetached(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FStreamingManagerCollection.NotifyPrimitiveDetached", Primitive); }
	void NotifyPrimitiveUpdated(UPrimitiveComponent * Primitive) { NativeCall<void, UPrimitiveComponent *>(this, "FStreamingManagerCollection.NotifyPrimitiveUpdated", Primitive); }
	void RemoveLevel(ULevel * Level) { NativeCall<void, ULevel *>(this, "FStreamingManagerCollection.RemoveLevel", Level); }
	void SetDisregardWorldResourcesForFrames(int NumFrames) { NativeCall<void, int>(this, "FStreamingManagerCollection.SetDisregardWorldResourcesForFrames", NumFrames); }
	int StreamAllResources(float TimeLimit) { return NativeCall<int, float>(this, "FStreamingManagerCollection.StreamAllResources", TimeLimit); }
	void Tick(float DeltaTime, bool bProcessEverything) { NativeCall<void, float, bool>(this, "FStreamingManagerCollection.Tick", DeltaTime, bProcessEverything); }
	void UpdateResourceStreaming(float DeltaTime, bool bProcessEverything) { NativeCall<void, float, bool>(this, "FStreamingManagerCollection.UpdateResourceStreaming", DeltaTime, bProcessEverything); }
};

