#pragma once

#include "BaseDeclarations.h"
struct FLinkedZoneSpawnVolumeEntry
{
	char __padding[0x30L];
	ANPCZoneSpawnVolume * LinkedZoneSpawnVolumeField() { return GetNativePointerField<ANPCZoneSpawnVolume *>(this, "FLinkedZoneSpawnVolumeEntry.LinkedZoneSpawnVolume"); }
	TArray<FName>& ZoneSpawnVolumeFloorTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "FLinkedZoneSpawnVolumeEntry.ZoneSpawnVolumeFloorTags"); }
	float& EntryWeightField() { return *GetNativePointerField<float*>(this, "FLinkedZoneSpawnVolumeEntry.EntryWeight"); }

	// Functions

	FLinkedZoneSpawnVolumeEntry * operator=(const FLinkedZoneSpawnVolumeEntry * __that) { return NativeCall<FLinkedZoneSpawnVolumeEntry *, const FLinkedZoneSpawnVolumeEntry *>(this, "FLinkedZoneSpawnVolumeEntry.operator=", __that); }
};

