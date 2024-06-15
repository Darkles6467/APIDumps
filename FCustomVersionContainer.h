#pragma once

#include "BaseDeclarations.h"
#include "FGuid.h"

struct FCustomVersionContainer
{
	char __padding[0x10L];
	TArray<FCustomVersion>& VersionsField() { return *GetNativePointerField<TArray<FCustomVersion>*>(this, "FCustomVersionContainer.Versions"); }

	// Functions

	void Empty() { NativeCall<void>(this, "FCustomVersionContainer.Empty"); }
	static const FCustomVersionContainer * GetRegistered() { return NativeCall<const FCustomVersionContainer *>(nullptr, "FCustomVersionContainer.GetRegistered"); }
	const FCustomVersion * GetVersion(FGuid Key) { return NativeCall<const FCustomVersion *, FGuid>(this, "FCustomVersionContainer.GetVersion", Key); }
	void Serialize(FArchive * Ar, ECustomVersionSerializationFormat::Type Format) { NativeCall<void, FArchive *, ECustomVersionSerializationFormat::Type>(this, "FCustomVersionContainer.Serialize", Ar, Format); }
	void SetVersion(FGuid CustomKey, int Version, FString FriendlyName) { NativeCall<void, FGuid, int, FString>(this, "FCustomVersionContainer.SetVersion", CustomKey, Version, FriendlyName); }
};

