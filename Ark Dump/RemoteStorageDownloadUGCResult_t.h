#pragma once

#include "BaseDeclarations.h"
struct RemoteStorageDownloadUGCResult_t
{
	char __padding[0x128L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "RemoteStorageDownloadUGCResult_t.m_eResult"); }
	unsigned __int64& m_hFileField() { return *GetNativePointerField<unsigned __int64*>(this, "RemoteStorageDownloadUGCResult_t.m_hFile"); }
	unsigned int& m_nAppIDField() { return *GetNativePointerField<unsigned int*>(this, "RemoteStorageDownloadUGCResult_t.m_nAppID"); }
	int& m_nSizeInBytesField() { return *GetNativePointerField<int*>(this, "RemoteStorageDownloadUGCResult_t.m_nSizeInBytes"); }
	FieldArray<char, 260> m_pchFileNameField() { return {this, "RemoteStorageDownloadUGCResult_t.m_pchFileName"}; }
	unsigned __int64& m_ulSteamIDOwnerField() { return *GetNativePointerField<unsigned __int64*>(this, "RemoteStorageDownloadUGCResult_t.m_ulSteamIDOwner"); }
};

