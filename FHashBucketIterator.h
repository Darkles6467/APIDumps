#pragma once

#include "BaseDeclarations.h"
struct FHashBucketIterator
{
	char __padding[0x40L];
	FHashBucket * BucketField() { return GetNativePointerField<FHashBucket *>(this, "FHashBucketIterator.Bucket"); }
	bool& bItemsField() { return *GetNativePointerField<bool*>(this, "FHashBucketIterator.bItems"); }
	bool& bReachedEndNoItemsField() { return *GetNativePointerField<bool*>(this, "FHashBucketIterator.bReachedEndNoItems"); }
	bool& bSecondItemField() { return *GetNativePointerField<bool*>(this, "FHashBucketIterator.bSecondItem"); }
};

