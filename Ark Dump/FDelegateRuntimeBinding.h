#pragma once

#include "BaseDeclarations.h"
struct FDelegateRuntimeBinding
{
	char __padding[0x28L];
	FString& ObjectNameField() { return *GetNativePointerField<FString*>(this, "FDelegateRuntimeBinding.ObjectName"); }
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "FDelegateRuntimeBinding.PropertyName"); }
	FName& FunctionNameField() { return *GetNativePointerField<FName*>(this, "FDelegateRuntimeBinding.FunctionName"); }
	TEnumAsByte<enum EBindingKind::Type>& KindField() { return *GetNativePointerField<TEnumAsByte<enum EBindingKind::Type>*>(this, "FDelegateRuntimeBinding.Kind"); }

	// Functions

};

