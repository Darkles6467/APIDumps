#pragma once

#include "BaseDeclarations.h"
struct FSamplerStateInitializerRHI
{
	char __padding[0x1cL];
	TEnumAsByte<enum ESamplerFilter>& FilterField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerFilter>*>(this, "FSamplerStateInitializerRHI.Filter"); }
	TEnumAsByte<enum ESamplerAddressMode>& AddressUField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerAddressMode>*>(this, "FSamplerStateInitializerRHI.AddressU"); }
	TEnumAsByte<enum ESamplerAddressMode>& AddressVField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerAddressMode>*>(this, "FSamplerStateInitializerRHI.AddressV"); }
	TEnumAsByte<enum ESamplerAddressMode>& AddressWField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerAddressMode>*>(this, "FSamplerStateInitializerRHI.AddressW"); }
	int& MipBiasField() { return *GetNativePointerField<int*>(this, "FSamplerStateInitializerRHI.MipBias"); }
	float& MinMipLevelField() { return *GetNativePointerField<float*>(this, "FSamplerStateInitializerRHI.MinMipLevel"); }
	float& MaxMipLevelField() { return *GetNativePointerField<float*>(this, "FSamplerStateInitializerRHI.MaxMipLevel"); }
	int& MaxAnisotropyField() { return *GetNativePointerField<int*>(this, "FSamplerStateInitializerRHI.MaxAnisotropy"); }
	unsigned int& BorderColorField() { return *GetNativePointerField<unsigned int*>(this, "FSamplerStateInitializerRHI.BorderColor"); }
	TEnumAsByte<enum ESamplerCompareFunction>& SamplerComparisonFunctionField() { return *GetNativePointerField<TEnumAsByte<enum ESamplerCompareFunction>*>(this, "FSamplerStateInitializerRHI.SamplerComparisonFunction"); }
};

