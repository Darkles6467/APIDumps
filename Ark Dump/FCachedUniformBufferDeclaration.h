#pragma once

#include "BaseDeclarations.h"
struct FCachedUniformBufferDeclaration
{
	char __padding[0x1c0L];
	FieldArray<FString, 28> DeclarationField() { return {this, "FCachedUniformBufferDeclaration.Declaration"}; }
};

