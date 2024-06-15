#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDragDropOperation : UObject
{
	char __padding[0x50L];
	FString& TagField() { return *GetNativePointerField<FString*>(this, "UDragDropOperation.Tag"); }

	// Functions

	void DragCancelled_Implementation(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.DragCancelled_Implementation", PointerEvent); }
	void Dragged_Implementation(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.Dragged_Implementation", PointerEvent); }
	void Drop_Implementation(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.Drop_Implementation", PointerEvent); }
	void DragCancelled(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.DragCancelled", PointerEvent); }
	void Dragged(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.Dragged", PointerEvent); }
	void Drop(const FPointerEvent * PointerEvent) { NativeCall<void, const FPointerEvent *>(this, "UDragDropOperation.Drop", PointerEvent); }
};

