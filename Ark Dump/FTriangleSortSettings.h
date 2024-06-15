#pragma once

#include "BaseDeclarations.h"
struct FTriangleSortSettings
{
	char __padding[0xcL];
	TEnumAsByte<enum ETriangleSortOption>& TriangleSortingField() { return *GetNativePointerField<TEnumAsByte<enum ETriangleSortOption>*>(this, "FTriangleSortSettings.TriangleSorting"); }
	TEnumAsByte<enum ETriangleSortAxis>& CustomLeftRightAxisField() { return *GetNativePointerField<TEnumAsByte<enum ETriangleSortAxis>*>(this, "FTriangleSortSettings.CustomLeftRightAxis"); }
	FName& CustomLeftRightBoneNameField() { return *GetNativePointerField<FName*>(this, "FTriangleSortSettings.CustomLeftRightBoneName"); }

	// Functions

};

