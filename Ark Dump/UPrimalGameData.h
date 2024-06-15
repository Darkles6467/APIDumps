#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoneModifierRange.h"
#include "FBoneModifier.h"
#include "FClassAddition.h"
#include "UPrimalDinoEntry.h"
#include "FColor.h"

struct UPrimalGameData : UObject
{
	char __padding[0x2070L];
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModName"); }
	FString& ModDescriptionField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ModDescription"); }
	FieldArray<FPrimalCharacterStatusValueDefinition, 12> StatusValueDefinitionsField() { return {this, "UPrimalGameData.StatusValueDefinitions"}; }
	FieldArray<FPrimalCharacterStatusStateDefinition, 14> StatusStateDefinitionsField() { return {this, "UPrimalGameData.StatusStateDefinitions"}; }
	FieldArray<FPrimalItemStatDefinition, 8> ItemStatDefinitionsField() { return {this, "UPrimalGameData.ItemStatDefinitions"}; }
	FieldArray<FPrimalItemDefinition, 9> ItemTypeDefinitionsField() { return {this, "UPrimalGameData.ItemTypeDefinitions"}; }
	FieldArray<FPrimalEquipmentDefinition, 11> EquipmentTypeDefinitionsField() { return {this, "UPrimalGameData.EquipmentTypeDefinitions"}; }
	TArray<FPrimalItemQuality>& ItemQualityDefinitionsField() { return *GetNativePointerField<TArray<FPrimalItemQuality>*>(this, "UPrimalGameData.ItemQualityDefinitions"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& EngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.EngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& AdditionalEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.AdditionalEngramBlueprintClasses"); }
	TArray<TSubclassOf<UPrimalEngramEntry>>& RemoveEngramBlueprintClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "UPrimalGameData.RemoveEngramBlueprintClasses"); }
	TArray<FStatusValueModifierDescription>& StatusValueModifierDescriptionsField() { return *GetNativePointerField<TArray<FStatusValueModifierDescription>*>(this, "UPrimalGameData.StatusValueModifierDescriptions"); }
	TArray<FString>& PlayerSpawnRegionsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PlayerSpawnRegions"); }
	TArray<FAppIDItem>& CoreAppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.CoreAppIDItems"); }
	TArray<FAppIDItem>& AppIDItemsField() { return *GetNativePointerField<TArray<FAppIDItem>*>(this, "UPrimalGameData.AppIDItems"); }
	TArray<UPrimalEngramEntry *>& EngramBlueprintEntriesField() { return *GetNativePointerField<TArray<UPrimalEngramEntry *>*>(this, "UPrimalGameData.EngramBlueprintEntries"); }
	TArray<UPrimalDinoEntry *>& DinoEntriesObjectsField() { return *GetNativePointerField<TArray<UPrimalDinoEntry *>*>(this, "UPrimalGameData.DinoEntriesObjects"); }
	TArray<UGenericDataListEntry *>& ExplorerNoteEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry *>*>(this, "UPrimalGameData.ExplorerNoteEntriesObjects"); }
	TArray<UGenericDataListEntry *>& HeadHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry *>*>(this, "UPrimalGameData.HeadHairStylesEntriesObjects"); }
	TArray<UGenericDataListEntry *>& FacialHairStylesEntriesObjectsField() { return *GetNativePointerField<TArray<UGenericDataListEntry *>*>(this, "UPrimalGameData.FacialHairStylesEntriesObjects"); }
	TArray<FRangedValues>& EngramPointPurchaseRangesField() { return *GetNativePointerField<TArray<FRangedValues>*>(this, "UPrimalGameData.EngramPointPurchaseRanges"); }
	TArray<FTutorialDefinition>& TutorialDefinitionsField() { return *GetNativePointerField<TArray<FTutorialDefinition>*>(this, "UPrimalGameData.TutorialDefinitions"); }
	TArray<TSubclassOf<UPrimalDinoEntry>>& DinoEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalDinoEntry>>*>(this, "UPrimalGameData.DinoEntries"); }
	TArray<TSubclassOf<UPrimalDinoEntry>>& AdditionalDinoEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalDinoEntry>>*>(this, "UPrimalGameData.AdditionalDinoEntries"); }
	float& GlobalGeneralArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorDegradationMultiplier"); }
	float& GlobalSpecificArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalSpecificArmorRatingMultiplier"); }
	float& GlobalGeneralArmorRatingMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.GlobalGeneralArmorRatingMultiplier"); }
	float& EnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyFoundationPreventionRadius"); }
	TArray<FColorDefinition>& ColorDefinitionsField() { return *GetNativePointerField<TArray<FColorDefinition>*>(this, "UPrimalGameData.ColorDefinitions"); }
	FieldArray<FPlayerCharacterGenderDefinition, 2> PlayerCharacterGenderDefinitionsField() { return {this, "UPrimalGameData.PlayerCharacterGenderDefinitions"}; }
	FieldArray<FLevelExperienceRamp, 4> LevelExperienceRampsField() { return {this, "UPrimalGameData.LevelExperienceRamps"}; }
	FieldArray<FLevelExperienceRamp, 4> SinglePlayerLevelExperienceRampsField() { return {this, "UPrimalGameData.SinglePlayerLevelExperienceRamps"}; }
	TArray<FNamedTeamDefinition>& NamedTeamDefinitionsField() { return *GetNativePointerField<TArray<FNamedTeamDefinition>*>(this, "UPrimalGameData.NamedTeamDefinitions"); }
	TArray<int>& PlayerLevelEngramPointsField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPoints"); }
	TArray<int>& PlayerLevelEngramPointsSPField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalGameData.PlayerLevelEngramPointsSP"); }
	TArray<FString>& PreventBuildStructureReasonStringsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.PreventBuildStructureReasonStrings"); }
	TArray<FExplorerNoteAchievement>& ExplorerNoteAchievementsField() { return *GetNativePointerField<TArray<FExplorerNoteAchievement>*>(this, "UPrimalGameData.ExplorerNoteAchievements"); }
	TArray<FClassRemapping>& Remap_NPCField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPC"); }
	TArray<FClassRemapping>& Remap_SupplyCratesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_SupplyCrates"); }
	TArray<FActiveEventSupplyCrateWeight>& Remap_ActiveEventSupplyCratesField() { return *GetNativePointerField<TArray<FActiveEventSupplyCrateWeight>*>(this, "UPrimalGameData.Remap_ActiveEventSupplyCrates"); }
	TArray<FClassRemapping>& Remap_ResourceComponentsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_ResourceComponents"); }
	TArray<FClassRemapping>& Remap_NPCSpawnEntriesField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_NPCSpawnEntries"); }
	TArray<FClassRemapping>& Remap_EngramsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Engrams"); }
	TArray<FClassRemapping>& Remap_ItemsField() { return *GetNativePointerField<TArray<FClassRemapping>*>(this, "UPrimalGameData.Remap_Items"); }
	TArray<FClassAddition>& AdditionalStructureEngramsField() { return *GetNativePointerField<TArray<FClassAddition>*>(this, "UPrimalGameData.AdditionalStructureEngrams"); }
	TArray<FBuffAddition>& AdditionalDefaultBuffsField() { return *GetNativePointerField<TArray<FBuffAddition>*>(this, "UPrimalGameData.AdditionalDefaultBuffs"); }
	TArray<FAvailableMission>& AvailableMissionsField() { return *GetNativePointerField<TArray<FAvailableMission>*>(this, "UPrimalGameData.AvailableMissions"); }
	TArray<FColor>& MasterColorTableField() { return *GetNativePointerField<TArray<FColor>*>(this, "UPrimalGameData.MasterColorTable"); }
	float& EnemyCoreStructureDeathActorRadiusBuildCheckField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.EnemyCoreStructureDeathActorRadiusBuildCheck"); }
	TSubclassOf<UUI_XBoxFooter>& FooterTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_XBoxFooter>*>(this, "UPrimalGameData.FooterTemplate"); }
	float& TribeXPSharePercentField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.TribeXPSharePercent"); }
	int& OverrideServerPhysXSubstepsField() { return *GetNativePointerField<int*>(this, "UPrimalGameData.OverrideServerPhysXSubsteps"); }
	float& OverrideServerPhysXSubstepsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.OverrideServerPhysXSubstepsDeltaTime"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bInitialized"); }
	TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UPrimalGameData.NotifClass"); }
	TSubclassOf<UPrimalStructureToolTipWidget>& StructureDefaultOverlayToolTipWidgetField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureToolTipWidget>*>(this, "UPrimalGameData.StructureDefaultOverlayToolTipWidget"); }
	float& MinPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinPaintDurationConsumption"); }
	float& MaxPaintDurationConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxPaintDurationConsumption"); }
	float& MinDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MinDinoRadiusForPaintConsumption"); }
	float& MaxDinoRadiusForPaintConsumptionField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.MaxDinoRadiusForPaintConsumption"); }
	TArray<FDinoBabySetup>& DinoBabySetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoBabySetups"); }
	TArray<FDinoBabySetup>& DinoGestationSetupsField() { return *GetNativePointerField<TArray<FDinoBabySetup>*>(this, "UPrimalGameData.DinoGestationSetups"); }
	TArray<FString>& AchievementIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalGameData.AchievementIDs"); }
	TArray<float>& AdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.AdditionalEggWeightsToSpawn"); }
	TArray<float>& FertilizedAdditionalEggWeightsToSpawnField() { return *GetNativePointerField<TArray<float>*>(this, "UPrimalGameData.FertilizedAdditionalEggWeightsToSpawn"); }
	FString& ItemAchievementsNameField() { return *GetNativePointerField<FString*>(this, "UPrimalGameData.ItemAchievementsName"); }
	TArray<FMultiAchievement>& MultiAchievementsField() { return *GetNativePointerField<TArray<FMultiAchievement>*>(this, "UPrimalGameData.MultiAchievements"); }
	UMaterialParameterCollection * FOVScaleMaterialParamCollectionField() { return GetNativePointerField<UMaterialParameterCollection *>(this, "UPrimalGameData.FOVScaleMaterialParamCollection"); }
	TArray<FNPCSpawnEntriesContainerAdditions>& TheNPCSpawnEntriesContainerAdditionsField() { return *GetNativePointerField<TArray<FNPCSpawnEntriesContainerAdditions>*>(this, "UPrimalGameData.TheNPCSpawnEntriesContainerAdditions"); }
	TSubclassOf<UPrimalStructureSettings>& DefaultStructureSettingsField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "UPrimalGameData.DefaultStructureSettings"); }
	TArray<FExplorerNoteEntry>& ExplorerNoteEntriesField() { return *GetNativePointerField<TArray<FExplorerNoteEntry>*>(this, "UPrimalGameData.ExplorerNoteEntries"); }
	float& ExplorerNoteXPGainField() { return *GetNativePointerField<float*>(this, "UPrimalGameData.ExplorerNoteXPGain"); }
	TSubclassOf<ATerrainActor>& OverrideAutoGenerateTerainActorTemplateField() { return *GetNativePointerField<TSubclassOf<ATerrainActor>*>(this, "UPrimalGameData.OverrideAutoGenerateTerainActorTemplate"); }
	TArray<FUnlockableEmoteEntry>& UnlockableEmotesField() { return *GetNativePointerField<TArray<FUnlockableEmoteEntry>*>(this, "UPrimalGameData.UnlockableEmotes"); }
	TArray<FEmoteGroup>& EmoteGroupsField() { return *GetNativePointerField<TArray<FEmoteGroup>*>(this, "UPrimalGameData.EmoteGroups"); }
	TArray<FClassRemappingWeight>& GlobalNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "UPrimalGameData.GlobalNPCRandomSpawnClassWeights"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimSequenceOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimSequenceOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanMaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanMaleAnimMontagesOverrides"); }
	TArray<FObjectCorrelation>& AdditionalHumanFemaleAnimMontagesOverridesField() { return *GetNativePointerField<TArray<FObjectCorrelation>*>(this, "UPrimalGameData.AdditionalHumanFemaleAnimMontagesOverrides"); }
	TArray<FOverrideAnimBlueprintEntry>& AdditionalHumanMaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry>*>(this, "UPrimalGameData.AdditionalHumanMaleOverrideAnimBlueprints"); }
	TArray<FOverrideAnimBlueprintEntry>& AdditionalHumanFemaleOverrideAnimBlueprintsField() { return *GetNativePointerField<TArray<FOverrideAnimBlueprintEntry>*>(this, "UPrimalGameData.AdditionalHumanFemaleOverrideAnimBlueprints"); }
	bool& bForceServerUseDinoListField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bForceServerUseDinoList"); }
	TArray<TSubclassOf<UPrimalGameData>>& ExtraStackedGameDataClassesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalGameData>>*>(this, "UPrimalGameData.ExtraStackedGameDataClasses"); }
	TArray<FHairStyleDefinition>& HeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.HeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& FacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.FacialHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalHeadHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalHeadHairStyleDefinitions"); }
	TArray<FHairStyleDefinition>& AdditionalFacialHairStyleDefinitionsField() { return *GetNativePointerField<TArray<FHairStyleDefinition>*>(this, "UPrimalGameData.AdditionalFacialHairStyleDefinitions"); }
	TSubclassOf<UPrimalPlayerData>& OverridePlayerDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalPlayerData>*>(this, "UPrimalGameData.OverridePlayerDataClass"); }
	TArray<FName>& AllDinosAchievementNameTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalGameData.AllDinosAchievementNameTags"); }
	FColor& WheelFolderColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelFolderColor"); }
	FColor& WheelBackColorField() { return *GetNativePointerField<FColor*>(this, "UPrimalGameData.WheelBackColor"); }
	UParticleSystem * CorpseLocatorEffectField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalGameData.CorpseLocatorEffect"); }
	TArray<TEnumAsByte<enum ECollisionChannel>>& SkeletalPhysCustomBodyAdditionalIgnoresField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ECollisionChannel>>*>(this, "UPrimalGameData.SkeletalPhysCustomBodyAdditionalIgnores"); }
	UParticleSystem * LockedToSeatingStructureParticleField() { return GetNativePointerField<UParticleSystem *>(this, "UPrimalGameData.LockedToSeatingStructureParticle"); }
	TArray<TSubclassOf<UHexagonTradableOption>>& DefaultTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>>*>(this, "UPrimalGameData.DefaultTradableOptions"); }
	TArray<TSubclassOf<UHexagonTradableOption>>& AdditionalTradableOptionsField() { return *GetNativePointerField<TArray<TSubclassOf<UHexagonTradableOption>>*>(this, "UPrimalGameData.AdditionalTradableOptions"); }
	TArray<FGrinderItemReplacer>& GrinderReplacementsField() { return *GetNativePointerField<TArray<FGrinderItemReplacer>*>(this, "UPrimalGameData.GrinderReplacements"); }
	TArray<FInvalidReferenceRedirector>& InvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector>*>(this, "UPrimalGameData.InvalidReferenceRedirects"); }
	TArray<FInvalidReferenceRedirector>& AdditionalInvalidReferenceRedirectsField() { return *GetNativePointerField<TArray<FInvalidReferenceRedirector>*>(this, "UPrimalGameData.AdditionalInvalidReferenceRedirects"); }
	bool& bWantsToRunMissionsField() { return *GetNativePointerField<bool*>(this, "UPrimalGameData.bWantsToRunMissions"); }
	TSubclassOf<UPrimalWorldBuffData>& CoreWorldBuffDefinitionsField() { return *GetNativePointerField<TSubclassOf<UPrimalWorldBuffData>*>(this, "UPrimalGameData.CoreWorldBuffDefinitions"); }
	TArray<TSubclassOf<UPrimalWorldBuffData>>& AdditionalWorldBuffDefinitionsField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalWorldBuffData>>*>(this, "UPrimalGameData.AdditionalWorldBuffDefinitions"); }
	UPrimalWorldBuffData * WorldBuffDataField() { return GetNativePointerField<UPrimalWorldBuffData *>(this, "UPrimalGameData.WorldBuffData"); }
	FLinearColor& PointOfInterest_IndicatorColor_DefaultField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_Default"); }
	FLinearColor& PointOfInterest_IndicatorColor_ObjectiveCompleteField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_IndicatorColor_ObjectiveComplete"); }
	FLinearColor& PointOfInterest_ProgressBarColor_TamingAffinityField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGameData.PointOfInterest_ProgressBarColor_TamingAffinity"); }
	TArray<FExtraEggItem>& ExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem>*>(this, "UPrimalGameData.ExtraEggItems"); }
	TArray<FExtraEggItem>& AdditionalExtraEggItemsField() { return *GetNativePointerField<TArray<FExtraEggItem>*>(this, "UPrimalGameData.AdditionalExtraEggItems"); }
	TSubclassOf<UPrimalGlobalUIData>& GlobalUIDataClassField() { return *GetNativePointerField<TSubclassOf<UPrimalGlobalUIData>*>(this, "UPrimalGameData.GlobalUIDataClass"); }
	TArray<FWorldDefaultItemSet>& DefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet>*>(this, "UPrimalGameData.DefaultMapItemSets"); }
	TArray<FWorldDefaultItemSet>& AdditionalDefaultMapItemSetsField() { return *GetNativePointerField<TArray<FWorldDefaultItemSet>*>(this, "UPrimalGameData.AdditionalDefaultMapItemSets"); }
	UStaticMesh * CopySettingsVisualIndicatorMeshField() { return GetNativePointerField<UStaticMesh *>(this, "UPrimalGameData.CopySettingsVisualIndicatorMesh"); }
	TArray<FSlateColor>& SubtitleColorsField() { return *GetNativePointerField<TArray<FSlateColor>*>(this, "UPrimalGameData.SubtitleColors"); }
	TArray<FCryopodPersistantBuffs>& CryopodPersistantBuffsMapField() { return *GetNativePointerField<TArray<FCryopodPersistantBuffs>*>(this, "UPrimalGameData.CryopodPersistantBuffsMap"); }

	// Functions

	const UPrimalGlobalUIData * GetUIDataFast() { return NativeCall<const UPrimalGlobalUIData *>(this, "UPrimalGameData.GetUIDataFast"); }
	static void AddPartBoneModifiers(USkeletalMeshComponent * ForMesh, const TArray<FBoneModifierRange> * BoneModifierRanges, float Value, TArray<FBoneModifier> * BoneModifiers) { NativeCall<void, USkeletalMeshComponent *, const TArray<FBoneModifierRange> *, float, TArray<FBoneModifier> *>(nullptr, "UPrimalGameData.AddPartBoneModifiers", ForMesh, BoneModifierRanges, Value, BoneModifiers); }
	static UPrimalGameData * BPGetGameData() { return NativeCall<UPrimalGameData *>(nullptr, "UPrimalGameData.BPGetGameData"); }
	int BPGetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.BPGetItemQualityIndex", ItemRating); }
	bool CanTeamDamage(int attackerTeam, int victimTeam, AActor * Attacker) { return NativeCall<bool, int, int, AActor *>(this, "UPrimalGameData.CanTeamDamage", attackerTeam, victimTeam, Attacker); }
	bool CanTeamTarget(int attackerTeam, int victimTeam, int originalVictimTargetingTeam, AActor * Attacker, AActor * Victim) { return NativeCall<bool, int, int, int, AActor *, AActor *>(this, "UPrimalGameData.CanTeamTarget", attackerTeam, victimTeam, originalVictimTargetingTeam, Attacker, Victim); }
	int GetBitmaskForBuffs(TArray<APrimalBuff *> ActiveBuffs) { return NativeCall<int, TArray<APrimalBuff *>>(this, "UPrimalGameData.GetBitmaskForBuffs", ActiveBuffs); }
	static void GetClassAdditions(TArray<TSubclassOf<UObject>> * TheClassAdditions, const TArray<FClassAddition> * ClassAdditions, TSubclassOf<UObject> ForClass) { NativeCall<void, TArray<TSubclassOf<UObject>> *, const TArray<FClassAddition> *, TSubclassOf<UObject>>(nullptr, "UPrimalGameData.GetClassAdditions", TheClassAdditions, ClassAdditions, ForClass); }
	FLinearColor * GetColorForDefinition(FLinearColor * result, int DefinitionIndex) { return NativeCall<FLinearColor *, FLinearColor *, int>(this, "UPrimalGameData.GetColorForDefinition", result, DefinitionIndex); }
	void GetDataListEntries(TArray<IDataListEntryInterface *> * OutDataListEntries, int DataListType, bool bCreateFolders, char FolderLevel, TArray<FString> * FoldersFound, UObject * ForObject, const wchar_t * CustomFolderFilter, char SortType, const wchar_t * NameFilter) { NativeCall<void, TArray<IDataListEntryInterface *> *, int, bool, char, TArray<FString> *, UObject *, const wchar_t *, char, const wchar_t *>(this, "UPrimalGameData.GetDataListEntries", OutDataListEntries, DataListType, bCreateFolders, FolderLevel, FoldersFound, ForObject, CustomFolderFilter, SortType, NameFilter); }
	int GetDefinitionIndexForColorName(FName ColorName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetDefinitionIndexForColorName", ColorName); }
	FDinoBabySetup * GetDinoBabySetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup *, FName>(this, "UPrimalGameData.GetDinoBabySetup", DinoNameTag); }
	TSubclassOf<UPrimalDinoEntry> * GetDinoEntry(TSubclassOf<UPrimalDinoEntry> * result, TSubclassOf<APrimalDinoCharacter> DinoClass) { return NativeCall<TSubclassOf<UPrimalDinoEntry> *, TSubclassOf<UPrimalDinoEntry> *, TSubclassOf<APrimalDinoCharacter>>(this, "UPrimalGameData.GetDinoEntry", result, DinoClass); }
	FDinoBabySetup * GetDinoGestationSetup(FName DinoNameTag) { return NativeCall<FDinoBabySetup *, FName>(this, "UPrimalGameData.GetDinoGestationSetup", DinoNameTag); }
	int GetEngramRequirementLevel(UClass * ItemClass) { return NativeCall<int, UClass *>(this, "UPrimalGameData.GetEngramRequirementLevel", ItemClass); }
	void GetEntryCustomColor(IDataListEntryInterface * entryInterface, FLinearColor * CustomColor, FLinearColor * TextColorOverride) { NativeCall<void, IDataListEntryInterface *, FLinearColor *, FLinearColor *>(this, "UPrimalGameData.GetEntryCustomColor", entryInterface, CustomColor, TextColorOverride); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface * entryInterface) { return NativeCall<bool, IDataListEntryInterface *>(this, "UPrimalGameData.GetEntryDefaultEnabled", entryInterface); }
	FString * GetEntryDefaultTextOverride(FString * result, IDataListEntryInterface * entryInterface) { return NativeCall<FString *, FString *, IDataListEntryInterface *>(this, "UPrimalGameData.GetEntryDefaultTextOverride", result, entryInterface); }
	void GetEntryExtraIcons(IDataListEntryInterface * entryInterface, TArray<UTexture2D *> * extraIcons) { NativeCall<void, IDataListEntryInterface *, TArray<UTexture2D *> *>(this, "UPrimalGameData.GetEntryExtraIcons", entryInterface, extraIcons); }
	FString * GetExplorerNoteDescription(FString * result, int ExplorerNoteIndex) { return NativeCall<FString *, FString *, int>(this, "UPrimalGameData.GetExplorerNoteDescription", result, ExplorerNoteIndex); }
	TArray<FColor> * GetGlobalColorTable(TArray<FColor> * result) { return NativeCall<TArray<FColor> *, TArray<FColor> *>(this, "UPrimalGameData.GetGlobalColorTable", result); }
	int GetItemQualityIndex(float ItemRating) { return NativeCall<int, float>(this, "UPrimalGameData.GetItemQualityIndex", ItemRating); }
	FLevelExperienceRamp * GetLevelExperienceRamp(ELevelExperienceRampType::Type levelType) { return NativeCall<FLevelExperienceRamp *, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelExperienceRamp", levelType); }
	int GetLevelMax(ELevelExperienceRampType::Type levelType) { return NativeCall<int, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetLevelMax", levelType); }
	float GetLevelXP(ELevelExperienceRampType::Type levelType, int forLevel) { return NativeCall<float, ELevelExperienceRampType::Type, int>(this, "UPrimalGameData.GetLevelXP", levelType, forLevel); }
	int GetNamedTargetingTeamIndex(FName TargetingTeamName) { return NativeCall<int, FName>(this, "UPrimalGameData.GetNamedTargetingTeamIndex", TargetingTeamName); }
	TArray<int> * GetPlayerLevelEngramPoints() { return NativeCall<TArray<int> *>(this, "UPrimalGameData.GetPlayerLevelEngramPoints"); }
	TArray<FString> * GetPlayerSpawnRegions(UWorld * ForWorld) { return NativeCall<TArray<FString> *, UWorld *>(this, "UPrimalGameData.GetPlayerSpawnRegions", ForWorld); }
	float GetTeamTargetingDesirabilityMultiplier(int attackerTeam, int victimTeam) { return NativeCall<float, int, int>(this, "UPrimalGameData.GetTeamTargetingDesirabilityMultiplier", attackerTeam, victimTeam); }
	float GetXPMax(ELevelExperienceRampType::Type levelType) { return NativeCall<float, ELevelExperienceRampType::Type>(this, "UPrimalGameData.GetXPMax", levelType); }
	void Initialize() { NativeCall<void>(this, "UPrimalGameData.Initialize"); }
	static bool LocalIsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsGlobalExplorerNoteUnlocked", ExplorerNoteIndex); }
	static bool LocalIsPerMapExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(nullptr, "UPrimalGameData.LocalIsPerMapExplorerNoteUnlocked", ExplorerNoteIndex); }
	bool LocalIsTamedDinoTagUnlocked(FName DinoNameTag) { return NativeCall<bool, FName>(this, "UPrimalGameData.LocalIsTamedDinoTagUnlocked", DinoNameTag); }
	bool MergeModData(UPrimalGameData * InMergeCanidate) { return NativeCall<bool, UPrimalGameData *>(this, "UPrimalGameData.MergeModData", InMergeCanidate); }
	bool ShouldHideSpawnRegionFromSpawnUI(UWorld * ForWorld, char RegionIndex) { return NativeCall<bool, UWorld *, char>(this, "UPrimalGameData.ShouldHideSpawnRegionFromSpawnUI", ForWorld, RegionIndex); }
	void BPInitializeGameData() { NativeCall<void>(this, "UPrimalGameData.BPInitializeGameData"); }
	void BPMergeModGameData(UPrimalGameData * AnotherGameData) { NativeCall<void, UPrimalGameData *>(this, "UPrimalGameData.BPMergeModGameData", AnotherGameData); }
	void LoadedWorld(UWorld * TheWorld) { NativeCall<void, UWorld *>(this, "UPrimalGameData.LoadedWorld", TheWorld); }
	void TickedWorld(UWorld * TheWorld, float DeltaTime) { NativeCall<void, UWorld *, float>(this, "UPrimalGameData.TickedWorld", TheWorld, DeltaTime); }
};

