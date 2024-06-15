#pragma once

#include "BaseDeclarations.h"
#include "FD3D11ComputeShader.h"

struct FVulkanPipelineStateCacheManager
{
	char __padding[0x2a8L];
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanPipelineStateCacheManager.Device"); }
	bool& bEvictImmediatelyField() { return *GetNativePointerField<bool*>(this, "FVulkanPipelineStateCacheManager.bEvictImmediately"); }
	bool& bLinkedToPSOFCField() { return *GetNativePointerField<bool*>(this, "FVulkanPipelineStateCacheManager.bLinkedToPSOFC"); }
	bool& bLinkedToPSOFCSucessfulLoadedField() { return *GetNativePointerField<bool*>(this, "FVulkanPipelineStateCacheManager.bLinkedToPSOFCSucessfulLoaded"); }
	FString& LinkedToPSOFCCacheFolderPathField() { return *GetNativePointerField<FString*>(this, "FVulkanPipelineStateCacheManager.LinkedToPSOFCCacheFolderPath"); }
	FString& LinkedToPSOFCCacheFolderFilenameField() { return *GetNativePointerField<FString*>(this, "FVulkanPipelineStateCacheManager.LinkedToPSOFCCacheFolderFilename"); }
	FWindowsCriticalSection& InitializerToPipelineMapCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanPipelineStateCacheManager.InitializerToPipelineMapCS"); }
	FWindowsCriticalSection& GfxPipelineEntriesCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanPipelineStateCacheManager.GfxPipelineEntriesCS"); }
	FWindowsRWLock& ComputePipelineLockField() { return *GetNativePointerField<FWindowsRWLock*>(this, "FVulkanPipelineStateCacheManager.ComputePipelineLock"); }
	struct VkPipelineCache_T * PipelineCacheField() { return GetNativePointerField<struct VkPipelineCache_T *>(this, "FVulkanPipelineStateCacheManager.PipelineCache"); }
	FWindowsCriticalSection& LayoutMapCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FVulkanPipelineStateCacheManager.LayoutMapCS"); }

	// Functions

	void FGfxPipelineEntry() { NativeCall<void>(this, "FVulkanPipelineStateCacheManager.FGfxPipelineEntry"); }
	void FGfxPipelineEntry() { NativeCall<void>(this, "FVulkanPipelineStateCacheManager.FGfxPipelineEntry"); }
	void FShaderUCodeCache() { NativeCall<void>(this, "FVulkanPipelineStateCacheManager.FShaderUCodeCache"); }
	FVulkanRHIGraphicsPipelineState * CreateAndAdd(const FGraphicsPipelineStateInitializer * PSOInitializer, FGfxPSIKey PSIKey, TSharedPtr<FVulkanPipelineStateCacheManager::FGfxPipelineEntry,1> GfxEntry, FGfxEntryKey GfxEntryKey) { return NativeCall<FVulkanRHIGraphicsPipelineState *, const FGraphicsPipelineStateInitializer *, FGfxPSIKey, TSharedPtr<FVulkanPipelineStateCacheManager::FGfxPipelineEntry,1>, FGfxEntryKey>(this, "FVulkanPipelineStateCacheManager.CreateAndAdd", PSOInitializer, PSIKey, GfxEntry, GfxEntryKey); }
	FVulkanComputePipeline * CreateComputePipelineFromShader(TVulkanBaseShader<FRHIComputeShader,5,32> * Shader) { return NativeCall<FVulkanComputePipeline *, TVulkanBaseShader<FRHIComputeShader,5,32> *>(this, "FVulkanPipelineStateCacheManager.CreateComputePipelineFromShader", Shader); }
	void CreateGfxPipelineFromEntry(FVulkanPipelineStateCacheManager::FGfxPipelineEntry * GfxEntry, FVulkanShader ** Shaders, FVulkanGfxPipeline * Pipeline) { NativeCall<void, FVulkanPipelineStateCacheManager::FGfxPipelineEntry *, FVulkanShader **, FVulkanGfxPipeline *>(this, "FVulkanPipelineStateCacheManager.CreateGfxPipelineFromEntry", GfxEntry, Shaders, Pipeline); }
	void DestroyCache() { NativeCall<void>(this, "FVulkanPipelineStateCacheManager.DestroyCache"); }
	FVulkanRHIGraphicsPipelineState * FindInLoadedLibrary(const FGraphicsPipelineStateInitializer * PSOInitializer, FGfxPSIKey * PSIKey, TSharedPtr<FVulkanPipelineStateCacheManager::FGfxPipelineEntry,1> * OutGfxEntry, FGfxEntryKey * OutGfxEntryKey) { return NativeCall<FVulkanRHIGraphicsPipelineState *, const FGraphicsPipelineStateInitializer *, FGfxPSIKey *, TSharedPtr<FVulkanPipelineStateCacheManager::FGfxPipelineEntry,1> *, FGfxEntryKey *>(this, "FVulkanPipelineStateCacheManager.FindInLoadedLibrary", PSOInitializer, PSIKey, OutGfxEntry, OutGfxEntryKey); }
	FVulkanRHIGraphicsPipelineState * FindInRuntimeCache(const FGraphicsPipelineStateInitializer * Initializer, FGfxPSIKey * OutKey) { return NativeCall<FVulkanRHIGraphicsPipelineState *, const FGraphicsPipelineStateInitializer *, FGfxPSIKey *>(this, "FVulkanPipelineStateCacheManager.FindInRuntimeCache", Initializer, OutKey); }
	FVulkanComputePipeline * GetOrCreateComputePipeline(TVulkanBaseShader<FRHIComputeShader,5,32> * ComputeShader) { return NativeCall<FVulkanComputePipeline *, TVulkanBaseShader<FRHIComputeShader,5,32> *>(this, "FVulkanPipelineStateCacheManager.GetOrCreateComputePipeline", ComputeShader); }
	void FGfxPipelineEntry(FVulkanShader *const * Shaders) { NativeCall<void, FVulkanShader *const *>(this, "FVulkanPipelineStateCacheManager.FGfxPipelineEntry", Shaders); }
	FVulkanGfxLayout * GetOrGenerateGfxLayout(const FBoundShaderStateInput * BSI, const TArrayView<FRHISamplerState * const> * ImmutableSamplers) { return NativeCall<FVulkanGfxLayout *, const FBoundShaderStateInput *, const TArrayView<FRHISamplerState * const> *>(this, "FVulkanPipelineStateCacheManager.GetOrGenerateGfxLayout", BSI, ImmutableSamplers); }
	void InitAndLoad(const TArray<FString> * CacheFilenames) { NativeCall<void, const TArray<FString> *>(this, "FVulkanPipelineStateCacheManager.InitAndLoad", CacheFilenames); }
	bool Load(const TArray<FString> * CacheFilenames) { return NativeCall<bool, const TArray<FString> *>(this, "FVulkanPipelineStateCacheManager.Load", CacheFilenames); }
	void FGfxPipelineEntry(const FVulkanRenderTargetLayout * RTLayout) { NativeCall<void, const FVulkanRenderTargetLayout *>(this, "FVulkanPipelineStateCacheManager.FGfxPipelineEntry", RTLayout); }
	void Save(const FString * CacheFilename, bool bFromPSOFC) { NativeCall<void, const FString *, bool>(this, "FVulkanPipelineStateCacheManager.Save", CacheFilename, bFromPSOFC); }
};

