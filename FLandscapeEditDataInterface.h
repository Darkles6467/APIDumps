#pragma once

#include "BaseDeclarations.h"
struct FLandscapeEditDataInterface
{
	char __padding[0x78L];
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "FLandscapeEditDataInterface.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "FLandscapeEditDataInterface.SubsectionSizeQuads"); }
	int& ComponentNumSubsectionsField() { return *GetNativePointerField<int*>(this, "FLandscapeEditDataInterface.ComponentNumSubsections"); }
	FVector& DrawScaleField() { return *GetNativePointerField<FVector*>(this, "FLandscapeEditDataInterface.DrawScale"); }
	ULandscapeInfo * LandscapeInfoField() { return GetNativePointerField<ULandscapeInfo *>(this, "FLandscapeEditDataInterface.LandscapeInfo"); }
};

