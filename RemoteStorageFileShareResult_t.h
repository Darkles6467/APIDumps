#pragma once

#include "BaseDeclarations.h"
struct RemoteStorageFileShareResult_t
{
	char __padding[0x118L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "RemoteStorageFileShareResult_t.m_eResult"); }
	unsigned __int64& m_hFileField() { return *GetNativePointerField<unsigned __int64*>(this, "RemoteStorageFileShareResult_t.m_hFile"); }
	FieldArray<char, 260> m_rgchFilenameField() { return {this, "RemoteStorageFileShareResult_t.m_rgchFilename"}; }
};

