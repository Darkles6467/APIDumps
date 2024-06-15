#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASkyBoxLoader : AActor
{
	char __padding[0x78L];
	TArray<FStringAssetReference>& SkyBoxStringReferencesField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ASkyBoxLoader.SkyBoxStringReferences"); }
	TArray<FStringAssetReference>& FogScatterStringReferencesField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ASkyBoxLoader.FogScatterStringReferences"); }
	TArray<FStringAssetReference>& FogLossStringReferencesField() { return *GetNativePointerField<TArray<FStringAssetReference>*>(this, "ASkyBoxLoader.FogLossStringReferences"); }
	TArray<FSkyBoxLoadedStatus>& LoadedStatusField() { return *GetNativePointerField<TArray<FSkyBoxLoadedStatus>*>(this, "ASkyBoxLoader.LoadedStatus"); }
	bool& bHasProcessedAnyField() { return *GetNativePointerField<bool*>(this, "ASkyBoxLoader.bHasProcessedAny"); }

	// Functions

	bool AnyOutstandingLoads() { return NativeCall<bool>(this, "ASkyBoxLoader.AnyOutstandingLoads"); }
	void AsyncLoad(int TextureIndex, bool SkyOnly) { NativeCall<void, int, bool>(this, "ASkyBoxLoader.AsyncLoad", TextureIndex, SkyOnly); }
	void AsyncLoadComplete(const FStringAssetReference * InAssetReference, int TextureIndex, int ResourceIndex) { NativeCall<void, const FStringAssetReference *, int, int>(this, "ASkyBoxLoader.AsyncLoadComplete", InAssetReference, TextureIndex, ResourceIndex); }
	void AsyncLoadResource(int TextureIndex, int ResourceIndex) { NativeCall<void, int, int>(this, "ASkyBoxLoader.AsyncLoadResource", TextureIndex, ResourceIndex); }
	void BeginPlay() { NativeCall<void>(this, "ASkyBoxLoader.BeginPlay"); }
	void FinishTextureLoads() { NativeCall<void>(this, "ASkyBoxLoader.FinishTextureLoads"); }
	TArray<FStringAssetReference> * GetListByResource(int ResourceIndex) { return NativeCall<TArray<FStringAssetReference> *, int>(this, "ASkyBoxLoader.GetListByResource", ResourceIndex); }
	void LoadResource(int TextureIndex, int ResourceIndex) { NativeCall<void, int, int>(this, "ASkyBoxLoader.LoadResource", TextureIndex, ResourceIndex); }
	bool LoadSkyTextureIndex(int TextureIdx) { return NativeCall<bool, int>(this, "ASkyBoxLoader.LoadSkyTextureIndex", TextureIdx); }
	bool LoadSkyTextureIndexArray(const TArray<int> * TextureIndices) { return NativeCall<bool, const TArray<int> *>(this, "ASkyBoxLoader.LoadSkyTextureIndexArray", TextureIndices); }
	void RequestAsyncLoad(const FStringAssetReference * AssetRef, int TextureIndex, int ResourceIndex) { NativeCall<void, const FStringAssetReference *, int, int>(this, "ASkyBoxLoader.RequestAsyncLoad", AssetRef, TextureIndex, ResourceIndex); }
	bool SetSkyTextureIndices(int Texture0, int Texture1) { return NativeCall<bool, int, int>(this, "ASkyBoxLoader.SetSkyTextureIndices", Texture0, Texture1); }
	void K2_OnTextureIndicesLoaded(const TArray<int> * TextureIndices) { NativeCall<void, const TArray<int> *>(this, "ASkyBoxLoader.K2_OnTextureIndicesLoaded", TextureIndices); }
};

