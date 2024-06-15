#pragma once

#include "BaseDeclarations.h"
struct IOnlineIdentity
{
	enum EPrivilegeResults
	{
		NoFailures = 0x0,
		RequiredPatchAvailable = 0x1,
		RequiredSystemUpdate = 0x2,
		AgeRestrictionFailure = 0x4,
		AccountTypeFailure = 0x8,
		UserNotFound = 0x10,
		ChatRestriction = 0x20,
		UGCRestriction = 0x40,
		GenericFailure = 0x80,
	};

	char __padding[0xa8L];

	// Functions

};

