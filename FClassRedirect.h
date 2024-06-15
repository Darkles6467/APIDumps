#pragma once

#include "BaseDeclarations.h"
struct FClassRedirect
{
	char __padding[0x58L];
	FString& ObjectNameField() { return *GetNativePointerField<FString*>(this, "FClassRedirect.ObjectName"); }
	FString& OldClassNameField() { return *GetNativePointerField<FString*>(this, "FClassRedirect.OldClassName"); }
	FString& NewClassNameField() { return *GetNativePointerField<FString*>(this, "FClassRedirect.NewClassName"); }
	FString& OldSubobjNameField() { return *GetNativePointerField<FString*>(this, "FClassRedirect.OldSubobjName"); }
	FString& NewSubobjNameField() { return *GetNativePointerField<FString*>(this, "FClassRedirect.NewSubobjName"); }
	bool& InstanceOnlyField() { return *GetNativePointerField<bool*>(this, "FClassRedirect.InstanceOnly"); }

	// Functions

};

