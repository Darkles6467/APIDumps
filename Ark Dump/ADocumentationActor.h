#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADocumentationActor : AActor
{
	char __padding[0x8L];
	EDocumentationActorType::Type& LinkTypeField() { return *GetNativePointerField<EDocumentationActorType::Type*>(this, "ADocumentationActor.LinkType"); }

	// Functions

};

