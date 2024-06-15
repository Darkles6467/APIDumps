#pragma once

#include "BaseDeclarations.h"
struct FD3D11Adapter
{
	char __padding[0x8L];
	int& AdapterIndexField() { return *GetNativePointerField<int*>(this, "FD3D11Adapter.AdapterIndex"); }
	D3D_FEATURE_LEVEL& MaxSupportedFeatureLevelField() { return *GetNativePointerField<D3D_FEATURE_LEVEL*>(this, "FD3D11Adapter.MaxSupportedFeatureLevel"); }
};

