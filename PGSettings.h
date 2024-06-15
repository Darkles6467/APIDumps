#pragma once

#include "BaseDeclarations.h"
struct PGSettings
{
	char __padding[0x17cL];
	int& MapSeedField() { return *GetNativePointerField<int*>(this, "PGSettings.MapSeed"); }
	float& WaterFrequencyField() { return *GetNativePointerField<float*>(this, "PGSettings.WaterFrequency"); }
	float& LandscapeRadiusField() { return *GetNativePointerField<float*>(this, "PGSettings.LandscapeRadius"); }
	float& MountainFrequencyField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainFrequency"); }
	float& MountainSlopeField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainSlope"); }
	float& MountainHeightField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainHeight"); }
	float& TurbulencePowerField() { return *GetNativePointerField<float*>(this, "PGSettings.TurbulencePower"); }
	float& ShoreSlopeField() { return *GetNativePointerField<float*>(this, "PGSettings.ShoreSlope"); }
	float& WaterLevelField() { return *GetNativePointerField<float*>(this, "PGSettings.WaterLevel"); }
	float& GrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.GrassDensity"); }
	float& JungleGrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.JungleGrassDensity"); }
	int& ErosionStepsField() { return *GetNativePointerField<int*>(this, "PGSettings.ErosionSteps"); }
	float& TreesGroundSlopeAccuracyField() { return *GetNativePointerField<float*>(this, "PGSettings.TreesGroundSlopeAccuracy"); }
	float& ErosionStrengthField() { return *GetNativePointerField<float*>(this, "PGSettings.ErosionStrength"); }
	float& DepositionStrengthField() { return *GetNativePointerField<float*>(this, "PGSettings.DepositionStrength"); }
	float& OceanFloorLevelField() { return *GetNativePointerField<float*>(this, "PGSettings.OceanFloorLevel"); }
	float& SnowBiomeSizeField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowBiomeSize"); }
	float& RedwoodBiomeSizeField() { return *GetNativePointerField<float*>(this, "PGSettings.RedwoodBiomeSize"); }
	float& MountainBiomeStartField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainBiomeStart"); }
	float& MountainTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainTreeDensity"); }
	float& JungleBiomeStartField() { return *GetNativePointerField<float*>(this, "PGSettings.JungleBiomeStart"); }
	float& IslandBorderCurveField() { return *GetNativePointerField<float*>(this, "PGSettings.IslandBorderCurve"); }
	float& MaxSawnHeightTextBoxField() { return *GetNativePointerField<float*>(this, "PGSettings.MaxSawnHeightTextBox"); }
	float& MountainGeneralTreesPercentField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainGeneralTreesPercent"); }
	float& MountainGrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.MountainGrassDensity"); }
	float& SnowGrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowGrassDensity"); }
	float& SnowMountainGrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowMountainGrassDensity"); }
	float& UnderwaterObjectsDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.UnderwaterObjectsDensity"); }
	float& SnowMountainsTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowMountainsTreeDensity"); }
	float& TreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.TreeDensity"); }
	float& JungleTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.JungleTreeDensity"); }
	float& RedWoodTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.RedWoodTreeDensity"); }
	float& SnowTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowTreeDensity"); }
	float& RedwoodGrassDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.RedwoodGrassDensity"); }
	float& ShoreTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.ShoreTreeDensity"); }
	float& SnowShoreTreeDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.SnowShoreTreeDensity"); }
	float& DeepWaterBiomesDepthField() { return *GetNativePointerField<float*>(this, "PGSettings.DeepWaterBiomesDepth"); }
	float& InlandWaterObjectsDensityField() { return *GetNativePointerField<float*>(this, "PGSettings.InlandWaterObjectsDensity"); }
	float& ShorelineStartOffsetField() { return *GetNativePointerField<float*>(this, "PGSettings.ShorelineStartOffset"); }
	float& ShorelineThicknessField() { return *GetNativePointerField<float*>(this, "PGSettings.ShorelineThickness"); }
	FVector& TerrainScaleMultiplierField() { return *GetNativePointerField<FVector*>(this, "PGSettings.TerrainScaleMultiplier"); }
	FVector2D& SnowBiomeLocationField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.SnowBiomeLocation"); }
	FVector2D& RedwoodBiomeLocationField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.RedwoodBiomeLocation"); }
	FVector2D& North1StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North1Start"); }
	FVector2D& North1EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North1End"); }
	FVector2D& North2StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North2Start"); }
	FVector2D& North2EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North2End"); }
	FVector2D& North3StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North3Start"); }
	FVector2D& North3EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.North3End"); }
	FVector2D& South1StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South1Start"); }
	FVector2D& South1EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South1End"); }
	FVector2D& South2StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South2Start"); }
	FVector2D& South2EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South2End"); }
	FVector2D& South3StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South3Start"); }
	FVector2D& South3EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.South3End"); }
	FVector2D& East1StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East1Start"); }
	FVector2D& East1EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East1End"); }
	FVector2D& East2StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East2Start"); }
	FVector2D& East2EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East2End"); }
	FVector2D& East3StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East3Start"); }
	FVector2D& East3EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.East3End"); }
	FVector2D& West1StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West1Start"); }
	FVector2D& West1EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West1End"); }
	FVector2D& West2StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West2Start"); }
	FVector2D& West2EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West2End"); }
	FVector2D& West3StartField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West3Start"); }
	FVector2D& West3EndField() { return *GetNativePointerField<FVector2D*>(this, "PGSettings.West3End"); }
};

