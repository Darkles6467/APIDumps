#pragma once

#include "BaseDeclarations.h"
#include "UTexture.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "IMediaPlayer.h"

struct UMediaTexture : UTexture
{
	char __padding[0x58L];
	TEnumAsByte<enum TextureAddress>& AddressXField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UMediaTexture.AddressX"); }
	TEnumAsByte<enum TextureAddress>& AddressYField() { return *GetNativePointerField<TEnumAsByte<enum TextureAddress>*>(this, "UMediaTexture.AddressY"); }
	FLinearColor& ClearColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMediaTexture.ClearColor"); }
	int& VideoTrackIndexField() { return *GetNativePointerField<int*>(this, "UMediaTexture.VideoTrackIndex"); }
	UMediaPlayer * MediaPlayerField() { return GetNativePointerField<UMediaPlayer *>(this, "UMediaTexture.MediaPlayer"); }
	FIntPoint& CachedDimensionsField() { return *GetNativePointerField<FIntPoint*>(this, "UMediaTexture.CachedDimensions"); }
	UMediaPlayer * CurrentMediaPlayerField() { return GetNativePointerField<UMediaPlayer *>(this, "UMediaTexture.CurrentMediaPlayer"); }
	FRenderCommandFence * ReleasePlayerFenceField() { return GetNativePointerField<FRenderCommandFence *>(this, "UMediaTexture.ReleasePlayerFence"); }
	TSharedRef<FMediaSampleBuffer,1>& VideoBufferField() { return *GetNativePointerField<TSharedRef<FMediaSampleBuffer,1>*>(this, "UMediaTexture.VideoBuffer"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UMediaTexture.BeginDestroy"); }
	FTextureResource * CreateResource() { return NativeCall<FTextureResource *>(this, "UMediaTexture.CreateResource"); }
	void FinishDestroy() { NativeCall<void>(this, "UMediaTexture.FinishDestroy"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UMediaTexture.GetDesc", result); }
	TSharedPtr<IMediaPlayer,0> * GetPlayer(TSharedPtr<IMediaPlayer,0> * result) { return NativeCall<TSharedPtr<IMediaPlayer,0> *, TSharedPtr<IMediaPlayer,0> *>(this, "UMediaTexture.GetPlayer", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UMediaTexture.GetResourceSize", Mode); }
	float GetSurfaceHeight() { return NativeCall<float>(this, "UMediaTexture.GetSurfaceHeight"); }
	float GetSurfaceWidth() { return NativeCall<float>(this, "UMediaTexture.GetSurfaceWidth"); }
	void HandleMediaPlayerMediaChanged() { NativeCall<void>(this, "UMediaTexture.HandleMediaPlayerMediaChanged"); }
	void InitializeTrack() { NativeCall<void>(this, "UMediaTexture.InitializeTrack"); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UMediaTexture.IsReadyForFinishDestroy"); }
	void PostLoad() { NativeCall<void>(this, "UMediaTexture.PostLoad"); }
	void SetMediaPlayer(UMediaPlayer * InMediaPlayer) { NativeCall<void, UMediaPlayer *>(this, "UMediaTexture.SetMediaPlayer", InMediaPlayer); }
};

