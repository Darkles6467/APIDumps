#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FCollisionResponseTemplate.h"
#include "FCustomProfile.h"

struct UCollisionProfile : UObject
{
	char __padding[0x120L];
	TArray<FCollisionResponseTemplate>& ProfilesField() { return *GetNativePointerField<TArray<FCollisionResponseTemplate>*>(this, "UCollisionProfile.Profiles"); }
	TArray<FCustomChannelSetup>& DefaultChannelResponsesField() { return *GetNativePointerField<TArray<FCustomChannelSetup>*>(this, "UCollisionProfile.DefaultChannelResponses"); }
	TArray<FCustomProfile>& EditProfilesField() { return *GetNativePointerField<TArray<FCustomProfile>*>(this, "UCollisionProfile.EditProfiles"); }
	TArray<FRedirector>& ProfileRedirectsField() { return *GetNativePointerField<TArray<FRedirector>*>(this, "UCollisionProfile.ProfileRedirects"); }
	TArray<FRedirector>& CollisionChannelRedirectsField() { return *GetNativePointerField<TArray<FRedirector>*>(this, "UCollisionProfile.CollisionChannelRedirects"); }
	TArray<FName>& ChannelDisplayNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UCollisionProfile.ChannelDisplayNames"); }
	TArray<enum ECollisionChannel>& ObjectTypeMappingField() { return *GetNativePointerField<TArray<enum ECollisionChannel>*>(this, "UCollisionProfile.ObjectTypeMapping"); }
	TArray<enum ECollisionChannel>& TraceTypeMappingField() { return *GetNativePointerField<TArray<enum ECollisionChannel>*>(this, "UCollisionProfile.TraceTypeMapping"); }

	// Functions

	bool CheckRedirect(FName ProfileName, FBodyInstance * BodyInstance, FCollisionResponseTemplate * Template) { return NativeCall<bool, FName, FBodyInstance *, FCollisionResponseTemplate *>(this, "UCollisionProfile.CheckRedirect", ProfileName, BodyInstance, Template); }
	ECollisionChannel ConvertToCollisionChannel(bool TraceType, int Index) { return NativeCall<ECollisionChannel, bool, int>(this, "UCollisionProfile.ConvertToCollisionChannel", TraceType, Index); }
	EObjectTypeQuery ConvertToObjectType(ECollisionChannel CollisionChannel) { return NativeCall<EObjectTypeQuery, ECollisionChannel>(this, "UCollisionProfile.ConvertToObjectType", CollisionChannel); }
	void FillProfileData(TArray<FCollisionResponseTemplate> * ProfileList, const UEnum * CollisionChannelEnum, const FString * KeyName, TArray<FCustomProfile> * EditProfileList) { NativeCall<void, TArray<FCollisionResponseTemplate> *, const UEnum *, const FString *, TArray<FCustomProfile> *>(this, "UCollisionProfile.FillProfileData", ProfileList, CollisionChannelEnum, KeyName, EditProfileList); }
	static UCollisionProfile * Get() { return NativeCall<UCollisionProfile *>(nullptr, "UCollisionProfile.Get"); }
	bool GetProfileTemplate(FName ProfileName, FCollisionResponseTemplate * ProfileData) { return NativeCall<bool, FName, FCollisionResponseTemplate *>(this, "UCollisionProfile.GetProfileTemplate", ProfileName, ProfileData); }
	void LoadProfileConfig(bool bForceInit) { NativeCall<void, bool>(this, "UCollisionProfile.LoadProfileConfig", bForceInit); }
	bool ReadConfig(FName ProfileName, FBodyInstance * BodyInstance) { return NativeCall<bool, FName, FBodyInstance *>(this, "UCollisionProfile.ReadConfig", ProfileName, BodyInstance); }
	FName * ReturnChannelNameFromContainerIndex(FName * result, int ContainerIndex) { return NativeCall<FName *, FName *, int>(this, "UCollisionProfile.ReturnChannelNameFromContainerIndex", result, ContainerIndex); }
	int ReturnContainerIndexFromChannelName(FName * DisplayName) { return NativeCall<int, FName *>(this, "UCollisionProfile.ReturnContainerIndexFromChannelName", DisplayName); }
};

