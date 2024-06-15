#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavigationQueryFilter : UObject
{
	char __padding[0x18L];
	TArray<FNavigationFilterArea>& AreasField() { return *GetNativePointerField<TArray<FNavigationFilterArea>*>(this, "UNavigationQueryFilter.Areas"); }
	FNavigationFilterFlags& IncludeFlagsField() { return *GetNativePointerField<FNavigationFilterFlags*>(this, "UNavigationQueryFilter.IncludeFlags"); }
	FNavigationFilterFlags& ExcludeFlagsField() { return *GetNativePointerField<FNavigationFilterFlags*>(this, "UNavigationQueryFilter.ExcludeFlags"); }

	// Functions

	void InitializeFilter(ANavigationData * NavData, FNavigationQueryFilter * Filter) { NativeCall<void, ANavigationData *, FNavigationQueryFilter *>(this, "UNavigationQueryFilter.InitializeFilter", NavData, Filter); }
};

struct URecastFilter_UseDefaultArea : UNavigationQueryFilter
{

	// Functions

	void InitializeFilter(ANavigationData * NavData, FNavigationQueryFilter * Filter) { NativeCall<void, ANavigationData *, FNavigationQueryFilter *>(this, "URecastFilter_UseDefaultArea.InitializeFilter", NavData, Filter); }
};

