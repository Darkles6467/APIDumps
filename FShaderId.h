#pragma once

#include "BaseDeclarations.h"
struct FShaderId
{
	char __padding[0x70L];
	FSHAHash& MaterialShaderMapHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderId.MaterialShaderMapHash"); }
	FSHAHash& VFSourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderId.VFSourceHash"); }
	const FSerializationHistory * VFSerializationHistoryField() { return GetNativePointerField<const FSerializationHistory *>(this, "FShaderId.VFSerializationHistory"); }
	FSHAHash& SourceHashField() { return *GetNativePointerField<FSHAHash*>(this, "FShaderId.SourceHash"); }
	const FSerializationHistory * SerializationHistoryField() { return GetNativePointerField<const FSerializationHistory *>(this, "FShaderId.SerializationHistory"); }

	// Functions

};

