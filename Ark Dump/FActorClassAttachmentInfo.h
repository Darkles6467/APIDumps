#pragma once

#include "BaseDeclarations.h"
struct FActorClassAttachmentInfo
{
	char __padding[0x50L];
	TArray<FItemAttachmentInfo>& ItemAttachmentInfosField() { return *GetNativePointerField<TArray<FItemAttachmentInfo>*>(this, "FActorClassAttachmentInfo.ItemAttachmentInfos"); }
	FName& PlayerMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskParamName"); }
	int& PlayerMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskMaterialIndex"); }
	int& PlayerMeshTextureMaskMaterialIndexAltField() { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.PlayerMeshTextureMaskMaterialIndexAlt"); }
	FName& FPVHandsMeshTextureMaskParamNameField() { return *GetNativePointerField<FName*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskParamName"); }
	int& FPVHandsMeshTextureMaskMaterialIndexField() { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskMaterialIndex"); }
	int& FPVHandsMeshTextureMaskMaterialIndex2Field() { return *GetNativePointerField<int*>(this, "FActorClassAttachmentInfo.FPVHandsMeshTextureMaskMaterialIndex2"); }

	// Functions

	FActorClassAttachmentInfo * operator=(const FActorClassAttachmentInfo * __that) { return NativeCall<FActorClassAttachmentInfo *, const FActorClassAttachmentInfo *>(this, "FActorClassAttachmentInfo.operator=", __that); }
};

