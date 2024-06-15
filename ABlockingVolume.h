#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ABlockingVolume : AVolume
{
	char __padding[0x8L];
	bool& bAddToBlockingVolumeListField() { return *GetNativePointerField<bool*>(this, "ABlockingVolume.bAddToBlockingVolumeList"); }

	// Functions

	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ABlockingVolume.EndPlay", EndPlayReason); }
	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ABlockingVolume.OnInterpToggle", bEnable); }
	void PreLoadSaveGame() { NativeCall<void>(this, "ABlockingVolume.PreLoadSaveGame"); }
};

