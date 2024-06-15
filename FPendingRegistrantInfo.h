#pragma once

#include "BaseDeclarations.h"
struct FPendingRegistrantInfo
{
	char __padding[0x10L];
	const wchar_t * NameField() { return GetNativePointerField<const wchar_t *>(this, "FPendingRegistrantInfo.Name"); }
	const wchar_t * PackageNameField() { return GetNativePointerField<const wchar_t *>(this, "FPendingRegistrantInfo.PackageName"); }

	// Functions

};

