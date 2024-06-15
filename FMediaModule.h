#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "IMediaPlayer.h"

struct IMediaModule : IModuleInterface
{
};

struct FMediaModule : IMediaModule
{
	char __padding[0x50L];
	FMediaModule::FOnFactoryAdded& FactoryAddedEventField() { return *GetNativePointerField<FMediaModule::FOnFactoryAdded*>(this, "FMediaModule.FactoryAddedEvent"); }
	FMediaModule::FOnFactoryRemoved& FactoryRemovedEventField() { return *GetNativePointerField<FMediaModule::FOnFactoryRemoved*>(this, "FMediaModule.FactoryRemovedEvent"); }
	TArray<IMediaPlayerFactory *>& MediaPlayerFactoriesField() { return *GetNativePointerField<TArray<IMediaPlayerFactory *>*>(this, "FMediaModule.MediaPlayerFactories"); }

	// Functions

	const FString * OnFactoryRemoved() { return NativeCall<const FString *>(this, "FMediaModule.OnFactoryRemoved"); }
	TSharedPtr<IMediaPlayer,0> * CreatePlayer(TSharedPtr<IMediaPlayer,0> * result, const FString * Url) { return NativeCall<TSharedPtr<IMediaPlayer,0> *, TSharedPtr<IMediaPlayer,0> *, const FString *>(this, "FMediaModule.CreatePlayer", result, Url); }
	int GetSupportedFormats(TMap<FString,FText,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FText,0> > * OutFormats) { return NativeCall<int, TMap<FString,FText,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FText,0> > *>(this, "FMediaModule.GetSupportedFormats", OutFormats); }
	void RegisterPlayerFactory(IMediaPlayerFactory * Factory) { NativeCall<void, IMediaPlayerFactory *>(this, "FMediaModule.RegisterPlayerFactory", Factory); }
	void ShutdownModule() { NativeCall<void>(this, "FMediaModule.ShutdownModule"); }
	void UnregisterPlayerFactory(IMediaPlayerFactory * Factory) { NativeCall<void, IMediaPlayerFactory *>(this, "FMediaModule.UnregisterPlayerFactory", Factory); }
};

