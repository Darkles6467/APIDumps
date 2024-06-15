#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbySearchEOS
{
	char __padding[0x28L];
	struct EOS_LobbySearchHandle * SearchHandleField() { return GetNativePointerField<struct EOS_LobbySearchHandle *>(this, "FOnlineLobbySearchEOS.SearchHandle"); }
	TArray<FOnlineLobbyEOS>& SearchResultsField() { return *GetNativePointerField<TArray<FOnlineLobbyEOS>*>(this, "FOnlineLobbySearchEOS.SearchResults"); }
	TArray<std::shared_ptr<EOS_LobbyDetailsHandle>>& ResultHandlesField() { return *GetNativePointerField<TArray<std::shared_ptr<EOS_LobbyDetailsHandle>>*>(this, "FOnlineLobbySearchEOS.ResultHandles"); }
};

