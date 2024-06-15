#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeUtils : UObject
{

	// Functions

	static ALandscape * SpawnLandscape(UWorld * World, const TArray<unsigned short> * HeightfieldData, int SizeX, int SizeY, int SectionsPerComponent, int QuadsPerSection, const FVector * Location, const FRotator * Rotation, const FVector * Scale, UMaterialInterface * LandscapeMaterial, const TMap<FString,TArray<unsigned char>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TArray<unsigned char>,0> > * LandscapeWeightmaps) { return NativeCall<ALandscape *, UWorld *, const TArray<unsigned short> *, int, int, int, int, const FVector *, const FRotator *, const FVector *, UMaterialInterface *, const TMap<FString,TArray<unsigned char>,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,TArray<unsigned char>,0> > *>(nullptr, "ULandscapeUtils.SpawnLandscape", World, HeightfieldData, SizeX, SizeY, SectionsPerComponent, QuadsPerSection, Location, Rotation, Scale, LandscapeMaterial, LandscapeWeightmaps); }
};

