#pragma once

#include "BaseDeclarations.h"
struct FClutterPropertyOverride
{
	char __padding[0x50L];
	int& LayerIDField() { return *GetNativePointerField<int*>(this, "FClutterPropertyOverride.LayerID"); }
	int& ArrayIndexField() { return *GetNativePointerField<int*>(this, "FClutterPropertyOverride.ArrayIndex"); }
	bool& OverrideDensityField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideDensity"); }
	float& DensityField() { return *GetNativePointerField<float*>(this, "FClutterPropertyOverride.Density"); }
	bool& OverrideMinSizeField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideMinSize"); }
	float& MinSizeField() { return *GetNativePointerField<float*>(this, "FClutterPropertyOverride.MinSize"); }
	bool& OverrideMaxSizeField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideMaxSize"); }
	float& MaxSizeField() { return *GetNativePointerField<float*>(this, "FClutterPropertyOverride.MaxSize"); }
	bool& OverrideGenerationSeedField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideGenerationSeed"); }
	int& GenerationSeedField() { return *GetNativePointerField<int*>(this, "FClutterPropertyOverride.GenerationSeed"); }
	bool& OverrideAllowShadowsField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideAllowShadows"); }
	bool& bAllowShadowsField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.bAllowShadows"); }
	bool& OverrideStaticMeshField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideStaticMesh"); }
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FClutterPropertyOverride.StaticMesh"); }
	bool& OverrideVisibilityTextureField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideVisibilityTexture"); }
	bool& OverrideTextureChannelField() { return *GetNativePointerField<bool*>(this, "FClutterPropertyOverride.OverrideTextureChannel"); }
	int& TextureChannelField() { return *GetNativePointerField<int*>(this, "FClutterPropertyOverride.TextureChannel"); }

	// Functions

};

