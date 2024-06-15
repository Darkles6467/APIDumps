#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGeneralProjectSettings : UObject
{
	char __padding[0xa0L];
	FString& CompanyNameField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.CompanyName"); }
	FString& CopyrightNoticeField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.CopyrightNotice"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.Description"); }
	FString& HomepageField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.Homepage"); }
	FString& LicensingTermsField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.LicensingTerms"); }
	FString& PrivacyPolicyField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.PrivacyPolicy"); }
	FGuid& ProjectIDField() { return *GetNativePointerField<FGuid*>(this, "UGeneralProjectSettings.ProjectID"); }
	FString& ProjectNameField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.ProjectName"); }
	FString& ProjectVersionField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.ProjectVersion"); }
	FString& SupportContactField() { return *GetNativePointerField<FString*>(this, "UGeneralProjectSettings.SupportContact"); }

	// Functions

};

