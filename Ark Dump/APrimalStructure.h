#pragma once

#include "BaseDeclarations.h"
#include "APrimalTargetableActor.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"
#include "APrimalStructure.h"
#include "UPrimalItem.h"

struct APrimalStructure : APrimalTargetableActor
{
	char __padding[0x568L];
	FVector2D& OverlayTooltipPaddingField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipPadding"); }
	FVector2D& OverlayTooltipScaleField() { return *GetNativePointerField<FVector2D*>(this, "APrimalStructure.OverlayTooltipScale"); }
	FName& StructureTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.StructureTag"); }
	float& ScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ScaleFactor"); }
	int& StructureSnapTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureSnapTypeFlags"); }
	TArray<FStructureVariant>& VariantsField() { return *GetNativePointerField<TArray<FStructureVariant>*>(this, "APrimalStructure.Variants"); }
	int& CurrentVariantField() { return *GetNativePointerField<int*>(this, "APrimalStructure.CurrentVariant"); }
	float& PlacementOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementOffsetForVerticalGround"); }
	float& PlacementInitialTracePointOffsetForVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementInitialTracePointOffsetForVerticalGround"); }
	float& TraceDistanceFromActorToWallVerticalGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.TraceDistanceFromActorToWallVerticalGround"); }
	FVector& PlacementHitLocOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementHitLocOffset"); }
	FVector& PlacementEncroachmentCheckOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentCheckOffset"); }
	FVector& PlacementEncroachmentBoxExtentField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementEncroachmentBoxExtent"); }
	FVector& PlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PlacementTraceScale"); }
	FVector& SnapAlternatePlacementTraceScaleField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SnapAlternatePlacementTraceScale"); }
	FRotator& PlacementRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementRotOffset"); }
	FRotator& PlacementTraceRotOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PlacementTraceRotOffset"); }
	FRotator& SnappingRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SnappingRotationOffset"); }
	float& RepairAmountRemainingField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairAmountRemaining"); }
	float& RepairCheckIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairCheckInterval"); }
	float& PlacementFloorCheckZExtentUpField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtentUp"); }
	float& RepairPercentPerIntervalField() { return *GetNativePointerField<float*>(this, "APrimalStructure.RepairPercentPerInterval"); }
	float& DecayDestructionPeriodField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriod"); }
	int& TraceIgnoreStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.TraceIgnoreStructuresWithTypeFlags"); }
	TArray<FPrimalStructureSnapPoint>& SnapPointsField() { return *GetNativePointerField<TArray<FPrimalStructureSnapPoint>*>(this, "APrimalStructure.SnapPoints"); }
	int& bTraceCheckOnlyUseStructuresWithTypeFlagsField() { return *GetNativePointerField<int*>(this, "APrimalStructure.bTraceCheckOnlyUseStructuresWithTypeFlags"); }
	FieldArray<char, 6> AllowStructureColorSetsField() { return {this, "APrimalStructure.AllowStructureColorSets"}; }
	FVector& WaterVolumeCheckPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.WaterVolumeCheckPointOffset"); }
	float& WaterPlacementMinimumWaterHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.WaterPlacementMinimumWaterHeight"); }
	float& PlacementMaxZDeltaField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZDelta"); }
	float& PlacementChooseRotationMaxRangeOverrideField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementChooseRotationMaxRangeOverride"); }
	float& PlacementMaxRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxRange"); }
	float& MaxSnapLocRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaxSnapLocRange"); }
	float& SnapOverlapCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.SnapOverlapCheckRadius"); }
	float& MaximumFoundationSupport2DBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumFoundationSupport2DBuildDistance"); }
	float& PlacementFloorCheckZExtentField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementFloorCheckZExtent"); }
	float& LastHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastHealthPercentage"); }
	FRotator& TakeGroundNormalRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.TakeGroundNormalRotationOffset"); }
	float& DemolishGiveItemCraftingResourcePercentageField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishGiveItemCraftingResourcePercentage"); }
	float& MaximumHeightAboveWorldGroundField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightAboveWorldGround"); }
	float& MaximumHeightUnderWorldMaxKillZField() { return *GetNativePointerField<float*>(this, "APrimalStructure.MaximumHeightUnderWorldMaxKillZ"); }
	FRotator& PreviewCameraRotationField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.PreviewCameraRotation"); }
	FVector& PreviewCameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.PreviewCameraPivotOffset"); }
	float& PreviewCameraDistanceScaleFactorField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDistanceScaleFactor"); }
	float& PreviewCameraDefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraDefaultZoomMultiplier"); }
	float& PreviewCameraMaxZoomMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PreviewCameraMaxZoomMultiplier"); }
	float& ReturnDamageAmountField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageAmount"); }
	int& StructureRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureRangeTypeFlag"); }
	int& LimitMaxStructuresInRangeTypeFlagField() { return *GetNativePointerField<int*>(this, "APrimalStructure.LimitMaxStructuresInRangeTypeFlag"); }
	float& ReturnDamageImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ReturnDamageImpulse"); }
	int& OwningPlayerIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.OwningPlayerID"); }
	FString& OwningPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwningPlayerName"); }
	long double& LastInAllyRangeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastInAllyRangeTime"); }
	long double& PickupAllowedBeforeNetworkTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.PickupAllowedBeforeNetworkTime"); }
	float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DecayDestructionPeriodMultiplier"); }
	TWeakObjectPtr<APrimalDinoCharacter>& SaddleDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalStructure.SaddleDino"); }
	TArray<APrimalDinoCharacter *>& LatchedDinosField() { return *GetNativePointerField<TArray<APrimalDinoCharacter *>*>(this, "APrimalStructure.LatchedDinos"); }
	FName& PreviewMaterialColorParamNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PreviewMaterialColorParamName"); }
	TArray<FVector>& PlacementTraceDirectionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "APrimalStructure.PlacementTraceDirections"); }
	TArray<unsigned int>& LinkedStructuresIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "APrimalStructure.LinkedStructuresID"); }
	TArray<FName>& SnapToStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.SnapToStructureTagsToExclude"); }
	TArray<FName>& SnapFromStructureTagsToExcludeField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.SnapFromStructureTagsToExclude"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructure.OwnerName"); }
	FieldArray<__int16, 6> StructureColorsField() { return {this, "APrimalStructure.StructureColors"}; }
	unsigned int& StructureIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.StructureID"); }
	unsigned int& AttachedToDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.AttachedToDinoID1"); }
	unsigned int& TaggedIndexField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndex"); }
	unsigned int& TaggedIndexTwoField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.TaggedIndexTwo"); }
	unsigned int& ProcessTreeTagField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructure.ProcessTreeTag"); }
	ABiomeZoneVolume * MyBiomeZoneVolumeField() { return GetNativePointerField<ABiomeZoneVolume *>(this, "APrimalStructure.MyBiomeZoneVolume"); }
	long double& LastStructureStasisTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastStructureStasisTime"); }
	long double& LastColorizationTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastColorizationTime"); }
	FVector& AdvancedRotationPlacementOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.AdvancedRotationPlacementOffset"); }
	FVector& SpawnEmitterLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.SpawnEmitterLocationOffset"); }
	FRotator& SpawnEmitterRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "APrimalStructure.SpawnEmitterRotationOffset"); }
	float& ExcludeInStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExcludeInStructuresRadius"); }
	float& LastFadeOpacityField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastFadeOpacity"); }
	bool& bClientAddedToStructuresArrayField() { return *GetNativePointerField<bool*>(this, "APrimalStructure.bClientAddedToStructuresArray"); }
	long double& LastFailedPinTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructure.LastFailedPinTime"); }
	TArray<FString>& PreventBuildStructureReasonStringOverridesField() { return *GetNativePointerField<TArray<FString>*>(this, "APrimalStructure.PreventBuildStructureReasonStringOverrides"); }
	FVector& FloatingHudLocTextOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.FloatingHudLocTextOffset"); }
	float& LastBumpedDamageTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LastBumpedDamageTime"); }
	int& ForceLimitStructuresInRangeField() { return *GetNativePointerField<int*>(this, "APrimalStructure.ForceLimitStructuresInRange"); }
	int& PlacementMaterialForwardDirIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructure.PlacementMaterialForwardDirIndex"); }
	float& ForcePreventPlacingInOfflineRaidStructuresRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ForcePreventPlacingInOfflineRaidStructuresRadius"); }
	FName& AttachToStaticMeshSocketNameBaseField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.AttachToStaticMeshSocketNameBase"); }
	TSubclassOf<UPrimalHarvestingComponent>& StructureHarvestingComponentField() { return *GetNativePointerField<TSubclassOf<UPrimalHarvestingComponent>*>(this, "APrimalStructure.StructureHarvestingComponent"); }
	UPrimalHarvestingComponent * MyStructureHarvestingComponentField() { return GetNativePointerField<UPrimalHarvestingComponent *>(this, "APrimalStructure.MyStructureHarvestingComponent"); }
	float& UnstasisAutoDestroyAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.UnstasisAutoDestroyAfterTime"); }
	char& TribeGroupStructureRankField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeGroupStructureRank"); }
	char& TribeRankHUDYOffsetField() { return *GetNativePointerField<char*>(this, "APrimalStructure.TribeRankHUDYOffset"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& PreventSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.PreventSaddleDinoClasses"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& AllowSaddleDinoClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalStructure.AllowSaddleDinoClasses"); }
	FName& PlaceOnWallUseStaticMeshTagField() { return *GetNativePointerField<FName*>(this, "APrimalStructure.PlaceOnWallUseStaticMeshTag"); }
	float& DemolishActivationTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructure.DemolishActivationTime"); }
	FVector& GroundEncroachmentCheckLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalStructure.GroundEncroachmentCheckLocationOffset"); }
	int& StructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.StructureMinAllowedVersion"); }
	int& SavedStructureMinAllowedVersionField() { return *GetNativePointerField<int*>(this, "APrimalStructure.SavedStructureMinAllowedVersion"); }
	float& OverrideEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideEnemyFoundationPreventionRadius"); }
	float& OverridePVPEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverridePVPEnemyFoundationPreventionRadius"); }
	float& ExpandEnemyFoundationPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.ExpandEnemyFoundationPreventionRadius"); }
	int& BedIDField() { return *GetNativePointerField<int*>(this, "APrimalStructure.BedID"); }
	float& LimitMaxStructuresInRangeRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.LimitMaxStructuresInRangeRadius"); }
	float& PlacementMaxZAbovePlayerHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructure.PlacementMaxZAbovePlayerHeight"); }
	float& OverrideApproachRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructure.OverrideApproachRadius"); }
	FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructure.PlaceUsingItemID"); }
	TArray<FName>& CustomDataModifiedOnStructurePickupField() { return *GetNativePointerField<TArray<FName>*>(this, "APrimalStructure.CustomDataModifiedOnStructurePickup"); }

	// Functions

	float AddAggroOnBump(APrimalDinoCharacter * BumpedBy) { return NativeCall<float, APrimalDinoCharacter *>(this, "APrimalStructure.AddAggroOnBump", BumpedBy); }
	bool AllowColoringBy(APlayerController * ForPC, UObject * anItem) { return NativeCall<bool, APlayerController *, UObject *>(this, "APrimalStructure.AllowColoringBy", ForPC, anItem); }
	bool AllowCreateDynamicMaterials() { return NativeCall<bool>(this, "APrimalStructure.AllowCreateDynamicMaterials"); }
	bool AllowPickupForItem(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.AllowPickupForItem", ForPC); }
	bool AllowPlacingOnSaddleParentClass(APrimalDinoCharacter * theDino, bool bForcePrevent, int * overrideReturnCode, AShooterPlayerController * PC) { return NativeCall<bool, APrimalDinoCharacter *, bool, int *, AShooterPlayerController *>(this, "APrimalStructure.AllowPlacingOnSaddleParentClass", theDino, bForcePrevent, overrideReturnCode, PC); }
	bool AllowSnapRotationForStructure(int ThisSnapPointIndex, APrimalStructure * OtherStructure, int OtherStructureSnapPointIndex) { return NativeCall<bool, int, APrimalStructure *, int>(this, "APrimalStructure.AllowSnapRotationForStructure", ThisSnapPointIndex, OtherStructure, OtherStructureSnapPointIndex); }
	bool AllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.AllowSnappingWith", OtherStructure, ForPC); }
	bool AllowSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.AllowSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool AllowStructureAccess(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructure.AllowStructureAccess", ForPC); }
	void AnimNotifyCustomEvent(FName CustomEventName, USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, const UAnimNotify * AnimNotifyObject) { NativeCall<void, FName, USkeletalMeshComponent *, UAnimSequenceBase *, const UAnimNotify *>(this, "APrimalStructure.AnimNotifyCustomEvent", CustomEventName, MeshComp, Animation, AnimNotifyObject); }
	void ApplyColorToRegions(__int16 CustomColorID, bool * ApplyToRegions) { NativeCall<void, __int16, bool *>(this, "APrimalStructure.ApplyColorToRegions", CustomColorID, ApplyToRegions); }
	void ApplyLinkedIDs(bool bRelinkParents) { NativeCall<void, bool>(this, "APrimalStructure.ApplyLinkedIDs", bRelinkParents); }
	void ApplyPrimalItemSettingsToStructure(UMeshComponent * meshToColorize, UPrimalItem * AssociatedPrimalItem) { NativeCall<void, UMeshComponent *, UPrimalItem *>(this, "APrimalStructure.ApplyPrimalItemSettingsToStructure", meshToColorize, AssociatedPrimalItem); }
	void ApplyScale(bool bOnlyInitPhysics) { NativeCall<void, bool>(this, "APrimalStructure.ApplyScale", bOnlyInitPhysics); }
	void BPGetAllLinkedStructures(TArray<APrimalStructure *> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>(this, "APrimalStructure.BPGetAllLinkedStructures", OutLinkedStructures); }
	TArray<FPrimalStructureSnapPoint> * BPGetSnapPoints() { return NativeCall<TArray<FPrimalStructureSnapPoint> *>(this, "APrimalStructure.BPGetSnapPoints"); }
	static int BPGetStructureID(APrimalStructure * PrimalStructure) { return NativeCall<int, APrimalStructure *>(nullptr, "APrimalStructure.BPGetStructureID", PrimalStructure); }
	void BPNetRefreshStructureColors_Implementation(bool bUseColors) { NativeCall<void, bool>(this, "APrimalStructure.BPNetRefreshStructureColors_Implementation", bUseColors); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructure.BeginPlay"); }
	void CallDrawFloatingHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructure.CallDrawFloatingHUD", HUD); }
	void CallDrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructure.CallDrawHUD", HUD); }
	bool CanAttachToExosuit_Implementation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.CanAttachToExosuit_Implementation", ForPC); }
	bool CanAutoDemolish() { return NativeCall<bool>(this, "APrimalStructure.CanAutoDemolish"); }
	bool CanBeBaseForCharacter(APawn * Pawn) { return NativeCall<bool, APawn *>(this, "APrimalStructure.CanBeBaseForCharacter", Pawn); }
	bool CanBePainted() { return NativeCall<bool>(this, "APrimalStructure.CanBePainted"); }
	bool CanBeStoredByExosuit_Implementation(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.CanBeStoredByExosuit_Implementation", ForPC); }
	bool CanPickupStructureFromRecentPlacement() { return NativeCall<bool>(this, "APrimalStructure.CanPickupStructureFromRecentPlacement"); }
	void ChangeActorTeam(int NewTeam) { NativeCall<void, int>(this, "APrimalStructure.ChangeActorTeam", NewTeam); }
	bool CheckNotEncroaching(FVector PlacementLocation, FRotator PlacementRotation, AActor * DinoCharacter, APrimalStructure * SnappedToParentStructure, APrimalStructure * ReplacesStructure, bool bUseAlternatePlacementTraceScale) { return NativeCall<bool, FVector, FRotator, AActor *, APrimalStructure *, APrimalStructure *, bool>(this, "APrimalStructure.CheckNotEncroaching", PlacementLocation, PlacementRotation, DinoCharacter, SnappedToParentStructure, ReplacesStructure, bUseAlternatePlacementTraceScale); }
	bool ClampBuildLocation(FVector FromLocation, AActor ** OutHitActor, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, APlayerController * PC) { return NativeCall<bool, FVector, AActor **, FPlacementData *, bool, APlayerController *>(this, "APrimalStructure.ClampBuildLocation", FromLocation, OutHitActor, OutPlacementData, bDontAdjustForMaxRange, PC); }
	static void CleanUpTree(TArray<APrimalStructure *> * StartingStructures, AController * InstigatorController, AActor * DamageCauser, bool bPickup) { NativeCall<void, TArray<APrimalStructure *> *, AController *, AActor *, bool>(nullptr, "APrimalStructure.CleanUpTree", StartingStructures, InstigatorController, DamageCauser, bPickup); }
	static void CleanUpTree(APrimalStructure * StartingStructure, AController * InstigatorController, AActor * DamageCauser, unsigned int depth, bool bPickup) { NativeCall<void, APrimalStructure *, AController *, AActor *, unsigned int, bool>(nullptr, "APrimalStructure.CleanUpTree", StartingStructure, InstigatorController, DamageCauser, depth, bPickup); }
	void ClearBiomeZoneVolume(ABiomeZoneVolume * theVolume) { NativeCall<void, ABiomeZoneVolume *>(this, "APrimalStructure.ClearBiomeZoneVolume", theVolume); }
	void ClearCustomColors_Implementation() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors_Implementation"); }
	void ClearStructureLinks(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.ClearStructureLinks", ForPC); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructure.ClientMultiUse", ForPC, UseIndex); }
	void ClientUpdateLinkedStructures_Implementation(const TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, const TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures_Implementation", NewLinkedStructures); }
	void CreateDynamicMaterials(UMeshComponent * ForceCreateForComponent) { NativeCall<void, UMeshComponent *>(this, "APrimalStructure.CreateDynamicMaterials", ForceCreateForComponent); }
	static void CullAgainstFoundations(TArray<APrimalStructure *> * StartingStructures, TArray<APrimalStructure *> * Foundations) { NativeCall<void, TArray<APrimalStructure *> *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructures, Foundations); }
	static bool CullAgainstFoundations(APrimalStructure ** StartingStructure, TArray<APrimalStructure *> * Foundations) { return NativeCall<bool, APrimalStructure **, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.CullAgainstFoundations", StartingStructure, Foundations); }
	void DeferredDeprecationCheck() { NativeCall<void>(this, "APrimalStructure.DeferredDeprecationCheck"); }
	void DelayedCleanUpTree() { NativeCall<void>(this, "APrimalStructure.DelayedCleanUpTree"); }
	void DelayedDisableSnapParent() { NativeCall<void>(this, "APrimalStructure.DelayedDisableSnapParent"); }
	void Demolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructure.Demolish", ForPC, DamageCauser); }
	void DestroyByMeshing() { NativeCall<void>(this, "APrimalStructure.DestroyByMeshing"); }
	void DestroyStructuresPlacedOnFloor() { NativeCall<void>(this, "APrimalStructure.DestroyStructuresPlacedOnFloor"); }
	void Destroyed() { NativeCall<void>(this, "APrimalStructure.Destroyed"); }
	bool Die(float KillingDamage, const FDamageEvent * DamageEvent, AController * Killer, AActor * DamageCauser) { return NativeCall<bool, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.Die", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void DisableStructurePickup() { NativeCall<void>(this, "APrimalStructure.DisableStructurePickup"); }
	bool DoAnyTribePermissionsRestrict(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.DoAnyTribePermissionsRestrict", ForPC); }
	void DoDie() { NativeCall<void>(this, "APrimalStructure.DoDie"); }
	void DrawHUD(AShooterHUD * HUD) { NativeCall<void, AShooterHUD *>(this, "APrimalStructure.DrawHUD", HUD); }
	void DrawStructureTooltip(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalStructure.DrawStructureTooltip", HUD, bForMultiUseSelector); }
	void DrawStructureTooltipAction(AShooterHUD * HUD, bool bForMultiUseSelector) { NativeCall<void, AShooterHUD *, bool>(this, "APrimalStructure.DrawStructureTooltipAction", HUD, bForMultiUseSelector); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalStructure.EndPlay", EndPlayReason); }
	void FadeInEffectTick() { NativeCall<void>(this, "APrimalStructure.FadeInEffectTick"); }
	void FinalLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.FinalLoadedFromSaveGame"); }
	bool FinalStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bIsFlipped) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.FinalStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bIsFlipped); }
	static void FindFoundations(TArray<APrimalStructure *> * StartingStructures, TArray<APrimalStructure *> * Foundations) { NativeCall<void, TArray<APrimalStructure *> *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FindFoundations", StartingStructures, Foundations); }
	static void FindFoundations(APrimalStructure * StartingStructure, TArray<APrimalStructure *> * Foundations) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FindFoundations", StartingStructure, Foundations); }
	static void FlagConnectionsLessThan(APrimalStructure ** StartingStructure, int Connections, TArray<APrimalStructure *> * StructuresToDestroy) { NativeCall<void, APrimalStructure **, int, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FlagConnectionsLessThan", StartingStructure, Connections, StructuresToDestroy); }
	static void FlagConnectionsLessThan(TArray<APrimalStructure *> * Structures, int Connections, TArray<APrimalStructure *> * StructuresToDestroy) { NativeCall<void, TArray<APrimalStructure *> *, int, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FlagConnectionsLessThan", Structures, Connections, StructuresToDestroy); }
	static void FlagReachable(TArray<APrimalStructure *> * Foundations) { NativeCall<void, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.FlagReachable", Foundations); }
	static void FlagReachable(APrimalStructure * StartingStructure) { NativeCall<void, APrimalStructure *>(nullptr, "APrimalStructure.FlagReachable", StartingStructure); }
	void ForceReplicateLinkedStructures() { NativeCall<void>(this, "APrimalStructure.ForceReplicateLinkedStructures"); }
	void GatherStructuresPlacedOnFloor(APrimalStructure * ForStructure, TArray<APrimalStructure *> * StructuresOnFloors) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>(this, "APrimalStructure.GatherStructuresPlacedOnFloor", ForStructure, StructuresOnFloors); }
	void GetAllLinkedStructures(TArray<APrimalStructure *> * OutLinkedStructures) { NativeCall<void, TArray<APrimalStructure *> *>(this, "APrimalStructure.GetAllLinkedStructures", OutLinkedStructures); }
	bool GetAttachedToStaticMeshTransform(APlayerController * PC, UStaticMeshComponent * onComponent, FVector AtLocation, FVector * OutLocation, FRotator * OutRotation, FHitResult * HitResult, APrimalStructure ** OutReplaceStructure) { return NativeCall<bool, APlayerController *, UStaticMeshComponent *, FVector, FVector *, FRotator *, FHitResult *, APrimalStructure **>(this, "APrimalStructure.GetAttachedToStaticMeshTransform", PC, onComponent, AtLocation, OutLocation, OutRotation, HitResult, OutReplaceStructure); }
	void GetCantBuildReasonString(int ReasonVal, FString * reasonString) { NativeCall<void, int, FString *>(this, "APrimalStructure.GetCantBuildReasonString", ReasonVal, reasonString); }
	bool GetClosestTargetOverride(const FVector * attackPos, FVector * targetPos) { return NativeCall<bool, const FVector *, FVector *>(this, "APrimalStructure.GetClosestTargetOverride", attackPos, targetPos); }
	ADayCycleManager * GetDayCycleManager() { return NativeCall<ADayCycleManager *>(this, "APrimalStructure.GetDayCycleManager"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetDebugInfoString", result); }
	FStructureVariant * GetDefaultVariant(FStructureVariant * result) { return NativeCall<FStructureVariant *, FStructureVariant *>(this, "APrimalStructure.GetDefaultVariant", result); }
	FString * GetDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetDescriptiveName", result); }
	UDestructibleMesh * GetDestroyedMesh() { return NativeCall<UDestructibleMesh *>(this, "APrimalStructure.GetDestroyedMesh"); }
	FString * GetEntryDescription(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryDescription", result); }
	FString * GetEntryString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalStructure.GetEntryString", result); }
	long double GetForceDemolishTime() { return NativeCall<long double>(this, "APrimalStructure.GetForceDemolishTime"); }
	int GetHitPawnCollisionGroup() { return NativeCall<int>(this, "APrimalStructure.GetHitPawnCollisionGroup"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructure.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructure.GetMultiUseEntries", ForPC, MultiUseEntries); }
	static void GetNearbyStructuresOfClass(UWorld * World, TSubclassOf<APrimalStructure> StructureClass, const FVector * Location, float Range, TArray<APrimalStructure *> * Structures) { NativeCall<void, UWorld *, TSubclassOf<APrimalStructure>, const FVector *, float, TArray<APrimalStructure *> *>(nullptr, "APrimalStructure.GetNearbyStructuresOfClass", World, StructureClass, Location, Range, Structures); }
	int GetNumStructuresInRange(FVector AtLocation, float WithinRange) { return NativeCall<int, FVector, float>(this, "APrimalStructure.GetNumStructuresInRange", AtLocation, WithinRange); }
	static int GetNumStructuresInRangeStructureTypeFlag(UWorld * theWorld, FVector AtLocation, int TypeFlag, float WithinRange, bool bCheckBPCountStructureInRange, bool bUseInternalOctree, APrimalStructure * IgnoreStructure, bool bCheckWithAltCollisionChannel) { return NativeCall<int, UWorld *, FVector, int, float, bool, bool, APrimalStructure *, bool>(nullptr, "APrimalStructure.GetNumStructuresInRangeStructureTypeFlag", theWorld, AtLocation, TypeFlag, WithinRange, bCheckBPCountStructureInRange, bUseInternalOctree, IgnoreStructure, bCheckWithAltCollisionChannel); }
	UPaintingTexture * GetPaintingTexture() { return NativeCall<UPaintingTexture *>(this, "APrimalStructure.GetPaintingTexture"); }
	bool GetPlacingGroundLocation(AActor ** OutHitActor, FPlacementData * OutPlacementData, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle, UPrimitiveComponent ** OutComponent) { return NativeCall<bool, AActor **, FPlacementData *, APlayerController *, bool, int, UPrimitiveComponent **>(this, "APrimalStructure.GetPlacingGroundLocation", OutHitActor, OutPlacementData, PC, bFinalPlacement, SnapPointCycle, OutComponent); }
	FVector * GetSnapPointLocation(FVector * result, int SnapPointIndex, bool bOverrideTransform, FVector OverrideLoc, FRotator OverrideRot) { return NativeCall<FVector *, FVector *, int, bool, FVector, FRotator>(this, "APrimalStructure.GetSnapPointLocation", result, SnapPointIndex, bOverrideTransform, OverrideLoc, OverrideRot); }
	FName * GetSnapPointName(FName * result, int SnapPointIndex) { return NativeCall<FName *, FName *, int>(this, "APrimalStructure.GetSnapPointName", result, SnapPointIndex); }
	bool GetSnapToLocation(FVector * AtLoc, FRotator * AtRotation, FPlacementData * OutPlacementData, APrimalStructure ** OutParentStructure, int * OutSnapToIndex, APlayerController * PC, bool bFinalPlacement, int SnapPointCycle) { return NativeCall<bool, FVector *, FRotator *, FPlacementData *, APrimalStructure **, int *, APlayerController *, bool, int>(this, "APrimalStructure.GetSnapToLocation", AtLoc, AtRotation, OutPlacementData, OutParentStructure, OutSnapToIndex, PC, bFinalPlacement, SnapPointCycle); }
	void GetSnapToParentStructures(FVector AtLocation, FRotator AtRotation, int InitialMySnapIndex, APrimalStructure * InitialParent, TArray<APrimalStructure *> * SnapToParentStructures, APlayerController * PC) { NativeCall<void, FVector, FRotator, int, APrimalStructure *, TArray<APrimalStructure *> *, APlayerController *>(this, "APrimalStructure.GetSnapToParentStructures", AtLocation, AtRotation, InitialMySnapIndex, InitialParent, SnapToParentStructures, PC); }
	FSpawnPointInfo * GetSpawnPointInfo(FSpawnPointInfo * result) { return NativeCall<FSpawnPointInfo *, FSpawnPointInfo *>(this, "APrimalStructure.GetSpawnPointInfo", result); }
	FLinearColor * GetStructureColor(FLinearColor * result, int ColorRegionIndex) { return NativeCall<FLinearColor *, FLinearColor *, int>(this, "APrimalStructure.GetStructureColor", result, ColorRegionIndex); }
	FLinearColor * GetStructureColorForID(FLinearColor * result, int SetNum, int ID) { return NativeCall<FLinearColor *, FLinearColor *, int, int>(this, "APrimalStructure.GetStructureColorForID", result, SetNum, ID); }
	int GetStructureColorValue(int ColorRegionIndex) { return NativeCall<int, int>(this, "APrimalStructure.GetStructureColorValue", ColorRegionIndex); }
	float GetStructureDemolishTime() { return NativeCall<float>(this, "APrimalStructure.GetStructureDemolishTime"); }
	static void GetStructuresInRange(UWorld * theWorld, FVector AtLocation, float WithinRange, TSubclassOf<APrimalStructure> StructureClass, TArray<APrimalStructure *> * StructuresOut, bool bUseInternalOctree, APrimalStructure * IgnoreStructure) { NativeCall<void, UWorld *, FVector, float, TSubclassOf<APrimalStructure>, TArray<APrimalStructure *> *, bool, APrimalStructure *>(nullptr, "APrimalStructure.GetStructuresInRange", theWorld, AtLocation, WithinRange, StructureClass, StructuresOut, bUseInternalOctree, IgnoreStructure); }
	FVector * GetTargetPathfindingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "APrimalStructure.GetTargetPathfindingLocation", result, Attacker); }
	FVector * GetTargetingLocation(FVector * result, AActor * Attacker) { return NativeCall<FVector *, FVector *, AActor *>(this, "APrimalStructure.GetTargetingLocation", result, Attacker); }
	bool Internal_IsInSnapChain(APrimalStructure * theStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.Internal_IsInSnapChain", theStructure); }
	bool IsActiveEventStructure() { return NativeCall<bool>(this, "APrimalStructure.IsActiveEventStructure"); }
	int IsAllowedToBuild(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FPlacementData * OutPlacementData, bool bDontAdjustForMaxRange, FRotator PlayerViewRotation, bool bFinalPlacement) { return NativeCall<int, APlayerController *, FVector, FRotator, FPlacementData *, bool, FRotator, bool>(this, "APrimalStructure.IsAllowedToBuild", PC, AtLocation, AtRotation, OutPlacementData, bDontAdjustForMaxRange, PlayerViewRotation, bFinalPlacement); }
	bool IsAllowedToDemolish(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.IsAllowedToDemolish", ForPC); }
	bool IsDeprecated() { return NativeCall<bool>(this, "APrimalStructure.IsDeprecated"); }
	bool IsLinkedToWaterOrPowerSource() { return NativeCall<bool>(this, "APrimalStructure.IsLinkedToWaterOrPowerSource"); }
	bool IsNetRelevantFor(APlayerController * RealViewer, AActor * Viewer, const FVector * SrcLocation) { return NativeCall<bool, APlayerController *, AActor *, const FVector *>(this, "APrimalStructure.IsNetRelevantFor", RealViewer, Viewer, SrcLocation); }
	bool IsOnlyLinkedToFastDecayStructures() { return NativeCall<bool>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructures"); }
	bool IsOnlyLinkedToFastDecayStructuresInternal(TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> * TestedStructures) { return NativeCall<bool, TSet<APrimalStructure *,DefaultKeyFuncs<APrimalStructure *,0>,FDefaultSetAllocator> *>(this, "APrimalStructure.IsOnlyLinkedToFastDecayStructuresInternal", TestedStructures); }
	static bool IsPointNearSupplyCrateSpawn(UWorld * theWorld, FVector AtPoint) { return NativeCall<bool, UWorld *, FVector>(nullptr, "APrimalStructure.IsPointNearSupplyCrateSpawn", theWorld, AtPoint); }
	static bool IsPointObstructedByWorldGeometry(UWorld * ForWorld, FVector ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bIgnoreFoliage, float OBSTRUCTION_CHECK_DIST) { return NativeCall<bool, UWorld *, FVector, bool, bool, bool, float>(nullptr, "APrimalStructure.IsPointObstructedByWorldGeometry", ForWorld, ThePoint, bIgnoreTerrain, bOnlyCheckTerrain, bIgnoreFoliage, OBSTRUCTION_CHECK_DIST); }
	bool IsRepairAllowed() { return NativeCall<bool>(this, "APrimalStructure.IsRepairAllowed"); }
	bool IsTargetable() { return NativeCall<bool>(this, "APrimalStructure.IsTargetable"); }
	bool IsValidSnapPointFrom_Implementation(APrimalStructure * ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure *, int>(this, "APrimalStructure.IsValidSnapPointFrom_Implementation", ChildStructure, MySnapPointToIndex); }
	void LinkStructure(APrimalStructure * NewLinkedStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.LinkStructure", NewLinkedStructure); }
	void LoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.LoadedFromSaveGame"); }
	void MultiRefreshVariantSettings_Implementation(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.MultiRefreshVariantSettings_Implementation", NewVariantIndex); }
	void MultiSetPickupAllowedBeforeNetworkTime_Implementation(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime_Implementation", NewTime); }
	void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects_Implementation"); }
	void NetResetClientReceivedStructuersPlacedOnFloors_Implementation() { NativeCall<void>(this, "APrimalStructure.NetResetClientReceivedStructuersPlacedOnFloors_Implementation"); }
	void NetSetIgnoreDestructionEffects_Implementation(bool bNewIgnoreDestructionEffects) { NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects_Implementation", bNewIgnoreDestructionEffects); }
	void NetSpawnCoreStructureDeathActor_Implementation() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor_Implementation"); }
	void NetUpdateOriginalOwnerNameAndID_Implementation(int NewOriginalOwnerID, const FString * NewOriginalOwnerName) { NativeCall<void, int, const FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID_Implementation", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName_Implementation(int NewTeam, const FString * NewOwnerName) { NativeCall<void, int, const FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName_Implementation", NewTeam, NewOwnerName); }
	void NonPlayerFinalStructurePlacement(int PlacementTargetingTeam, int PlacementOwningPlayerID, const FString * PlacementOwningPlayerName, APrimalStructure * ForcePrimaryParent) { NativeCall<void, int, int, const FString *, APrimalStructure *>(this, "APrimalStructure.NonPlayerFinalStructurePlacement", PlacementTargetingTeam, PlacementOwningPlayerID, PlacementOwningPlayerName, ForcePrimaryParent); }
	void OnClientReceiveStructuresPlacedOnFloor(const TArray<APrimalStructure *> * NewStructuresPlacedOnFloor) { NativeCall<void, const TArray<APrimalStructure *> *>(this, "APrimalStructure.OnClientReceiveStructuresPlacedOnFloor", NewStructuresPlacedOnFloor); }
	void OnRep_AttachmentReplication() { NativeCall<void>(this, "APrimalStructure.OnRep_AttachmentReplication"); }
	void OnRep_CurrentVariant() { NativeCall<void>(this, "APrimalStructure.OnRep_CurrentVariant"); }
	void OnRep_StructureColors() { NativeCall<void>(this, "APrimalStructure.OnRep_StructureColors"); }
	void OnVersionChange(bool * doDestroy) { NativeCall<void, bool *>(this, "APrimalStructure.OnVersionChange", doDestroy); }
	void OverrideOwner(AActor * NewOwner, bool ForceOnlyRelevantToOwner) { NativeCall<void, AActor *, bool>(this, "APrimalStructure.OverrideOwner", NewOwner, ForceOnlyRelevantToOwner); }
	void PickupStructureAndDependingLinkedStructures(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.PickupStructureAndDependingLinkedStructures", ForPC); }
	void PlacedStructure(AShooterPlayerController * PC) { NativeCall<void, AShooterPlayerController *>(this, "APrimalStructure.PlacedStructure", PC); }
	void PlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.PlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PostInitializeComponents"); }
	void PostSpawnInitialize(const FVector * SpawnLocation, const FRotator * SpawnRotation, AActor * InOwner, APawn * InInstigator, bool bRemoteOwned, bool bNoFail, bool bDeferConstruction, bool bDeferBeginPlay) { NativeCall<void, const FVector *, const FRotator *, AActor *, APawn *, bool, bool, bool, bool>(this, "APrimalStructure.PostSpawnInitialize", SpawnLocation, SpawnRotation, InOwner, InInstigator, bRemoteOwned, bNoFail, bDeferConstruction, bDeferBeginPlay); }
	void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructure.PostSpawnInitialize"); }
	void PreInitializeComponents() { NativeCall<void>(this, "APrimalStructure.PreInitializeComponents"); }
	void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructure.PrepareAsPlacementPreview"); }
	bool PreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructure.PreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool PreventPlacingOnFloorClass(TSubclassOf<APrimalStructure> FloorClass) { return NativeCall<bool, TSubclassOf<APrimalStructure>>(this, "APrimalStructure.PreventPlacingOnFloorClass", FloorClass); }
	void PreviewCleanUpTree(APrimalStructure * StartingStructure, TArray<APrimalStructure *> * OutRemovedStructures) { NativeCall<void, APrimalStructure *, TArray<APrimalStructure *> *>(this, "APrimalStructure.PreviewCleanUpTree", StartingStructure, OutRemovedStructures); }
	void ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool bCheckedBox) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructure.ProcessEditText", ForPC, TextToUse, bCheckedBox); }
	void RefreshStructureColors(UMeshComponent * ForceRefreshComponent) { NativeCall<void, UMeshComponent *>(this, "APrimalStructure.RefreshStructureColors", ForceRefreshComponent); }
	bool RefreshStructurePlacement(APlayerController * PC, FVector AtLocation, FRotator AtRotation, FRotator PlayerViewRotation, APawn * AttachToPawn, FName BoneName, bool bFlipped) { return NativeCall<bool, APlayerController *, FVector, FRotator, FRotator, APawn *, FName, bool>(this, "APrimalStructure.RefreshStructurePlacement", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bFlipped); }
	void RefreshVariantSettings(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.RefreshVariantSettings", NewVariantIndex); }
	void RemoveLinkedStructure(APrimalStructure * Structure, AController * InstigatorController, AActor * DamageCauser) { NativeCall<void, APrimalStructure *, AController *, AActor *>(this, "APrimalStructure.RemoveLinkedStructure", Structure, InstigatorController, DamageCauser); }
	void RepairCheckTimer() { NativeCall<void>(this, "APrimalStructure.RepairCheckTimer"); }
	static void ReprocessTree(TArray<APrimalStructure *> * StartingStructures, AController * InstigatorController, AActor * DamageCauser, bool bPickup) { NativeCall<void, TArray<APrimalStructure *> *, AController *, AActor *, bool>(nullptr, "APrimalStructure.ReprocessTree", StartingStructures, InstigatorController, DamageCauser, bPickup); }
	void ServerRequestUseItemWithActor(APlayerController * ForPC, UObject * anItem, int AdditionalData) { NativeCall<void, APlayerController *, UObject *, int>(this, "APrimalStructure.ServerRequestUseItemWithActor", ForPC, anItem, AdditionalData); }
	void SetBedEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetBedEnabled", bEnabled); }
	void SetBiomeZoneVolume(ABiomeZoneVolume * theVolume) { NativeCall<void, ABiomeZoneVolume *>(this, "APrimalStructure.SetBiomeZoneVolume", theVolume); }
	void SetBoundsScale(float NewScale) { NativeCall<void, float>(this, "APrimalStructure.SetBoundsScale", NewScale); }
	void SetDinoSaddleAttachment(APrimalDinoCharacter * myDino, FName BoneName, FVector RelLoc, FRotator RelRot, bool bMaintainWorldPosition) { NativeCall<void, APrimalDinoCharacter *, FName, FVector, FRotator, bool>(this, "APrimalStructure.SetDinoSaddleAttachment", myDino, BoneName, RelLoc, RelRot, bMaintainWorldPosition); }
	void SetDynamicMobility() { NativeCall<void>(this, "APrimalStructure.SetDynamicMobility"); }
	void SetEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabled", bEnabled); }
	void SetEnabledPrimarySnappedStructureParent_Implementation(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent_Implementation", bEnabled); }
	void SetHarvestingActive(bool bActive, bool bOverrideBaseHealth, float BaseHarvestHealthMult, bool bAssignToTribe, int AssignedToTribeID) { NativeCall<void, bool, bool, float, bool, int>(this, "APrimalStructure.SetHarvestingActive", bActive, bOverrideBaseHealth, BaseHarvestHealthMult, bAssignToTribe, AssignedToTribeID); }
	void SetLinkedIDs() { NativeCall<void>(this, "APrimalStructure.SetLinkedIDs"); }
	void SetStaticMobility() { NativeCall<void>(this, "APrimalStructure.SetStaticMobility"); }
	void SetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.SetStructureCollisionChannels"); }
	void SetStructureColorValue(int ColorRegionIndex, int SetVal) { NativeCall<void, int, int>(this, "APrimalStructure.SetStructureColorValue", ColorRegionIndex, SetVal); }
	bool SetVariant(int VariantIndex, bool bForceSet) { return NativeCall<bool, int, bool>(this, "APrimalStructure.SetVariant", VariantIndex, bForceSet); }
	void SetupDynamicMeshMaterials(UMeshComponent * meshComp) { NativeCall<void, UMeshComponent *>(this, "APrimalStructure.SetupDynamicMeshMaterials", meshComp); }
	bool ShouldInstance(UProperty * Property) { return NativeCall<bool, UProperty *>(this, "APrimalStructure.ShouldInstance", Property); }
	void StartRepair() { NativeCall<void>(this, "APrimalStructure.StartRepair"); }
	void Stasis() { NativeCall<void>(this, "APrimalStructure.Stasis"); }
	void StructureHarvestingDepleted(UPrimalHarvestingComponent * fromComponent) { NativeCall<void, UPrimalHarvestingComponent *>(this, "APrimalStructure.StructureHarvestingDepleted", fromComponent); }
	float TakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { return NativeCall<float, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalStructure.TakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool TickPlacingStructure(APrimalStructurePlacer * PlacerActor, float DeltaTime) { return NativeCall<bool, APrimalStructurePlacer *, float>(this, "APrimalStructure.TickPlacingStructure", PlacerActor, DeltaTime); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructure.TryMultiUse", ForPC, UseIndex); }
	void Unstasis() { NativeCall<void>(this, "APrimalStructure.Unstasis"); }
	void UpdateStencilValues() { NativeCall<void>(this, "APrimalStructure.UpdateStencilValues"); }
	void UpdateStencilValuesWithStenilDepth(EStencilAlliance::Type InAlliance) { NativeCall<void, EStencilAlliance::Type>(this, "APrimalStructure.UpdateStencilValuesWithStenilDepth", InAlliance); }
	void UpdateTribeGroupStructureRank_Implementation(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank_Implementation", NewRank); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.UpdatedHealth", bDoReplication); }
	bool UseDynamicMobility() { return NativeCall<bool>(this, "APrimalStructure.UseDynamicMobility"); }
	void SetContainerActive(bool bFromDino) { NativeCall<void, bool>(this, "APrimalStructure.SetContainerActive", bFromDino); }
	bool BPAllowPickupGiveItem(APlayerController * ForPC) { return NativeCall<bool, APlayerController *>(this, "APrimalStructure.BPAllowPickupGiveItem", ForPC); }
	bool BPAllowSnapRotationForStructure(int ThisSnapPointIndex, FName ThisSnapPointName, APrimalStructure * OtherStructure, int OtherStructureSnapPointIndex, FName OtherStructureSnapPointName) { return NativeCall<bool, int, FName, APrimalStructure *, int, FName>(this, "APrimalStructure.BPAllowSnapRotationForStructure", ThisSnapPointIndex, ThisSnapPointName, OtherStructure, OtherStructureSnapPointIndex, OtherStructureSnapPointName); }
	bool BPAllowSnappingWith(APrimalStructure * OtherStructure, APlayerController * ForPC) { return NativeCall<bool, APrimalStructure *, APlayerController *>(this, "APrimalStructure.BPAllowSnappingWith", OtherStructure, ForPC); }
	bool BPAllowSwitchToVariant(int VariantIndex) { return NativeCall<bool, int>(this, "APrimalStructure.BPAllowSwitchToVariant", VariantIndex); }
	void BPApplyCustomDurabilityOnPickup(UPrimalItem * pickedup) { NativeCall<void, UPrimalItem *>(this, "APrimalStructure.BPApplyCustomDurabilityOnPickup", pickedup); }
	void BPBeginPreview() { NativeCall<void>(this, "APrimalStructure.BPBeginPreview"); }
	int BPCheckItemRequiementsToBuild(UPrimalItem * ItemToConsumed) { return NativeCall<int, UPrimalItem *>(this, "APrimalStructure.BPCheckItemRequiementsToBuild", ItemToConsumed); }
	void BPDefaultProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool checkedBox) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructure.BPDefaultProcessEditText", ForPC, TextToUse, checkedBox); }
	bool BPForceConsideredEnemyFoundation(APlayerController * PC, APrimalStructure * ForNewStructure, const FVector * TestAtLocation) { return NativeCall<bool, APlayerController *, APrimalStructure *, const FVector *>(this, "APrimalStructure.BPForceConsideredEnemyFoundation", PC, ForNewStructure, TestAtLocation); }
	void BPGetAggroDinoOnDamageSettings(TArray<FName> * AggroDinoClassesCustomTags, float * AggroDinoClassesRange) { NativeCall<void, TArray<FName> *, float *>(this, "APrimalStructure.BPGetAggroDinoOnDamageSettings", AggroDinoClassesCustomTags, AggroDinoClassesRange); }
	float BPGetAmmoBoxReloadPercent() { return NativeCall<float>(this, "APrimalStructure.BPGetAmmoBoxReloadPercent"); }
	void BPGetInfoFromConsumedItemForPlacedStructure(UPrimalItem * ItemToConsumed) { NativeCall<void, UPrimalItem *>(this, "APrimalStructure.BPGetInfoFromConsumedItemForPlacedStructure", ItemToConsumed); }
	bool BPHandleBedFastTravel(AShooterPlayerController * ForPC, APrimalStructure * ToBed) { return NativeCall<bool, AShooterPlayerController *, APrimalStructure *>(this, "APrimalStructure.BPHandleBedFastTravel", ForPC, ToBed); }
	void BPHandleStructureEnabled(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.BPHandleStructureEnabled", bEnabled); }
	bool BPImpactEffect(const FHitResult * HitRes, const FVector * ShootDirection) { return NativeCall<bool, const FHitResult *, const FVector *>(this, "APrimalStructure.BPImpactEffect", HitRes, ShootDirection); }
	int BPIsAllowedToBuild(const FPlacementData * OutPlacementData, int CurrentAllowedReason) { return NativeCall<int, const FPlacementData *, int>(this, "APrimalStructure.BPIsAllowedToBuild", OutPlacementData, CurrentAllowedReason); }
	int BPIsAllowedToBuildEx(const FPlacementData * OutPlacementData, int CurrentAllowedReason, APlayerController * PC, bool bFinalPlacement, bool bChoosingRotation) { return NativeCall<int, const FPlacementData *, int, APlayerController *, bool, bool>(this, "APrimalStructure.BPIsAllowedToBuildEx", OutPlacementData, CurrentAllowedReason, PC, bFinalPlacement, bChoosingRotation); }
	void BPNotifyAmmoBoxReloadedStructure(APrimalStructure * ReloadedStructure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.BPNotifyAmmoBoxReloadedStructure", ReloadedStructure); }
	void BPOnDemolish(APlayerController * ForPC, AActor * DamageCauser) { NativeCall<void, APlayerController *, AActor *>(this, "APrimalStructure.BPOnDemolish", ForPC, DamageCauser); }
	void BPOnStructurePickup(APlayerController * PlayerController, TSubclassOf<UPrimalItem> ItemType, UPrimalItem * NewlyPickedUpItem, bool bIsQuickPickup) { NativeCall<void, APlayerController *, TSubclassOf<UPrimalItem>, UPrimalItem *, bool>(this, "APrimalStructure.BPOnStructurePickup", PlayerController, ItemType, NewlyPickedUpItem, bIsQuickPickup); }
	void BPOnVariantSwitch(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.BPOnVariantSwitch", NewVariantIndex); }
	bool BPOverrideAllowStructureAccess(AShooterPlayerController * ForPC, bool bIsAccessAllowed, bool bForInventoryOnly) { return NativeCall<bool, AShooterPlayerController *, bool, bool>(this, "APrimalStructure.BPOverrideAllowStructureAccess", ForPC, bIsAccessAllowed, bForInventoryOnly); }
	FString * BPOverrideCantBuildReasonString(FString * result, int CantBuildReason) { return NativeCall<FString *, FString *, int>(this, "APrimalStructure.BPOverrideCantBuildReasonString", result, CantBuildReason); }
	bool BPOverrideDemolish(AShooterPlayerController * ForPC) { return NativeCall<bool, AShooterPlayerController *>(this, "APrimalStructure.BPOverrideDemolish", ForPC); }
	FRotator * BPOverridePlacementRotation(FRotator * result, FVector ViewPos, FRotator ViewRot) { return NativeCall<FRotator *, FRotator *, FVector, FRotator>(this, "APrimalStructure.BPOverridePlacementRotation", result, ViewPos, ViewRot); }
	bool BPOverrideSnappedFromTransform(APrimalStructure * parentStructure, int ParentSnapFromIndex, FName ParentSnapFromName, FVector UnsnappedPlacementPos, FRotator UnsnappedPlacementRot, FVector SnappedPlacementPos, FRotator SnappedPlacementRot, int SnapToIndex, FName SnapToName, FVector * OutLocation, FRotator * OutRotation, int * bForceInvalidateSnap) { return NativeCall<bool, APrimalStructure *, int, FName, FVector, FRotator, FVector, FRotator, int, FName, FVector *, FRotator *, int *>(this, "APrimalStructure.BPOverrideSnappedFromTransform", parentStructure, ParentSnapFromIndex, ParentSnapFromName, UnsnappedPlacementPos, UnsnappedPlacementRot, SnappedPlacementPos, SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap); }
	bool BPOverrideSnappedToTransform(APrimalStructure * childStructure, int ChildSnapFromIndex, FName ChildSnapFromName, FVector UnsnappedPlacementPos, FRotator UnsnappedPlacementRot, FVector SnappedPlacementPos, FRotator SnappedPlacementRot, int SnapToIndex, FName SnapToName, FVector * OutLocation, FRotator * OutRotation, int * bForceInvalidateSnap) { return NativeCall<bool, APrimalStructure *, int, FName, FVector, FRotator, FVector, FRotator, int, FName, FVector *, FRotator *, int *>(this, "APrimalStructure.BPOverrideSnappedToTransform", childStructure, ChildSnapFromIndex, ChildSnapFromName, UnsnappedPlacementPos, UnsnappedPlacementRot, SnappedPlacementPos, SnappedPlacementRot, SnapToIndex, SnapToName, OutLocation, OutRotation, bForceInvalidateSnap); }
	FVector * BPOverrideTargetLocation(FVector * result, const FVector * attackPos) { return NativeCall<FVector *, FVector *, const FVector *>(this, "APrimalStructure.BPOverrideTargetLocation", result, attackPos); }
	void BPPlacedStructure(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.BPPlacedStructure", ForPC); }
	void BPPlayDying(float KillingDamage, const FDamageEvent * DamageEvent, APawn * InstigatingPawn, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, APawn *, AActor *>(this, "APrimalStructure.BPPlayDying", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void BPPostLoadedFromSaveGame() { NativeCall<void>(this, "APrimalStructure.BPPostLoadedFromSaveGame"); }
	void BPPostSetStructureCollisionChannels() { NativeCall<void>(this, "APrimalStructure.BPPostSetStructureCollisionChannels"); }
	bool BPPreventCharacterBasing(AActor * OtherActor, UPrimitiveComponent * BasedOnComponent) { return NativeCall<bool, AActor *, UPrimitiveComponent *>(this, "APrimalStructure.BPPreventCharacterBasing", OtherActor, BasedOnComponent); }
	bool BPPreventPlacementOnPawn(APlayerController * PC, APrimalCharacter * ForCharacter, FName ForBone) { return NativeCall<bool, APlayerController *, APrimalCharacter *, FName>(this, "APrimalStructure.BPPreventPlacementOnPawn", PC, ForCharacter, ForBone); }
	bool BPPreventPlacingOnFloorStructure(const FPlacementData * theOutPlacementData, APrimalStructure * FloorStructure) { return NativeCall<bool, const FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventPlacingOnFloorStructure", theOutPlacementData, FloorStructure); }
	bool BPPreventPlacingStructureOntoMe(APlayerController * PC, APrimalStructure * ForNewStructure, const FHitResult * ForHitResult) { return NativeCall<bool, APlayerController *, APrimalStructure *, const FHitResult *>(this, "APrimalStructure.BPPreventPlacingStructureOntoMe", PC, ForNewStructure, ForHitResult); }
	bool BPPreventSpawnForPlayer(AShooterPlayerController * PC, bool bCheckCooldownTime, APrimalStructure * FromStructure) { return NativeCall<bool, AShooterPlayerController *, bool, APrimalStructure *>(this, "APrimalStructure.BPPreventSpawnForPlayer", PC, bCheckCooldownTime, FromStructure); }
	bool BPPreventUsingAsFloorForStructure(const FPlacementData * theOutPlacementData, APrimalStructure * StructureToPlaceOnMe) { return NativeCall<bool, const FPlacementData *, APrimalStructure *>(this, "APrimalStructure.BPPreventUsingAsFloorForStructure", theOutPlacementData, StructureToPlaceOnMe); }
	void BPRefreshedStructureColors() { NativeCall<void>(this, "APrimalStructure.BPRefreshedStructureColors"); }
	void BPStructurePreGetMultiUseEntries(APlayerController * ForPC) { NativeCall<void, APlayerController *>(this, "APrimalStructure.BPStructurePreGetMultiUseEntries", ForPC); }
	bool BPTreatAsFoundationForSnappedStructure(APrimalStructure * OtherStructure, const FPlacementData * WithPlacementData) { return NativeCall<bool, APrimalStructure *, const FPlacementData *>(this, "APrimalStructure.BPTreatAsFoundationForSnappedStructure", OtherStructure, WithPlacementData); }
	void BPTriggerStasisEvent() { NativeCall<void>(this, "APrimalStructure.BPTriggerStasisEvent"); }
	void BPUnstasis() { NativeCall<void>(this, "APrimalStructure.BPUnstasis"); }
	void BPUpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalStructure.BPUpdatedHealth", bDoReplication); }
	bool BPUseCountStructureInRange() { return NativeCall<bool>(this, "APrimalStructure.BPUseCountStructureInRange"); }
	void BP_OnPaintingComponentInitialized(const UStructurePaintingComponent * PaintingComp) { NativeCall<void, const UStructurePaintingComponent *>(this, "APrimalStructure.BP_OnPaintingComponentInitialized", PaintingComp); }
	void BlueprintDrawHUD(AShooterHUD * HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD *, float, float>(this, "APrimalStructure.BlueprintDrawHUD", HUD, CenterX, CenterY); }
	void BlueprintDrawPreviewHUD(AShooterHUD * HUD, float CenterX, float CenterY) { NativeCall<void, AShooterHUD *, float, float>(this, "APrimalStructure.BlueprintDrawPreviewHUD", HUD, CenterX, CenterY); }
	void ClearCustomColors() { NativeCall<void>(this, "APrimalStructure.ClearCustomColors"); }
	void ClientUpdateLinkedStructures(const TArray<unsigned int> * NewLinkedStructures) { NativeCall<void, const TArray<unsigned int> *>(this, "APrimalStructure.ClientUpdateLinkedStructures", NewLinkedStructures); }
	bool IsValidForSnappingFrom(APrimalStructure * OtherStructure) { return NativeCall<bool, APrimalStructure *>(this, "APrimalStructure.IsValidForSnappingFrom", OtherStructure); }
	bool IsValidSnapPointFrom(APrimalStructure * ParentStructure, int MySnapPointFromIndex) { return NativeCall<bool, APrimalStructure *, int>(this, "APrimalStructure.IsValidSnapPointFrom", ParentStructure, MySnapPointFromIndex); }
	bool IsValidSnapPointTo(APrimalStructure * ChildStructure, int MySnapPointToIndex) { return NativeCall<bool, APrimalStructure *, int>(this, "APrimalStructure.IsValidSnapPointTo", ChildStructure, MySnapPointToIndex); }
	void MultiAddStructuresPlacedOnFloor(APrimalStructure * structure) { NativeCall<void, APrimalStructure *>(this, "APrimalStructure.MultiAddStructuresPlacedOnFloor", structure); }
	void MultiRefreshVariantSettings(int NewVariantIndex) { NativeCall<void, int>(this, "APrimalStructure.MultiRefreshVariantSettings", NewVariantIndex); }
	void MultiSetPickupAllowedBeforeNetworkTime(long double NewTime) { NativeCall<void, long double>(this, "APrimalStructure.MultiSetPickupAllowedBeforeNetworkTime", NewTime); }
	void NetDoSpawnEffects() { NativeCall<void>(this, "APrimalStructure.NetDoSpawnEffects"); }
	void NetSetIgnoreDestructionEffects(bool bNewIgnoreDestructionEffects) { NativeCall<void, bool>(this, "APrimalStructure.NetSetIgnoreDestructionEffects", bNewIgnoreDestructionEffects); }
	void NetSpawnCoreStructureDeathActor() { NativeCall<void>(this, "APrimalStructure.NetSpawnCoreStructureDeathActor"); }
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, const FString * NewOriginalOwnerName) { NativeCall<void, int, const FString *>(this, "APrimalStructure.NetUpdateOriginalOwnerNameAndID", NewOriginalOwnerID, NewOriginalOwnerName); }
	void NetUpdateTeamAndOwnerName(int NewTeam, const FString * NewOwnerName) { NativeCall<void, int, const FString *>(this, "APrimalStructure.NetUpdateTeamAndOwnerName", NewTeam, NewOwnerName); }
	void OnStructurePlacementRefreshed() { NativeCall<void>(this, "APrimalStructure.OnStructurePlacementRefreshed"); }
	void SetEnabledPrimarySnappedStructureParent(bool bEnabled) { NativeCall<void, bool>(this, "APrimalStructure.SetEnabledPrimarySnappedStructureParent", bEnabled); }
	void UpdateTribeGroupStructureRank(char NewRank) { NativeCall<void, char>(this, "APrimalStructure.UpdateTribeGroupStructureRank", NewRank); }
};

