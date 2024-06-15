#pragma once

#include "BaseDeclarations.h"
#include "ITextDecorator.h"
#include "FPrimalImageDecorator.h"

struct FPrimalImageDecorator : ITextDecorator
{
	char __padding[0x28L];
	FString& RunNameField() { return *GetNativePointerField<FString*>(this, "FPrimalImageDecorator.RunName"); }

	// Functions

	static TSharedRef<FPrimalImageDecorator,0> * Create(TSharedRef<FPrimalImageDecorator,0> * result, FString InRunName, const ISlateStyle *const InStyle) { return NativeCall<TSharedRef<FPrimalImageDecorator,0> *, TSharedRef<FPrimalImageDecorator,0> *, FString, const ISlateStyle *const>(nullptr, "FPrimalImageDecorator.Create", result, InRunName, InStyle); }
	bool Supports(const FTextRunParseResults * RunParseResult, const FString * Text) { return NativeCall<bool, const FTextRunParseResults *, const FString *>(this, "FPrimalImageDecorator.Supports", RunParseResult, Text); }
};

