#pragma once

#include "BaseDeclarations.h"
struct FCollisionResponseTemplate
{
	char __padding[0x60L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FCollisionResponseTemplate.Name"); }
	TEnumAsByte<enum ECollisionEnabled::Type>& CollisionEnabledField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionEnabled::Type>*>(this, "FCollisionResponseTemplate.CollisionEnabled"); }
	TEnumAsByte<enum ECollisionChannel>& ObjectTypeField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "FCollisionResponseTemplate.ObjectType"); }
	FName& ObjectTypeNameField() { return *GetNativePointerField<FName*>(this, "FCollisionResponseTemplate.ObjectTypeName"); }
	TArray<FResponseChannel>& CustomResponsesField() { return *GetNativePointerField<TArray<FResponseChannel>*>(this, "FCollisionResponseTemplate.CustomResponses"); }
	FString& HelpMessageField() { return *GetNativePointerField<FString*>(this, "FCollisionResponseTemplate.HelpMessage"); }
	bool& bCanModifyField() { return *GetNativePointerField<bool*>(this, "FCollisionResponseTemplate.bCanModify"); }
	FCollisionResponseContainer& ResponseToChannelsField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FCollisionResponseTemplate.ResponseToChannels"); }

	// Functions

	FCollisionResponseTemplate * operator=(const FCollisionResponseTemplate * __that) { return NativeCall<FCollisionResponseTemplate *, const FCollisionResponseTemplate *>(this, "FCollisionResponseTemplate.operator=", __that); }
	bool IsEqual(const TEnumAsByte<enum ECollisionEnabled::Type> InCollisionEnabled, const TEnumAsByte<enum ECollisionChannel> InObjectType, const FCollisionResponseContainer * InResponseToChannels) { return NativeCall<bool, const TEnumAsByte<enum ECollisionEnabled::Type>, const TEnumAsByte<enum ECollisionChannel>, const FCollisionResponseContainer *>(this, "FCollisionResponseTemplate.IsEqual", InCollisionEnabled, InObjectType, InResponseToChannels); }
};

