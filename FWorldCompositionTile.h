#pragma once

#include "BaseDeclarations.h"
struct FWorldCompositionTile
{
	char __padding[0xc0L];
	FName& PackageNameField() { return *GetNativePointerField<FName*>(this, "FWorldCompositionTile.PackageName"); }
	FName& ShortHandNameField() { return *GetNativePointerField<FName*>(this, "FWorldCompositionTile.ShortHandName"); }
	TArray<FName>& LODPackageNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FWorldCompositionTile.LODPackageNames"); }
	FWorldTileInfo& InfoField() { return *GetNativePointerField<FWorldTileInfo*>(this, "FWorldCompositionTile.Info"); }
	long double& StreamingLevelStateChangeTimeField() { return *GetNativePointerField<long double*>(this, "FWorldCompositionTile.StreamingLevelStateChangeTime"); }
	bool& bHasInclusionVolumeField() { return *GetNativePointerField<bool*>(this, "FWorldCompositionTile.bHasInclusionVolume"); }

	// Functions

};

