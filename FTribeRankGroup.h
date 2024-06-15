#pragma once

#include "BaseDeclarations.h"
struct FTribeRankGroup
{
	char __padding[0x28L];
	FString& RankGroupNameField() { return *GetNativePointerField<FString*>(this, "FTribeRankGroup.RankGroupName"); }
	char& RankGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.RankGroupRank"); }
	char& InventoryRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.InventoryRank"); }
	char& StructureActivationRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.StructureActivationRank"); }
	char& NewStructureActivationRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NewStructureActivationRank"); }
	char& NewStructureInventoryRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NewStructureInventoryRank"); }
	char& PetOrderRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.PetOrderRank"); }
	char& PetRidingRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.PetRidingRank"); }
	char& InviteToGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.InviteToGroupRank"); }
	char& MaxPromotionGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxPromotionGroupRank"); }
	char& MaxDemotionGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxDemotionGroupRank"); }
	char& MaxBanishmentGroupRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.MaxBanishmentGroupRank"); }
	char& NumInvitesRemainingField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.NumInvitesRemaining"); }
	char& TeleportMembersRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.TeleportMembersRank"); }
	char& TeleportDinosRankField() { return *GetNativePointerField<char*>(this, "FTribeRankGroup.TeleportDinosRank"); }

	// Functions

	FTribeRankGroup * operator=(const FTribeRankGroup * __that) { return NativeCall<FTribeRankGroup *, const FTribeRankGroup *>(this, "FTribeRankGroup.operator=", __that); }
	void MakeNew() { NativeCall<void>(this, "FTribeRankGroup.MakeNew"); }
	void ValidateSettings() { NativeCall<void>(this, "FTribeRankGroup.ValidateSettings"); }
	bool operator==(const FTribeRankGroup * Other) { return NativeCall<bool, const FTribeRankGroup *>(this, "FTribeRankGroup.operator==", Other); }
};

