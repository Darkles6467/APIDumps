#pragma once

#include "BaseDeclarations.h"
struct FEdGraphPinType
{
	char __padding[0x50L];
	FString& PinCategoryField() { return *GetNativePointerField<FString*>(this, "FEdGraphPinType.PinCategory"); }
	FString& PinSubCategoryField() { return *GetNativePointerField<FString*>(this, "FEdGraphPinType.PinSubCategory"); }
	FSimpleMemberReference& PinSubCategoryMemberReferenceField() { return *GetNativePointerField<FSimpleMemberReference*>(this, "FEdGraphPinType.PinSubCategoryMemberReference"); }
	bool& bIsArrayField() { return *GetNativePointerField<bool*>(this, "FEdGraphPinType.bIsArray"); }
	bool& bIsReferenceField() { return *GetNativePointerField<bool*>(this, "FEdGraphPinType.bIsReference"); }
	bool& bIsConstField() { return *GetNativePointerField<bool*>(this, "FEdGraphPinType.bIsConst"); }
	bool& bIsWeakPointerField() { return *GetNativePointerField<bool*>(this, "FEdGraphPinType.bIsWeakPointer"); }

	// Functions

	FEdGraphPinType * operator=(const FEdGraphPinType * __that) { return NativeCall<FEdGraphPinType *, const FEdGraphPinType *>(this, "FEdGraphPinType.operator=", __that); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FEdGraphPinType.Serialize", Ar); }
};

