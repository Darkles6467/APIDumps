#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UAssetUserData.h"

struct UStaticMesh : UObject
{
	char __padding[0x120L];
	TScopedPointer<FStaticMeshRenderData>& RenderDataField() { return *GetNativePointerField<TScopedPointer<FStaticMeshRenderData>*>(this, "UStaticMesh.RenderData"); }
	int& LightMapResolutionField() { return *GetNativePointerField<int*>(this, "UStaticMesh.LightMapResolution"); }
	int& LightMapCoordinateIndexField() { return *GetNativePointerField<int*>(this, "UStaticMesh.LightMapCoordinateIndex"); }
	TEnumAsByte<enum EDistanceFieldTwoSidedOverride>& DistanceFieldTwoSidedOverrideField() { return *GetNativePointerField<TEnumAsByte<enum EDistanceFieldTwoSidedOverride>*>(this, "UStaticMesh.DistanceFieldTwoSidedOverride"); }
	float& DistanceFieldRuntimeQualityField() { return *GetNativePointerField<float*>(this, "UStaticMesh.DistanceFieldRuntimeQuality"); }
	int& CurrentStreamedInSizeField() { return *GetNativePointerField<int*>(this, "UStaticMesh.CurrentStreamedInSize"); }
	bool& bStreamInStateField() { return *GetNativePointerField<bool*>(this, "UStaticMesh.bStreamInState"); }
	bool& bStreamInRequestField() { return *GetNativePointerField<bool*>(this, "UStaticMesh.bStreamInRequest"); }
	unsigned __int64& RequestLoadField() { return *GetNativePointerField<unsigned __int64*>(this, "UStaticMesh.RequestLoad"); }
	FThreadSafeCounter& PendingLODRequestField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "UStaticMesh.PendingLODRequest"); }
	long double& LastStreamChangeCallField() { return *GetNativePointerField<long double*>(this, "UStaticMesh.LastStreamChangeCall"); }
	TLinkedList<IAbstractStreamer *> * LinkedStreamersField() { return GetNativePointerField<TLinkedList<IAbstractStreamer *> *>(this, "UStaticMesh.LinkedStreamers"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UStaticMesh.StreamingDistanceMultiplier"); }
	float& LpvBiasMultiplierField() { return *GetNativePointerField<float*>(this, "UStaticMesh.LpvBiasMultiplier"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UStaticMesh.ReleaseResourcesFence"); }
	FString& HighResSourceMeshNameField() { return *GetNativePointerField<FString*>(this, "UStaticMesh.HighResSourceMeshName"); }
	unsigned int& HighResSourceMeshCRCField() { return *GetNativePointerField<unsigned int*>(this, "UStaticMesh.HighResSourceMeshCRC"); }
	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UStaticMesh.LightingGuid"); }
	TArray<UStaticMeshSocket *>& SocketsField() { return *GetNativePointerField<TArray<UStaticMeshSocket *>*>(this, "UStaticMesh.Sockets"); }
	TSharedPtr<FSpeedTreeWind,0>& SpeedTreeWindField() { return *GetNativePointerField<TSharedPtr<FSpeedTreeWind,0>*>(this, "UStaticMesh.SpeedTreeWind"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "UStaticMesh.LastRenderTime"); }
	float& ClosestDistanceField() { return *GetNativePointerField<float*>(this, "UStaticMesh.ClosestDistance"); }
	unsigned int& StreamDistanceFrameField() { return *GetNativePointerField<unsigned int*>(this, "UStaticMesh.StreamDistanceFrame"); }
	int& ElementToIgnoreForTexFactorField() { return *GetNativePointerField<int*>(this, "UStaticMesh.ElementToIgnoreForTexFactor"); }
	TArray<UAssetUserData *>& AssetUserDataField() { return *GetNativePointerField<TArray<UAssetUserData *>*>(this, "UStaticMesh.AssetUserData"); }
	UNavCollision * NavCollisionField() { return GetNativePointerField<UNavCollision *>(this, "UStaticMesh.NavCollision"); }
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "UStaticMesh.CustomTag"); }

	// Functions

	void AddAssetUserData(UAssetUserData * InUserData) { NativeCall<void, UAssetUserData *>(this, "UStaticMesh.AddAssetUserData", InUserData); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UStaticMesh.AddReferencedObjects", InThis, Collector); }
	void BeginDestroy() { NativeCall<void>(this, "UStaticMesh.BeginDestroy"); }
	bool ContainsPhysicsTriMeshData(bool bInUseAllTriData) { return NativeCall<bool, bool>(this, "UStaticMesh.ContainsPhysicsTriMeshData", bInUseAllTriData); }
	long double Dyn_GetLastRenderTime() { return NativeCall<long double>(this, "UStaticMesh.Dyn_GetLastRenderTime"); }
	float Dyn_GetSizePriority() { return NativeCall<float>(this, "UStaticMesh.Dyn_GetSizePriority"); }
	int Dyn_GetStreamingSize() { return NativeCall<int>(this, "UStaticMesh.Dyn_GetStreamingSize"); }
	bool Dyn_IsStreamed() { return NativeCall<bool>(this, "UStaticMesh.Dyn_IsStreamed"); }
	void Dyn_SetStreaming(bool bShouldStream, bool bForceStatusChange) { NativeCall<void, bool, bool>(this, "UStaticMesh.Dyn_SetStreaming", bShouldStream, bForceStatusChange); }
	UStaticMeshSocket * FindSocket(FName InSocketName) { return NativeCall<UStaticMeshSocket *, FName>(this, "UStaticMesh.FindSocket", InSocketName); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UStaticMesh.GetAssetRegistryTags", OutTags); }
	UAssetUserData * GetAssetUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { return NativeCall<UAssetUserData *, TSubclassOf<UAssetUserData>>(this, "UStaticMesh.GetAssetUserDataOfClass", InUserDataClass); }
	FBoxSphereBounds * GetBounds(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "UStaticMesh.GetBounds", result); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UStaticMesh.GetDesc", result); }
	int GetNumVertices(int LODIndex) { return NativeCall<int, int>(this, "UStaticMesh.GetNumVertices", LODIndex); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UStaticMesh.GetResourceSize", Mode); }
	float GetStreamingTextureFactor(int RequestedUVIndex) { return NativeCall<float, int>(this, "UStaticMesh.GetStreamingTextureFactor", RequestedUVIndex); }
	bool HasValidRenderData() { return NativeCall<bool>(this, "UStaticMesh.HasValidRenderData"); }
	void InitResources() { NativeCall<void>(this, "UStaticMesh.InitResources"); }
	void InitializeLODData() { NativeCall<void>(this, "UStaticMesh.InitializeLODData"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UStaticMesh.IsReadyForFinishDestroy"); }
	void PostLoad() { NativeCall<void>(this, "UStaticMesh.PostLoad"); }
	void ReleaseResources() { NativeCall<void>(this, "UStaticMesh.ReleaseResources"); }
	void RemoveUserDataOfClass(TSubclassOf<UAssetUserData> InUserDataClass) { NativeCall<void, TSubclassOf<UAssetUserData>>(this, "UStaticMesh.RemoveUserDataOfClass", InUserDataClass); }
	void ResetStreamingState() { NativeCall<void>(this, "UStaticMesh.ResetStreamingState"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UStaticMesh.Serialize", Ar); }
	void SetLODStreaming(long double CurrentAppTime) { NativeCall<void, long double>(this, "UStaticMesh.SetLODStreaming", CurrentAppTime); }
	bool UpdateStreaming() { return NativeCall<bool>(this, "UStaticMesh.UpdateStreaming"); }
};

