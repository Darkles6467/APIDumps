#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FColor.h"

struct UPaintingTexture : UObject
{
	char __padding[0x38L];
	unsigned int& RevisionField() { return *GetNativePointerField<unsigned int*>(this, "UPaintingTexture.Revision"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UPaintingTexture.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UPaintingTexture.SizeY"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UPaintingTexture.ReleaseResourcesFence"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "UPaintingTexture.bIsDirty"); }
	bool& bNeedsSavingField() { return *GetNativePointerField<bool*>(this, "UPaintingTexture.bNeedsSaving"); }
	TArray<unsigned char>& ColorBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPaintingTexture.ColorBuffer"); }

	// Functions

	int GetSizeY() { return NativeCall<int>(this, "UPaintingTexture.GetSizeY"); }
	void MarkForSaving() { NativeCall<void>(this, "UPaintingTexture.MarkForSaving"); }
	bool NeedsSaving() { return NativeCall<bool>(this, "UPaintingTexture.NeedsSaving"); }
	void BeginDestroy() { NativeCall<void>(this, "UPaintingTexture.BeginDestroy"); }
	void Clear() { NativeCall<void>(this, "UPaintingTexture.Clear"); }
	void CreateTexture() { NativeCall<void>(this, "UPaintingTexture.CreateTexture"); }
	void DestroyTexture() { NativeCall<void>(this, "UPaintingTexture.DestroyTexture"); }
	void Init(int InSizeX, int InSizeY) { NativeCall<void, int, int>(this, "UPaintingTexture.Init", InSizeX, InSizeY); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UPaintingTexture.IsReadyForFinishDestroy"); }
	bool LoadFromFile(FObjectReader * Reader) { return NativeCall<bool, FObjectReader *>(this, "UPaintingTexture.LoadFromFile", Reader); }
	void SaveToFile(FObjectWriter * Writer) { NativeCall<void, FObjectWriter *>(this, "UPaintingTexture.SaveToFile", Writer); }
	bool Set(char ColorCode, int X, int Y) { return NativeCall<bool, char, int, int>(this, "UPaintingTexture.Set", ColorCode, X, Y); }
	void UpdateTexture(TArray<FColor> * ColorTable, bool bMultiplicativeBlending) { NativeCall<void, TArray<FColor> *, bool>(this, "UPaintingTexture.UpdateTexture", ColorTable, bMultiplicativeBlending); }
};

