#pragma once

#include "BaseDeclarations.h"
struct MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms
{
	char __padding[0x2e0L];
	FHUDElement& BackgroundField() { return *GetNativePointerField<FHUDElement*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.Background"); }
	FHUDElement& IconField() { return *GetNativePointerField<FHUDElement*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.Icon"); }
	float& MinAlphaField() { return *GetNativePointerField<float*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.MinAlpha"); }
	float& MaxAlphaField() { return *GetNativePointerField<float*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.MaxAlpha"); }
	float& AlphaPowerField() { return *GetNativePointerField<float*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.AlphaPower"); }
	FLinearColor& RightColorField() { return *GetNativePointerField<FLinearColor*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.RightColor"); }
	FLinearColor& WrongColorField() { return *GetNativePointerField<FLinearColor*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.WrongColor"); }
	bool& bClearLocationsFirstField() { return *GetNativePointerField<bool*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.bClearLocationsFirst"); }
	TArray<FVector>& LocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "MissionType_ModularMissionBase_eventMultiActivateWarmerColderHUD_Parms.Locations"); }
};

