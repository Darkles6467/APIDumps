#pragma once

#include "BaseDeclarations.h"
struct FStreamable
{
	char __padding[0x28L];
	FWeakObjectPtr& WeakTargetField() { return *GetNativePointerField<FWeakObjectPtr*>(this, "FStreamable.WeakTarget"); }
	bool& bAsyncLoadRequestOutstandingField() { return *GetNativePointerField<bool*>(this, "FStreamable.bAsyncLoadRequestOutstanding"); }
	bool& bAsyncUnloadRequestOutstandingField() { return *GetNativePointerField<bool*>(this, "FStreamable.bAsyncUnloadRequestOutstanding"); }
	bool& bLoadFailedField() { return *GetNativePointerField<bool*>(this, "FStreamable.bLoadFailed"); }
	TArray<TSharedRef<FStreamableRequest,0>>& RelatedRequestsField() { return *GetNativePointerField<TArray<TSharedRef<FStreamableRequest,0>>*>(this, "FStreamable.RelatedRequests"); }
};

