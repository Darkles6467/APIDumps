#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientTravelInternal_Parms
{
	char __padding[0x28L];
	FString& URLField() { return *GetNativePointerField<FString*>(this, "PlayerController_eventClientTravelInternal_Parms.URL"); }
	TEnumAsByte<enum ETravelType>& TravelTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETravelType>*>(this, "PlayerController_eventClientTravelInternal_Parms.TravelType"); }
	bool& bSeamlessField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientTravelInternal_Parms.bSeamless"); }
	FGuid& MapPackageGuidField() { return *GetNativePointerField<FGuid*>(this, "PlayerController_eventClientTravelInternal_Parms.MapPackageGuid"); }
};

