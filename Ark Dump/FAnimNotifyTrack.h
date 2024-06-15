#pragma once

#include "BaseDeclarations.h"
struct FAnimNotifyTrack
{
	char __padding[0x28L];
	FName& TrackNameField() { return *GetNativePointerField<FName*>(this, "FAnimNotifyTrack.TrackName"); }
	FLinearColor& TrackColorField() { return *GetNativePointerField<FLinearColor*>(this, "FAnimNotifyTrack.TrackColor"); }
	TArray<FAnimNotifyEvent *>& NotifiesField() { return *GetNativePointerField<TArray<FAnimNotifyEvent *>*>(this, "FAnimNotifyTrack.Notifies"); }

	// Functions

};

