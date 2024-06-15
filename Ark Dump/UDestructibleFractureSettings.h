#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDestructibleFractureSettings : UObject
{
	char __padding[0x68L];
	int& CellSiteCountField() { return *GetNativePointerField<int*>(this, "UDestructibleFractureSettings.CellSiteCount"); }
	FFractureMaterial& FractureMaterialDescField() { return *GetNativePointerField<FFractureMaterial*>(this, "UDestructibleFractureSettings.FractureMaterialDesc"); }
	int& RandomSeedField() { return *GetNativePointerField<int*>(this, "UDestructibleFractureSettings.RandomSeed"); }
	TArray<FVector>& VoronoiSitesField() { return *GetNativePointerField<TArray<FVector>*>(this, "UDestructibleFractureSettings.VoronoiSites"); }
	int& OriginalSubmeshCountField() { return *GetNativePointerField<int*>(this, "UDestructibleFractureSettings.OriginalSubmeshCount"); }
	TArray<FDestructibleChunkParameters>& ChunkParametersField() { return *GetNativePointerField<TArray<FDestructibleChunkParameters>*>(this, "UDestructibleFractureSettings.ChunkParameters"); }

	// Functions

};

