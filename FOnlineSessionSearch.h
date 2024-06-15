#pragma once

#include "BaseDeclarations.h"
struct FOnlineSessionSearch
{
	char __padding[0x48L];
	EOnlineAsyncTaskState::Type& SearchStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FOnlineSessionSearch.SearchState"); }
	int& MaxSearchResultsField() { return *GetNativePointerField<int*>(this, "FOnlineSessionSearch.MaxSearchResults"); }
	FOnlineSearchSettings& QuerySettingsField() { return *GetNativePointerField<FOnlineSearchSettings*>(this, "FOnlineSessionSearch.QuerySettings"); }
	bool& bIsLanQueryField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSearch.bIsLanQuery"); }
	int& PingBucketSizeField() { return *GetNativePointerField<int*>(this, "FOnlineSessionSearch.PingBucketSize"); }
	float& TimeoutInSecondsField() { return *GetNativePointerField<float*>(this, "FOnlineSessionSearch.TimeoutInSeconds"); }

	// Functions

};

