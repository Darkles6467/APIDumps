#pragma once

#include "BaseDeclarations.h"
struct RemoteStorageSubscribePublishedFileResult_t
{
	char __padding[0x10L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "RemoteStorageSubscribePublishedFileResult_t.m_eResult"); }
	unsigned __int64& m_nPublishedFileIdField() { return *GetNativePointerField<unsigned __int64*>(this, "RemoteStorageSubscribePublishedFileResult_t.m_nPublishedFileId"); }
};

