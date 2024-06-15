#pragma once

#include "BaseDeclarations.h"
struct IMessageSubscription
{
	char __padding[0x8L];
};

struct FMessageSubscription : IMessageSubscription
{
	char __padding[0x30L];
	bool& EnabledField() { return *GetNativePointerField<bool*>(this, "FMessageSubscription.Enabled"); }
	FName& MessageTypeField() { return *GetNativePointerField<FName*>(this, "FMessageSubscription.MessageType"); }
	TRange<enum EMessageScope::Type>& ScopeRangeField() { return *GetNativePointerField<TRange<enum EMessageScope::Type>*>(this, "FMessageSubscription.ScopeRange"); }

	// Functions

	void Disable() { NativeCall<void>(this, "FMessageSubscription.Disable"); }
	FName * GetMessageType(FName * result) { return NativeCall<FName *, FName *>(this, "FMessageSubscription.GetMessageType", result); }
};

