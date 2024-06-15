#pragma once

#include "BaseDeclarations.h"
struct FInputChord
{
	enum RelationshipType
	{
		None = 0x0,
		Same = 0x1,
		Masked = 0x2,
		Masks = 0x3,
	};

	char __padding[0x20L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FInputChord.Key"); }

	// Functions

	FInputChord::RelationshipType GetRelationship(const FInputChord * OtherChord) { return NativeCall<FInputChord::RelationshipType, const FInputChord *>(this, "FInputChord.GetRelationship", OtherChord); }
};

