#pragma once

#include "BaseDeclarations.h"
struct InternetCookieHistory
{
	char __padding[0x10L];
	int& fAcceptedField() { return *GetNativePointerField<int*>(this, "InternetCookieHistory.fAccepted"); }
	int& fLeashedField() { return *GetNativePointerField<int*>(this, "InternetCookieHistory.fLeashed"); }
	int& fDowngradedField() { return *GetNativePointerField<int*>(this, "InternetCookieHistory.fDowngraded"); }
	int& fRejectedField() { return *GetNativePointerField<int*>(this, "InternetCookieHistory.fRejected"); }
};

