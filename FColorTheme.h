#pragma once

#include "BaseDeclarations.h"
struct FColorTheme
{
	char __padding[0x40L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FColorTheme.Name"); }
	TArray<TSharedPtr<FLinearColor,0>>& ColorsField() { return *GetNativePointerField<TArray<TSharedPtr<FLinearColor,0>>*>(this, "FColorTheme.Colors"); }
	FColorTheme::FRefreshEvent& RefreshEventField() { return *GetNativePointerField<FColorTheme::FRefreshEvent*>(this, "FColorTheme.RefreshEvent"); }
};

