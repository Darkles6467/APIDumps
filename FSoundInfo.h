#pragma once

#include "BaseDeclarations.h"
struct FSoundInfo
{
	char __padding[0x30L];
	FString& PathNameField() { return *GetNativePointerField<FString*>(this, "FSoundInfo.PathName"); }
	float& DistanceField() { return *GetNativePointerField<float*>(this, "FSoundInfo.Distance"); }
	FName& ClassNameField() { return *GetNativePointerField<FName*>(this, "FSoundInfo.ClassName"); }
	TArray<FWaveInstance *>& WaveInstancesField() { return *GetNativePointerField<TArray<FWaveInstance *>*>(this, "FSoundInfo.WaveInstances"); }
};

