#pragma once

#include "BaseDeclarations.h"
struct FRedirectedFont
{
	char __padding[0x20L];
	FString& RedirectedFontField() { return *GetNativePointerField<FString*>(this, "FRedirectedFont.RedirectedFont"); }
	FString& RedirectedBaseField() { return *GetNativePointerField<FString*>(this, "FRedirectedFont.RedirectedBase"); }
};

