#pragma once

#include "BaseDeclarations.h"
struct FStreamableManager
{
	char __padding[0xa0L];

	// Functions

	void AddStructReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FStreamableManager.AddStructReferencedObjects", Collector); }
	void AsyncLoadCallback(FStringAssetReference Request) { NativeCall<void, FStringAssetReference>(this, "FStreamableManager.AsyncLoadCallback", Request); }
	static void AsyncLoadCallbackWrapper(const FString * PackageName, UPackage * LevelPackage, FStreamableManager::FCallback * Handler) { NativeCall<void, const FString *, UPackage *, FStreamableManager::FCallback *>(nullptr, "FStreamableManager.AsyncLoadCallbackWrapper", PackageName, LevelPackage, Handler); }
	void CheckCompletedRequests(const FStringAssetReference * Target, FStreamable * Existing) { NativeCall<void, const FStringAssetReference *, FStreamable *>(this, "FStreamableManager.CheckCompletedRequests", Target, Existing); }
	void FindInMemory(FStringAssetReference * InOutTargetName, FStreamable * Existing) { NativeCall<void, FStringAssetReference *, FStreamable *>(this, "FStreamableManager.FindInMemory", InOutTargetName, Existing); }
	bool IsSafeToLoad(const FStringAssetReference * InTargetName) { return NativeCall<bool, const FStringAssetReference *>(this, "FStreamableManager.IsSafeToLoad", InTargetName); }
	void OnPostGarbageCollect() { NativeCall<void>(this, "FStreamableManager.OnPostGarbageCollect"); }
	void OnPreGarbageCollect() { NativeCall<void>(this, "FStreamableManager.OnPreGarbageCollect"); }
	FStringAssetReference * ResolveRedirects(FStringAssetReference * result, const FStringAssetReference * Target) { return NativeCall<FStringAssetReference *, FStringAssetReference *, const FStringAssetReference *>(this, "FStreamableManager.ResolveRedirects", result, Target); }
	FStreamable * StreamInternal(const FStringAssetReference * InTargetName) { return NativeCall<FStreamable *, const FStringAssetReference *>(this, "FStreamableManager.StreamInternal", InTargetName); }
	void Unload(const FStringAssetReference * InTargetName) { NativeCall<void, const FStringAssetReference *>(this, "FStreamableManager.Unload", InTargetName); }
};

