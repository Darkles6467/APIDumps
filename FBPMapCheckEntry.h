#pragma once

#include "BaseDeclarations.h"
struct FBPMapCheckEntry
{
	char __padding[0x28L];
	TEnumAsByte<enum EBPMapCheckSeverity::Type>& SeverityField() { return *GetNativePointerField<TEnumAsByte<enum EBPMapCheckSeverity::Type>*>(this, "FBPMapCheckEntry.Severity"); }
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "FBPMapCheckEntry.Message"); }

	// Functions

};

