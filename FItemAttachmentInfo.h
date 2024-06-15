#pragma once

#include "BaseDeclarations.h"
struct FItemAttachmentInfo
{
	char __padding[0x48L];
	TArray<FExtraItemAttachmentInfo>& ExtraItemAttachmentInfosField() { return *GetNativePointerField<TArray<FExtraItemAttachmentInfo>*>(this, "FItemAttachmentInfo.ExtraItemAttachmentInfos"); }
	FName& SocketToAttachToField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.SocketToAttachTo"); }
	TEnumAsByte<enum EPrimalEquipmentType::Type>& IgnoreAttachmentWhenEquipmentOfTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "FItemAttachmentInfo.IgnoreAttachmentWhenEquipmentOfType"); }
	FName& AttachedCompNameField() { return *GetNativePointerField<FName*>(this, "FItemAttachmentInfo.AttachedCompName"); }

	// Functions

	FItemAttachmentInfo * operator=(const FItemAttachmentInfo * __that) { return NativeCall<FItemAttachmentInfo *, const FItemAttachmentInfo *>(this, "FItemAttachmentInfo.operator=", __that); }
};

