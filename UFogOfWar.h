#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UFogOfWar : UObject
{
	char __padding[0xa0L];
	FString& MapnameField() { return *GetNativePointerField<FString*>(this, "UFogOfWar.Mapname"); }
	float& InterpolationSpeedField() { return *GetNativePointerField<float*>(this, "UFogOfWar.InterpolationSpeed"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UFogOfWar.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UFogOfWar.SizeY"); }
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "UFogOfWar.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "UFogOfWar.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "UFogOfWar.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "UFogOfWar.LongitudeScale"); }
	TWeakObjectPtr<AShooterPlayerController>& OwnerControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "UFogOfWar.OwnerController"); }
	TArray<unsigned char>& VisibilityBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UFogOfWar.VisibilityBuffer"); }
	TArray<FColor>& BrushTextureDataField() { return *GetNativePointerField<TArray<FColor>*>(this, "UFogOfWar.BrushTextureData"); }
	int& UnlockGridSizeXField() { return *GetNativePointerField<int*>(this, "UFogOfWar.UnlockGridSizeX"); }
	int& UnlockGridSizeYField() { return *GetNativePointerField<int*>(this, "UFogOfWar.UnlockGridSizeY"); }
	bool& bHasUnlockedMiniMapAchievementField() { return *GetNativePointerField<bool*>(this, "UFogOfWar.bHasUnlockedMiniMapAchievement"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UFogOfWar.ReleaseResourcesFence"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UFogOfWar.BeginDestroy"); }
	FFogOfWarInfoStruct * GetFogInfoStruct(FFogOfWarInfoStruct * result) { return NativeCall<FFogOfWarInfoStruct *, FFogOfWarInfoStruct *>(this, "UFogOfWar.GetFogInfoStruct", result); }
	float GetLatitudeOrigin() { return NativeCall<float>(this, "UFogOfWar.GetLatitudeOrigin"); }
	float GetLatitudeScale() { return NativeCall<float>(this, "UFogOfWar.GetLatitudeScale"); }
	float GetLongitudeOrigin() { return NativeCall<float>(this, "UFogOfWar.GetLongitudeOrigin"); }
	float GetLongitudeScale() { return NativeCall<float>(this, "UFogOfWar.GetLongitudeScale"); }
	void Init() { NativeCall<void>(this, "UFogOfWar.Init"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UFogOfWar.IsReadyForFinishDestroy"); }
	bool LoadFromFile(FObjectReader * Reader, int Version) { return NativeCall<bool, FObjectReader *, int>(this, "UFogOfWar.LoadFromFile", Reader, Version); }
	void LoadFromStruct(const FFogOfWarInfoStruct * FogInfo) { NativeCall<void, const FFogOfWarInfoStruct *>(this, "UFogOfWar.LoadFromStruct", FogInfo); }
	void Reset() { NativeCall<void>(this, "UFogOfWar.Reset"); }
	void Update(float DeltaTime, int X, int Y) { NativeCall<void, float, int, int>(this, "UFogOfWar.Update", DeltaTime, X, Y); }
	void UpdateTexture() { NativeCall<void>(this, "UFogOfWar.UpdateTexture"); }
};

