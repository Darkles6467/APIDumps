#pragma once

#include "BaseDeclarations.h"
struct FWheelSimulator
{
	char __padding[0x28L];
	int& WheelIndexField() { return *GetNativePointerField<int*>(this, "FWheelSimulator.WheelIndex"); }
	FBoneReference& BoneReferenceField() { return *GetNativePointerField<FBoneReference*>(this, "FWheelSimulator.BoneReference"); }
	FRotator& RotOffsetField() { return *GetNativePointerField<FRotator*>(this, "FWheelSimulator.RotOffset"); }
	FVector& LocOffsetField() { return *GetNativePointerField<FVector*>(this, "FWheelSimulator.LocOffset"); }
};

