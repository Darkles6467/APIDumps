#pragma once

#include "BaseDeclarations.h"
struct FTribeGovernment
{
	char __padding[0x14L];
	int& TribeGovern_PINCodeField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_PINCode"); }
	int& TribeGovern_DinoOwnershipField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoOwnership"); }
	int& TribeGovern_StructureOwnershipField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_StructureOwnership"); }
	int& TribeGovern_DinoTamingField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoTaming"); }
	int& TribeGovern_DinoUnclaimAdminOnlyField() { return *GetNativePointerField<int*>(this, "FTribeGovernment.TribeGovern_DinoUnclaimAdminOnly"); }

	// Functions

	void ZeroInit() { NativeCall<void>(this, "FTribeGovernment.ZeroInit"); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeGovernment.ValidateSettings"); }
};

