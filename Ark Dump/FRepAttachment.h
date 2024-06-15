#pragma once

#include "BaseDeclarations.h"
struct FRepAttachment
{
	char __padding[0x40L];
	FVector_NetQuantize100& LocationOffsetField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FRepAttachment.LocationOffset"); }
	FVector_NetQuantize100& RelativeScale3DField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FRepAttachment.RelativeScale3D"); }
	FRotator& RotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FRepAttachment.RotationOffset"); }
	FName& AttachSocketField() { return *GetNativePointerField<FName*>(this, "FRepAttachment.AttachSocket"); }

	// Functions

};

