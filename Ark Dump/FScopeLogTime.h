#pragma once

#include "BaseDeclarations.h"
struct FScopeLogTime
{
	enum EScopeLogTimeUnits
	{
		ScopeLog_Milliseconds = 0x0,
		ScopeLog_Seconds = 0x1,
	};

	char __padding[0x28L];
	const long double& StartTimeField() { return *GetNativePointerField<const long double*>(this, "FScopeLogTime.StartTime"); }
	const FString& NameField() { return *GetNativePointerField<const FString*>(this, "FScopeLogTime.Name"); }
	TKeyValuePair<double,unsigned int> * CumulativeField() { return GetNativePointerField<TKeyValuePair<double,unsigned int> *>(this, "FScopeLogTime.Cumulative"); }
	FScopeLogTime::EScopeLogTimeUnits& UnitsField() { return *GetNativePointerField<FScopeLogTime::EScopeLogTimeUnits*>(this, "FScopeLogTime.Units"); }
};

