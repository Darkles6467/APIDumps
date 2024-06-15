#pragma once

#include "BaseDeclarations.h"
struct INavigationQueryFilterInterface
{
	char __padding[0x8L];

	// Functions

};

struct FRecastQueryFilter : INavigationQueryFilterInterface
{
	char __padding[0x218L];

	// Functions

	void GetAllAreaCosts(float * CostArray, float * FixedCostArray, const int Count) { NativeCall<void, float *, float *, const int>(this, "FRecastQueryFilter.GetAllAreaCosts", CostArray, FixedCostArray, Count); }
	unsigned __int16 GetExcludeFlags() { return NativeCall<unsigned __int16>(this, "FRecastQueryFilter.GetExcludeFlags"); }
	unsigned __int16 GetIncludeFlags() { return NativeCall<unsigned __int16>(this, "FRecastQueryFilter.GetIncludeFlags"); }
	bool IsBacktrackingEnabled() { return NativeCall<bool>(this, "FRecastQueryFilter.IsBacktrackingEnabled"); }
	bool IsEqual(INavigationQueryFilterInterface * Other) { return NativeCall<bool, INavigationQueryFilterInterface *>(this, "FRecastQueryFilter.IsEqual", Other); }
	void Reset() { NativeCall<void>(this, "FRecastQueryFilter.Reset"); }
	void SetAllAreaCosts(const float * CostArray, const int Count) { NativeCall<void, const float *, const int>(this, "FRecastQueryFilter.SetAllAreaCosts", CostArray, Count); }
	void SetAreaCost(char AreaType, float Cost) { NativeCall<void, char, float>(this, "FRecastQueryFilter.SetAreaCost", AreaType, Cost); }
	void SetBacktrackingEnabled(const bool bBacktracking) { NativeCall<void, const bool>(this, "FRecastQueryFilter.SetBacktrackingEnabled", bBacktracking); }
	void SetExcludeFlags(unsigned __int16 Flags) { NativeCall<void, unsigned __int16>(this, "FRecastQueryFilter.SetExcludeFlags", Flags); }
	void SetExcludedArea(char AreaType) { NativeCall<void, char>(this, "FRecastQueryFilter.SetExcludedArea", AreaType); }
	void SetFixedAreaEnteringCost(char AreaType, float Cost) { NativeCall<void, char, float>(this, "FRecastQueryFilter.SetFixedAreaEnteringCost", AreaType, Cost); }
	void SetIncludeFlags(unsigned __int16 Flags) { NativeCall<void, unsigned __int16>(this, "FRecastQueryFilter.SetIncludeFlags", Flags); }
	void SetIsVirtual(bool bIsVirtual) { NativeCall<void, bool>(this, "FRecastQueryFilter.SetIsVirtual", bIsVirtual); }
};

