#pragma once

#include "BaseDeclarations.h"
struct FUniformBufferStruct
{
	char __padding[0x78L];
	const wchar_t * StructTypeNameField() { return GetNativePointerField<const wchar_t *>(this, "FUniformBufferStruct.StructTypeName"); }
	const wchar_t * ShaderVariableNameField() { return GetNativePointerField<const wchar_t *>(this, "FUniformBufferStruct.ShaderVariableName"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FUniformBufferStruct.Size"); }
	TArray<FUniformBufferStruct::FMember>& MembersField() { return *GetNativePointerField<TArray<FUniformBufferStruct::FMember>*>(this, "FUniformBufferStruct.Members"); }
	TLinkedList<FUniformBufferStruct *>& GlobalListLinkField() { return *GetNativePointerField<TLinkedList<FUniformBufferStruct *>*>(this, "FUniformBufferStruct.GlobalListLink"); }

	// Functions

	static TLinkedList<FUniformBufferStruct *> ** GetStructList() { return NativeCall<TLinkedList<FUniformBufferStruct *> **>(nullptr, "FUniformBufferStruct.GetStructList"); }
};

