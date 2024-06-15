#pragma once

#include "BaseDeclarations.h"
struct FUniformBufferDecl
{
	char __padding[0x40L];
	FString& ConstantBufferMembersField() { return *GetNativePointerField<FString*>(this, "FUniformBufferDecl.ConstantBufferMembers"); }
	FString& ResourceMembersField() { return *GetNativePointerField<FString*>(this, "FUniformBufferDecl.ResourceMembers"); }
	FString& StructMembersField() { return *GetNativePointerField<FString*>(this, "FUniformBufferDecl.StructMembers"); }
	FString& InitializerField() { return *GetNativePointerField<FString*>(this, "FUniformBufferDecl.Initializer"); }
};

