#pragma once

#include "BaseDeclarations.h"
struct FHUDNotification
{
	char __padding[0x60L];
	FString& NotificationStringField() { return *GetNativePointerField<FString*>(this, "FHUDNotification.NotificationString"); }
	float& RemainingDisplayTimeField() { return *GetNativePointerField<float*>(this, "FHUDNotification.RemainingDisplayTime"); }
	FColor& NotificationColorField() { return *GetNativePointerField<FColor*>(this, "FHUDNotification.NotificationColor"); }
	float& NotificationScaleField() { return *GetNativePointerField<float*>(this, "FHUDNotification.NotificationScale"); }
	float& LastYPosField() { return *GetNativePointerField<float*>(this, "FHUDNotification.LastYPos"); }
	long double& StartedTimeField() { return *GetNativePointerField<long double*>(this, "FHUDNotification.StartedTime"); }
	int& MessageTypeIDField() { return *GetNativePointerField<int*>(this, "FHUDNotification.MessageTypeID"); }
	int& ItemMsgTypeField() { return *GetNativePointerField<int*>(this, "FHUDNotification.ItemMsgType"); }
	FString& ItemNameField() { return *GetNativePointerField<FString*>(this, "FHUDNotification.ItemName"); }
	int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "FHUDNotification.ItemQuantity"); }
	float& ItemQuantityFloatField() { return *GetNativePointerField<float*>(this, "FHUDNotification.ItemQuantityFloat"); }

	// Functions

};

