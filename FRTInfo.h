#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FRTInfo : FRefCountedObject
{
	char __padding[0x90L];
	FString& DimensionsField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Dimensions"); }
	FString& WidthField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Width"); }
	FString& HeightField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Height"); }
	FString& DepthField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Depth"); }
	FString& FormatField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Format"); }
	FString& NumberField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Number"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Name"); }
	FString& SizeField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Size"); }
	FString& TypeField() { return *GetNativePointerField<FString*>(this, "FRTInfo.Type"); }
};

