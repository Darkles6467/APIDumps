#pragma once

#include "BaseDeclarations.h"
#include "UProperty.h"
#include "UField.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNumericProperty : UProperty
{

	// Functions

	FString * GetNumericPropertyValueToString(FString * result) { return NativeCall<FString *, FString *>(this, "UNumericProperty.GetNumericPropertyValueToString", result); }
	void ExportTextItem(FString * ValueStr, const void * PropertyValue, const void * DefaultValue, UObject * Parent, int PortFlags, UObject * ExportRootScope) { NativeCall<void, FString *, const void *, const void *, UObject *, int, UObject *>(this, "UNumericProperty.ExportTextItem", ValueStr, PropertyValue, DefaultValue, Parent, PortFlags, ExportRootScope); }
	const wchar_t * ImportText_Internal(const wchar_t * Buffer, void * Data, int PortFlags, UObject * Parent, FOutputDevice * ErrorText) { return NativeCall<const wchar_t *, const wchar_t *, void *, int, UObject *, FOutputDevice *>(this, "UNumericProperty.ImportText_Internal", Buffer, Data, PortFlags, Parent, ErrorText); }
};

