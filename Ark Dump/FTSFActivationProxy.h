#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct ITfInputProcessorProfileActivationSink : IUnknown
{
};

struct FTSFActivationProxy : ITfInputProcessorProfileActivationSink
{
	char __padding[0x20L];
	unsigned int& TSFProfileCookieField() { return *GetNativePointerField<unsigned int*>(this, "FTSFActivationProxy.TSFProfileCookie"); }
	unsigned int& TSFLanguageCookieField() { return *GetNativePointerField<unsigned int*>(this, "FTSFActivationProxy.TSFLanguageCookie"); }
	FWindowsTextInputMethodSystem * OwnerField() { return GetNativePointerField<FWindowsTextInputMethodSystem *>(this, "FTSFActivationProxy.Owner"); }
	unsigned int& ReferenceCountField() { return *GetNativePointerField<unsigned int*>(this, "FTSFActivationProxy.ReferenceCount"); }
};

