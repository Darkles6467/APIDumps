#pragma once

#include "BaseDeclarations.h"
struct FSortedTexture
{
	char __padding[0x48L];
	int& OrigSizeXField() { return *GetNativePointerField<int*>(this, "FSortedTexture.OrigSizeX"); }
	int& OrigSizeYField() { return *GetNativePointerField<int*>(this, "FSortedTexture.OrigSizeY"); }
	int& CookedSizeXField() { return *GetNativePointerField<int*>(this, "FSortedTexture.CookedSizeX"); }
	int& CookedSizeYField() { return *GetNativePointerField<int*>(this, "FSortedTexture.CookedSizeY"); }
	int& CurSizeXField() { return *GetNativePointerField<int*>(this, "FSortedTexture.CurSizeX"); }
	int& CurSizeYField() { return *GetNativePointerField<int*>(this, "FSortedTexture.CurSizeY"); }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "FSortedTexture.LODBias"); }
	int& MaxSizeField() { return *GetNativePointerField<int*>(this, "FSortedTexture.MaxSize"); }
	int& CurrentSizeField() { return *GetNativePointerField<int*>(this, "FSortedTexture.CurrentSize"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FSortedTexture.Name"); }
	int& LODGroupField() { return *GetNativePointerField<int*>(this, "FSortedTexture.LODGroup"); }
	bool& bIsStreamingField() { return *GetNativePointerField<bool*>(this, "FSortedTexture.bIsStreaming"); }
	int& UsageCountField() { return *GetNativePointerField<int*>(this, "FSortedTexture.UsageCount"); }

	// Functions

	FSortedTexture * operator=(const FSortedTexture * __that) { return NativeCall<FSortedTexture *, const FSortedTexture *>(this, "FSortedTexture.operator=", __that); }
};

