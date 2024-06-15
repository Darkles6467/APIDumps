#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FObjectListItem.h"
#include "PGFixed.h"
#include "FBiomeMiniMap.h"

struct UTerrainGenerator : UObject
{
	char __padding[0x178L];
	TArray<UFloatMap *>& TemporaryMapsField() { return *GetNativePointerField<TArray<UFloatMap *>*>(this, "UTerrainGenerator.TemporaryMaps"); }
	int& MapSizeXField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.MapSizeX"); }
	int& MapSizeYField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.MapSizeY"); }
	int& MapSeedField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.MapSeed"); }
	FVector2D& MapOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.MapOffset"); }
	float& LandscapeRadiusField() { return *GetNativePointerField<float*>(this, "UTerrainGenerator.LandscapeRadius"); }
	int& SectionsPerComponentField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.SectionsPerComponent"); }
	int& QuadsPerSectionField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.QuadsPerSection"); }
	int& ComponentsCountXField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.ComponentsCountX"); }
	int& ComponentsCountYField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.ComponentsCountY"); }
	FVector2D& NorthRegion1StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion1Start"); }
	FVector2D& NorthRegion1EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion1End"); }
	FVector2D& NorthRegion2StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion2Start"); }
	FVector2D& NorthRegion2EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion2End"); }
	FVector2D& NorthRegion3StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion3Start"); }
	FVector2D& NorthRegion3EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.NorthRegion3End"); }
	FVector2D& SouthRegion1StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion1Start"); }
	FVector2D& SouthRegion1EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion1End"); }
	FVector2D& SouthRegion2StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion2Start"); }
	FVector2D& SouthRegion2EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion2End"); }
	FVector2D& SouthRegion3StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion3Start"); }
	FVector2D& SouthRegion3EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SouthRegion3End"); }
	FVector2D& EastRegion1StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion1Start"); }
	FVector2D& EastRegion1EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion1End"); }
	FVector2D& EastRegion2StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion2Start"); }
	FVector2D& EastRegion2EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion2End"); }
	FVector2D& EastRegion3StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion3Start"); }
	FVector2D& EastRegion3EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.EastRegion3End"); }
	FVector2D& WestRegion1StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion1Start"); }
	FVector2D& WestRegion1EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion1End"); }
	FVector2D& WestRegion2StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion2Start"); }
	FVector2D& WestRegion2EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion2End"); }
	FVector2D& WestRegion3StartField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion3Start"); }
	FVector2D& WestRegion3EndField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.WestRegion3End"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.Version"); }
	TArray<FName>& GenerationWeigthMapNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UTerrainGenerator.GenerationWeigthMapNames"); }
	TArray<FString>& CachedTerrainMaterialLayerNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UTerrainGenerator.CachedTerrainMaterialLayerNames"); }
	TArray<ULandscapeMaterialInstanceConstant *>& CachedTerrainMaterialsField() { return *GetNativePointerField<TArray<ULandscapeMaterialInstanceConstant *>*>(this, "UTerrainGenerator.CachedTerrainMaterials"); }
	UTerrainComponent * TerrainComponentField() { return GetNativePointerField<UTerrainComponent *>(this, "UTerrainGenerator.TerrainComponent"); }
	FVector& BiomeGridSizeField() { return *GetNativePointerField<FVector*>(this, "UTerrainGenerator.BiomeGridSize"); }
	FVector& NPCGridSizeField() { return *GetNativePointerField<FVector*>(this, "UTerrainGenerator.NPCGridSize"); }
	FVector2D& SupplyZonesGridSizeField() { return *GetNativePointerField<FVector2D*>(this, "UTerrainGenerator.SupplyZonesGridSize"); }
	int& NumberOfThreadsField() { return *GetNativePointerField<int*>(this, "UTerrainGenerator.NumberOfThreads"); }

	// Functions

	void PreSave() { NativeCall<void>(this, "UTerrainGenerator.PreSave"); }
	UFloatMap * Erosion(UFloatMap * HeightMap, UFloatMap * Destination, int IterationStep, float SoilCarryCapacity, float WaterEvaporationSpeed, float ErosionSpeed, float DepositionSpeed, float DirectionInertia, float MinimumSlope, float Gravity, float MinHeightForErosion, float DepositionStrength, float ErosionStrength) { return NativeCall<UFloatMap *, UFloatMap *, UFloatMap *, int, float, float, float, float, float, float, float, float, float, float>(this, "UTerrainGenerator.Erosion", HeightMap, Destination, IterationStep, SoilCarryCapacity, WaterEvaporationSpeed, ErosionSpeed, DepositionSpeed, DirectionInertia, MinimumSlope, Gravity, MinHeightForErosion, DepositionStrength, ErosionStrength); }
	UGeneratorModule * AbsModule(UGeneratorModule * First) { return NativeCall<UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.AbsModule", First); }
	UGeneratorModule * AddModule(UGeneratorModule * First, UGeneratorModule * Second) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.AddModule", First, Second); }
	UGeneratorModule * BillowModule(int Seed, float Frequency, float OctaveCount, float Persistence, float Lacunarity) { return NativeCall<UGeneratorModule *, int, float, float, float, float>(this, "UTerrainGenerator.BillowModule", Seed, Frequency, OctaveCount, Persistence, Lacunarity); }
	UGeneratorModule * BlendModule(UGeneratorModule * First, UGeneratorModule * Second, UGeneratorModule * Control) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.BlendModule", First, Second, Control); }
	UFloatMap * Blur(UFloatMap * Destination, bool bHorizontal, bool bVertical, bool bAdditive, float Intensity) { return NativeCall<UFloatMap *, UFloatMap *, bool, bool, bool, float>(this, "UTerrainGenerator.Blur", Destination, bHorizontal, bVertical, bAdditive, Intensity); }
	UFloatMap * Cavity(UFloatMap ** Destination, UFloatMap * Source, bool Concave, float Intensity, float Threshold, int SpreadIteration, float SpreadStrength) { return NativeCall<UFloatMap *, UFloatMap **, UFloatMap *, bool, float, float, int, float>(this, "UTerrainGenerator.Cavity", Destination, Source, Concave, Intensity, Threshold, SpreadIteration, SpreadStrength); }
	UGeneratorModule * CircularMaskModule(FVector2D Center, float CircleRadius, float Exp, int Seed, float Frequency, float OctaveCount, float Persistence, float Lacunarity, float NoiseAmplitude) { return NativeCall<UGeneratorModule *, FVector2D, float, float, int, float, float, float, float, float>(this, "UTerrainGenerator.CircularMaskModule", Center, CircleRadius, Exp, Seed, Frequency, OctaveCount, Persistence, Lacunarity, NoiseAmplitude); }
	UGeneratorModule * ClampModule(UGeneratorModule * First, float lower, float upper) { return NativeCall<UGeneratorModule *, UGeneratorModule *, float, float>(this, "UTerrainGenerator.ClampModule", First, lower, upper); }
	UGeneratorModule * ConstModule(float Value) { return NativeCall<UGeneratorModule *, float>(this, "UTerrainGenerator.ConstModule", Value); }
	UByteMap * ConvertFloatMapToByteMap(UFloatMap * FloatMap, bool bClearFloatMap) { return NativeCall<UByteMap *, UFloatMap *, bool>(this, "UTerrainGenerator.ConvertFloatMapToByteMap", FloatMap, bClearFloatMap); }
	UFloatMap * Copy(UFloatMap * Source, UFloatMap * Destination) { return NativeCall<UFloatMap *, UFloatMap *, UFloatMap *>(this, "UTerrainGenerator.Copy", Source, Destination); }
	UFloatMap * CreateFloatMap(int SizeX, int SizeY, bool IsTemporary) { return NativeCall<UFloatMap *, int, int, bool>(this, "UTerrainGenerator.CreateFloatMap", SizeX, SizeY, IsTemporary); }
	void CreateWater(UClass * WaterPlane, UClass * WaterFloorPlane, float SurfaceLevel, float FloorLevel) { NativeCall<void, UClass *, UClass *, float, float>(this, "UTerrainGenerator.CreateWater", WaterPlane, WaterFloorPlane, SurfaceLevel, FloorLevel); }
	UGeneratorModule * CurveModule(UGeneratorModule * First, TArray<float> Input, TArray<float> Output) { return NativeCall<UGeneratorModule *, UGeneratorModule *, TArray<float>, TArray<float>>(this, "UTerrainGenerator.CurveModule", First, Input, Output); }
	void DeleteTemporaryMaps() { NativeCall<void>(this, "UTerrainGenerator.DeleteTemporaryMaps"); }
	UGeneratorModule * DisplaceModule(UGeneratorModule * First, UGeneratorModule * X, UGeneratorModule * Y, UGeneratorModule * Z) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.DisplaceModule", First, X, Y, Z); }
	UFloatMap * EvaluateModules(UFloatMap * Destination, UGeneratorModule * Module) { return NativeCall<UFloatMap *, UFloatMap *, UGeneratorModule *>(this, "UTerrainGenerator.EvaluateModules", Destination, Module); }
	UGeneratorModule * ExponentModule(UGeneratorModule * First, float ExponentValue) { return NativeCall<UGeneratorModule *, UGeneratorModule *, float>(this, "UTerrainGenerator.ExponentModule", First, ExponentValue); }
	void FloodFill(UFloatMap * Source, float X, float Y, float Value) { NativeCall<void, UFloatMap *, float, float, float>(this, "UTerrainGenerator.FloodFill", Source, X, Y, Value); }
	UFloatMap * GenerateHeightMapFromMask(UFloatMap * Source, UFloatMap * Destination, int Iterations) { return NativeCall<UFloatMap *, UFloatMap *, UFloatMap *, int>(this, "UTerrainGenerator.GenerateHeightMapFromMask", Source, Destination, Iterations); }
	FVector * GetLocationOnLandscape(FVector * result, FVector Position) { return NativeCall<FVector *, FVector *, FVector>(this, "UTerrainGenerator.GetLocationOnLandscape", result, Position); }
	FVector * GetPositionRelativeToTerrian(FVector * result, FVector Location) { return NativeCall<FVector *, FVector *, FVector>(this, "UTerrainGenerator.GetPositionRelativeToTerrian", result, Location); }
	static int GetRandomObject(TArray<FObjectListItem> * ObjectsList, PGFixed Probability, UObjectMap * Destination, int x, int y, PGRandomStream * RandomStream) { return NativeCall<int, TArray<FObjectListItem> *, PGFixed, UObjectMap *, int, int, PGRandomStream *>(nullptr, "UTerrainGenerator.GetRandomObject", ObjectsList, Probability, Destination, x, y, RandomStream); }
	UGeneratorModule * InvertModule(UGeneratorModule * First) { return NativeCall<UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.InvertModule", First); }
	UGeneratorModule * LerpModule(UGeneratorModule * First, UGeneratorModule * Second, UGeneratorModule * Alpha) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.LerpModule", First, Second, Alpha); }
	UGeneratorModule * LinearCurveModule(UGeneratorModule * First, TArray<float> Input, TArray<float> Output) { return NativeCall<UGeneratorModule *, UGeneratorModule *, TArray<float>, TArray<float>>(this, "UTerrainGenerator.LinearCurveModule", First, Input, Output); }
	UGeneratorModule * LinearModule() { return NativeCall<UGeneratorModule *>(this, "UTerrainGenerator.LinearModule"); }
	UGeneratorModule * MaxModule(UGeneratorModule * First, UGeneratorModule * Second) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.MaxModule", First, Second); }
	UGeneratorModule * MinModule(UGeneratorModule * First, UGeneratorModule * Second) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.MinModule", First, Second); }
	UGeneratorModule * MultiplyModule(UGeneratorModule * First, UGeneratorModule * Second) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.MultiplyModule", First, Second); }
	UFloatMap * Normalize(UFloatMap * Source, UFloatMap * Destination, float Minimum, float Maximum) { return NativeCall<UFloatMap *, UFloatMap *, UFloatMap *, float, float>(this, "UTerrainGenerator.Normalize", Source, Destination, Minimum, Maximum); }
	UGeneratorModule * OneMinusModule(UGeneratorModule * Source) { return NativeCall<UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.OneMinusModule", Source); }
	UGeneratorModule * PerlinModule(int Seed, float Frequency, float OctaveCount, float Persistence, float Lacunarity) { return NativeCall<UGeneratorModule *, int, float, float, float, float>(this, "UTerrainGenerator.PerlinModule", Seed, Frequency, OctaveCount, Persistence, Lacunarity); }
	UFloatMap * Pixelate(UFloatMap * Source, int CellSize) { return NativeCall<UFloatMap *, UFloatMap *, int>(this, "UTerrainGenerator.Pixelate", Source, CellSize); }
	UGeneratorModule * PointSampleFloatMapModule(UFloatMap * Source) { return NativeCall<UGeneratorModule *, UFloatMap *>(this, "UTerrainGenerator.PointSampleFloatMapModule", Source); }
	UGeneratorModule * PowerModule(UGeneratorModule * First, UGeneratorModule * Second) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.PowerModule", First, Second); }
	UFloatMap * Resize(UFloatMap * Source, int NewSize, bool bClearSourceData) { return NativeCall<UFloatMap *, UFloatMap *, int, bool>(this, "UTerrainGenerator.Resize", Source, NewSize, bClearSourceData); }
	UGeneratorModule * RidgedMultiModule(int Seed, float Frequency, float OctaveCount, float Lacunarity) { return NativeCall<UGeneratorModule *, int, float, float, float>(this, "UTerrainGenerator.RidgedMultiModule", Seed, Frequency, OctaveCount, Lacunarity); }
	UGeneratorModule * SampleFloatMapModule(UFloatMap * Source) { return NativeCall<UGeneratorModule *, UFloatMap *>(this, "UTerrainGenerator.SampleFloatMapModule", Source); }
	UFloatMap * Scale(UFloatMap * Source, float Scale, bool bClearSourceData) { return NativeCall<UFloatMap *, UFloatMap *, float, bool>(this, "UTerrainGenerator.Scale", Source, Scale, bClearSourceData); }
	UGeneratorModule * ScaleBiasModule(UGeneratorModule * First, float Scale, float Bias) { return NativeCall<UGeneratorModule *, UGeneratorModule *, float, float>(this, "UTerrainGenerator.ScaleBiasModule", First, Scale, Bias); }
	UFloatMap * ScaleFloatMap(UFloatMap * Source, float Scale, bool bClearSourceData) { return NativeCall<UFloatMap *, UFloatMap *, float, bool>(this, "UTerrainGenerator.ScaleFloatMap", Source, Scale, bClearSourceData); }
	UGeneratorModule * SelectModule(UGeneratorModule * First, UGeneratorModule * Second, UGeneratorModule * Control, float Lower, float Upper, float EdgeFalloff) { return NativeCall<UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, UGeneratorModule *, float, float, float>(this, "UTerrainGenerator.SelectModule", First, Second, Control, Lower, Upper, EdgeFalloff); }
	UFloatMap * SetAsTemporary(UFloatMap * Destination) { return NativeCall<UFloatMap *, UFloatMap *>(this, "UTerrainGenerator.SetAsTemporary", Destination); }
	UFloatMap * ShrinkMask(UFloatMap * Source, UFloatMap * Destination, int Iterations) { return NativeCall<UFloatMap *, UFloatMap *, UFloatMap *, int>(this, "UTerrainGenerator.ShrinkMask", Source, Destination, Iterations); }
	UGeneratorModule * SlopeModule(UGeneratorModule * Source) { return NativeCall<UGeneratorModule *, UGeneratorModule *>(this, "UTerrainGenerator.SlopeModule", Source); }
	UFloatMap * Spread(UFloatMap ** Destination, UFloatMap * Source, int SpreadIteration, float SpreadStrength) { return NativeCall<UFloatMap *, UFloatMap **, UFloatMap *, int, float>(this, "UTerrainGenerator.Spread", Destination, Source, SpreadIteration, SpreadStrength); }
	UGeneratorModule * TerraceModule(UGeneratorModule * First, TArray<float> Control) { return NativeCall<UGeneratorModule *, UGeneratorModule *, TArray<float>>(this, "UTerrainGenerator.TerraceModule", First, Control); }
	UGeneratorModule * ThresholdModule(UGeneratorModule * First, float Power, float Range, float Threshold) { return NativeCall<UGeneratorModule *, UGeneratorModule *, float, float, float>(this, "UTerrainGenerator.ThresholdModule", First, Power, Range, Threshold); }
	UFloatMap * ToFloatMap(UFloatMap * Destination, UGeneratorModule * Module, bool IsTemporary) { return NativeCall<UFloatMap *, UFloatMap *, UGeneratorModule *, bool>(this, "UTerrainGenerator.ToFloatMap", Destination, Module, IsTemporary); }
	UGeneratorModule * TurbulenceModule(UGeneratorModule * First, int Seed, float Frequency, float Power, float Roughness) { return NativeCall<UGeneratorModule *, UGeneratorModule *, int, float, float, float>(this, "UTerrainGenerator.TurbulenceModule", First, Seed, Frequency, Power, Roughness); }
	UGeneratorModule * VoroniModule(int Seed, float Frequency, float displacement) { return NativeCall<UGeneratorModule *, int, float, float>(this, "UTerrainGenerator.VoroniModule", Seed, Frequency, displacement); }
	void GenerateTerrain(UFloatMap ** HeightMap, TArray<FString> * WeightmapsNames, TArray<UByteMap *> * WeightMaps, UObjectMap ** ObjectMap, UObjectMap ** BiomeMap, UObjectMap ** NPCMap, UMaterialInterface ** LandscapeMaterial, UObjectMap ** PerComponentMaterialOverride, UObjectMap ** SupplyDropsMap, UObjectMap ** SupplyDropsPointsMap, TArray<FBiomeMiniMap> * BiomesMiniMap) { NativeCall<void, UFloatMap **, TArray<FString> *, TArray<UByteMap *> *, UObjectMap **, UObjectMap **, UObjectMap **, UMaterialInterface **, UObjectMap **, UObjectMap **, UObjectMap **, TArray<FBiomeMiniMap> *>(this, "UTerrainGenerator.GenerateTerrain", HeightMap, WeightmapsNames, WeightMaps, ObjectMap, BiomeMap, NPCMap, LandscapeMaterial, PerComponentMaterialOverride, SupplyDropsMap, SupplyDropsPointsMap, BiomesMiniMap); }
	void PostCreateTerrain() { NativeCall<void>(this, "UTerrainGenerator.PostCreateTerrain"); }
	void PreGenerateTerrain() { NativeCall<void>(this, "UTerrainGenerator.PreGenerateTerrain"); }
};

