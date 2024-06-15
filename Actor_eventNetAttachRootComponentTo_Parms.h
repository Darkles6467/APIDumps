#pragma once

#include "BaseDeclarations.h"
struct Actor_eventNetAttachRootComponentTo_Parms
{
	char __padding[0x28L];
	FName& InSocketNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventNetAttachRootComponentTo_Parms.InSocketName"); }
	FVector& RelativeLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventNetAttachRootComponentTo_Parms.RelativeLocation"); }
	FRotator& RelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "Actor_eventNetAttachRootComponentTo_Parms.RelativeRotation"); }
};

