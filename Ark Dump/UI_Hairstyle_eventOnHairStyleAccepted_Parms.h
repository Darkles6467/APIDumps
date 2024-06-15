#pragma once

#include "BaseDeclarations.h"
struct UI_Hairstyle_eventOnHairStyleAccepted_Parms
{
	char __padding[0x20L];
	int& NewHeadHairIndexField() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.NewHeadHairIndex"); }
	int& NewFacialHairIndexField() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.NewFacialHairIndex"); }
	float& NewHeadHairPercentField() { return *GetNativePointerField<float*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.NewHeadHairPercent"); }
	float& NewFacialHairPercentField() { return *GetNativePointerField<float*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.NewFacialHairPercent"); }
	int& HeadHairDyeID1Field() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.HeadHairDyeID1"); }
	int& HeadHairDyeID2Field() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.HeadHairDyeID2"); }
	int& FacialHairDyeID1Field() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.FacialHairDyeID1"); }
	int& FacialHairDyeID2Field() { return *GetNativePointerField<int*>(this, "UI_Hairstyle_eventOnHairStyleAccepted_Parms.FacialHairDyeID2"); }
};

