#pragma once

#include "BaseDeclarations.h"
#include "FGCReferenceInfo.h"

struct FGCReferenceTokenStream
{
	enum EGCArrayInfoPlaceholder
	{
		E_GCSkipIndexPlaceholder = 0xdeadbabe,
	};

	char __padding[0x10L];
	TArray<unsigned int>& TokensField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FGCReferenceTokenStream.Tokens"); }

	// Functions

	void EmitStride(unsigned int Stride) { NativeCall<void, unsigned int>(this, "FGCReferenceTokenStream.EmitStride", Stride); }
	void EmitPointer(const void * Ptr) { NativeCall<void, const void *>(this, "FGCReferenceTokenStream.EmitPointer", Ptr); }
	int EmitReferenceInfo(FGCReferenceInfo ReferenceInfo) { return NativeCall<int, FGCReferenceInfo>(this, "FGCReferenceTokenStream.EmitReferenceInfo", ReferenceInfo); }
	unsigned int EmitSkipIndexPlaceholder() { return NativeCall<unsigned int>(this, "FGCReferenceTokenStream.EmitSkipIndexPlaceholder"); }
	void PrependStream(const FGCReferenceTokenStream * Other) { NativeCall<void, const FGCReferenceTokenStream *>(this, "FGCReferenceTokenStream.PrependStream", Other); }
	void ReplaceOrAddAddReferencedObjectsCall(void (__fastcall *)(UObject *, FReferenceCollector *) void) { NativeCall<void, void (__fastcall *)(UObject *, FReferenceCollector *)>(this, "FGCReferenceTokenStream.ReplaceOrAddAddReferencedObjectsCall", void); }
};

