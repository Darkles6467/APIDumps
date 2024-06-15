#pragma once

#include "BaseDeclarations.h"
struct FCollisionResponse
{
	char __padding[0x30L];
	FCollisionResponseContainer& ResponseToChannelsField() { return *GetNativePointerField<FCollisionResponseContainer*>(this, "FCollisionResponse.ResponseToChannels"); }
	TArray<FResponseChannel>& ResponseArrayField() { return *GetNativePointerField<TArray<FResponseChannel>*>(this, "FCollisionResponse.ResponseArray"); }

	// Functions

	bool AddReponseToArray(ECollisionChannel Channel, ECollisionResponse Response) { return NativeCall<bool, ECollisionChannel, ECollisionResponse>(this, "FCollisionResponse.AddReponseToArray", Channel, Response); }
	ECollisionResponse GetResponse(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "FCollisionResponse.GetResponse", Channel); }
	bool RemoveReponseFromArray(ECollisionChannel Channel) { return NativeCall<bool, ECollisionChannel>(this, "FCollisionResponse.RemoveReponseFromArray", Channel); }
	void SetCollisionResponseContainer(const FCollisionResponseContainer * InResponseToChannels) { NativeCall<void, const FCollisionResponseContainer *>(this, "FCollisionResponse.SetCollisionResponseContainer", InResponseToChannels); }
	void UpdateArrayFromResponseContainer() { NativeCall<void>(this, "FCollisionResponse.UpdateArrayFromResponseContainer"); }
	void UpdateResponseContainerFromArray() { NativeCall<void>(this, "FCollisionResponse.UpdateResponseContainerFromArray"); }
};

