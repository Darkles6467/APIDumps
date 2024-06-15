#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleSystem : UObject
{
	char __padding[0x100L];
	TEnumAsByte<enum EParticleSystemUpdateMode>& SystemUpdateModeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSystemUpdateMode>*>(this, "UParticleSystem.SystemUpdateMode"); }
	float& UpdateTime_FPSField() { return *GetNativePointerField<float*>(this, "UParticleSystem.UpdateTime_FPS"); }
	float& UpdateTime_DeltaField() { return *GetNativePointerField<float*>(this, "UParticleSystem.UpdateTime_Delta"); }
	float& WarmupTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystem.WarmupTime"); }
	float& WarmupTickRateField() { return *GetNativePointerField<float*>(this, "UParticleSystem.WarmupTickRate"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "UParticleSystem.CustomTimeDilation"); }
	UInterpCurveEdSetup * CurveEdSetupField() { return GetNativePointerField<UInterpCurveEdSetup *>(this, "UParticleSystem.CurveEdSetup"); }
	float& LODDistanceCheckTimeField() { return *GetNativePointerField<float*>(this, "UParticleSystem.LODDistanceCheckTime"); }
	TEnumAsByte<enum ParticleSystemLODMethod>& LODMethodField() { return *GetNativePointerField<TEnumAsByte<enum ParticleSystemLODMethod>*>(this, "UParticleSystem.LODMethod"); }
	TArray<float>& LODDistancesField() { return *GetNativePointerField<TArray<float>*>(this, "UParticleSystem.LODDistances"); }
	TArray<FParticleSystemLOD>& LODSettingsField() { return *GetNativePointerField<TArray<FParticleSystemLOD>*>(this, "UParticleSystem.LODSettings"); }
	FBox& FixedRelativeBoundingBoxField() { return *GetNativePointerField<FBox*>(this, "UParticleSystem.FixedRelativeBoundingBox"); }
	float& OverrideMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UParticleSystem.OverrideMaxDrawDistance"); }
	float& SecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "UParticleSystem.SecondsBeforeInactive"); }
	float& DelayField() { return *GetNativePointerField<float*>(this, "UParticleSystem.Delay"); }
	float& DelayLowField() { return *GetNativePointerField<float*>(this, "UParticleSystem.DelayLow"); }
	FVector& MacroUVPositionField() { return *GetNativePointerField<FVector*>(this, "UParticleSystem.MacroUVPosition"); }
	float& MacroUVRadiusField() { return *GetNativePointerField<float*>(this, "UParticleSystem.MacroUVRadius"); }
	TEnumAsByte<enum EParticleSystemOcclusionBoundsMethod>& OcclusionBoundsMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSystemOcclusionBoundsMethod>*>(this, "UParticleSystem.OcclusionBoundsMethod"); }
	FBox& CustomOcclusionBoundsField() { return *GetNativePointerField<FBox*>(this, "UParticleSystem.CustomOcclusionBounds"); }
	TArray<FLODSoloTrack>& SoloTrackingField() { return *GetNativePointerField<TArray<FLODSoloTrack>*>(this, "UParticleSystem.SoloTracking"); }
	TArray<FNamedEmitterMaterial>& NamedMaterialSlotsField() { return *GetNativePointerField<TArray<FNamedEmitterMaterial>*>(this, "UParticleSystem.NamedMaterialSlots"); }

	// Functions

	void PreSave() { NativeCall<void>(this, "UParticleSystem.PreSave"); }
	bool CalculateMaxActiveParticleCounts() { return NativeCall<bool>(this, "UParticleSystem.CalculateMaxActiveParticleCounts"); }
	void ComputeCanTickInAnyThread() { NativeCall<void>(this, "UParticleSystem.ComputeCanTickInAnyThread"); }
	bool ContainsEmitterType(UClass * TypeData) { return NativeCall<bool, UClass *>(this, "UParticleSystem.ContainsEmitterType", TypeData); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UParticleSystem.GetAssetRegistryTags", OutTags); }
	ParticleSystemLODMethod GetCurrentLODMethod() { return NativeCall<ParticleSystemLODMethod>(this, "UParticleSystem.GetCurrentLODMethod"); }
	float GetLODDistance(int LODLevelIndex) { return NativeCall<float, int>(this, "UParticleSystem.GetLODDistance", LODLevelIndex); }
	int GetLODLevelCount() { return NativeCall<int>(this, "UParticleSystem.GetLODLevelCount"); }
	bool HasGPUEmitter() { return NativeCall<bool>(this, "UParticleSystem.HasGPUEmitter"); }
	void PostLoad() { NativeCall<void>(this, "UParticleSystem.PostLoad"); }
	void SetCurrentLODMethod(ParticleSystemLODMethod InMethod) { NativeCall<void, ParticleSystemLODMethod>(this, "UParticleSystem.SetCurrentLODMethod", InMethod); }
	bool SetLODDistance(int LODLevelIndex, float InDistance) { return NativeCall<bool, int, float>(this, "UParticleSystem.SetLODDistance", LODLevelIndex, InDistance); }
};

