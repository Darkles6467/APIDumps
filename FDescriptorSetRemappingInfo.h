#pragma once

#include "BaseDeclarations.h"
struct FDescriptorSetRemappingInfo
{
	char __padding[0xc8L];
	TArray<FDescriptorSetRemappingInfo::FSetInfo>& SetInfosField() { return *GetNativePointerField<TArray<FDescriptorSetRemappingInfo::FSetInfo>*>(this, "FDescriptorSetRemappingInfo.SetInfos"); }
	TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,3,8>& StageInfosField() { return *GetNativePointerField<TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,3,8>*>(this, "FDescriptorSetRemappingInfo.StageInfos"); }
	TArray<FInputAttachmentData>& InputAttachmentDataField() { return *GetNativePointerField<TArray<FInputAttachmentData>*>(this, "FDescriptorSetRemappingInfo.InputAttachmentData"); }

	// Functions

	bool operator==(const FDescriptorSetRemappingInfo * In) { return NativeCall<bool, const FDescriptorSetRemappingInfo *>(this, "FDescriptorSetRemappingInfo.operator==", In); }
	unsigned int AddGlobal(unsigned int Stage, int GlobalIndex, unsigned int NewDescriptorSet, VkDescriptorType InType, unsigned __int16 CombinedSamplerStateAlias) { return NativeCall<unsigned int, unsigned int, int, unsigned int, VkDescriptorType, unsigned __int16>(this, "FDescriptorSetRemappingInfo.AddGlobal", Stage, GlobalIndex, NewDescriptorSet, InType, CombinedSamplerStateAlias); }
	unsigned int AddPackedUB(unsigned int Stage, int PackUBIndex, unsigned int NewDescriptorSet, VkDescriptorType InType) { return NativeCall<unsigned int, unsigned int, int, unsigned int, VkDescriptorType>(this, "FDescriptorSetRemappingInfo.AddPackedUB", Stage, PackUBIndex, NewDescriptorSet, InType); }
	FDescriptorSetRemappingInfo::FUBRemappingInfo * AddUBWithData(FDescriptorSetRemappingInfo::FUBRemappingInfo * result, unsigned int Stage, int UniformBufferIndex, unsigned int NewDescriptorSet, VkDescriptorType InType, unsigned int * OutNewBindingIndex) { return NativeCall<FDescriptorSetRemappingInfo::FUBRemappingInfo *, FDescriptorSetRemappingInfo::FUBRemappingInfo *, unsigned int, int, unsigned int, VkDescriptorType, unsigned int *>(this, "FDescriptorSetRemappingInfo.AddUBWithData", result, Stage, UniformBufferIndex, NewDescriptorSet, InType, OutNewBindingIndex); }
};

