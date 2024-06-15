#pragma once

#include "BaseDeclarations.h"
#include "AController.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAIRequestID.h"
#include "URecastFilter_UseDefaultArea.h"
#include "FMoveRequestCustomData.h"

struct AAIController : AController
{
	char __padding[0xd8L];
	FFocusKnowledge& FocusInformationField() { return *GetNativePointerField<FFocusKnowledge*>(this, "AAIController.FocusInformation"); }
	UAIPerceptionComponent * PerceptionComponentField() { return GetNativePointerField<UAIPerceptionComponent *>(this, "AAIController.PerceptionComponent"); }
	FVector& MoveTowardTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "AAIController.MoveTowardTargetOffset"); }
	FVector& TargetFocalPositionOffsetField() { return *GetNativePointerField<FVector*>(this, "AAIController.TargetFocalPositionOffset"); }
	float& ReachedDestinationThresholdOffsetField() { return *GetNativePointerField<float*>(this, "AAIController.ReachedDestinationThresholdOffset"); }
	float& MovementGoalHeightField() { return *GetNativePointerField<float*>(this, "AAIController.MovementGoalHeight"); }
	EPathFollowingStatus::Type& StatusField() { return *GetNativePointerField<EPathFollowingStatus::Type*>(this, "AAIController.Status"); }
	unsigned int& RequestMoveIDField() { return *GetNativePointerField<unsigned int*>(this, "AAIController.RequestMoveID"); }
	FBasedPosition& CurrentDestinationField() { return *GetNativePointerField<FBasedPosition*>(this, "AAIController.CurrentDestination"); }
	FVector& MoveSegmentDirectionField() { return *GetNativePointerField<FVector*>(this, "AAIController.MoveSegmentDirection"); }
	int& MoveSegmentStartIndexField() { return *GetNativePointerField<int*>(this, "AAIController.MoveSegmentStartIndex"); }
	int& MoveSegmentEndIndexField() { return *GetNativePointerField<int*>(this, "AAIController.MoveSegmentEndIndex"); }
	float& CurrentAcceptanceRadiusField() { return *GetNativePointerField<float*>(this, "AAIController.CurrentAcceptanceRadius"); }

	// Functions

	void AbortMove(const FString * Reason, FAIRequestID RequestID, bool bResetVelocity, bool bSilent, char MessageFlags) { NativeCall<void, const FString *, FAIRequestID, bool, bool, char>(this, "AAIController.AbortMove", Reason, RequestID, bResetVelocity, bSilent, MessageFlags); }
	void ClearFocus(char InPriority) { NativeCall<void, char>(this, "AAIController.ClearFocus", InPriority); }
	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "AAIController.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
	void FollowPathSegment(float DeltaTime) { NativeCall<void, float>(this, "AAIController.FollowPathSegment", DeltaTime); }
	FVector * GetFocalPoint(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AAIController.GetFocalPoint", result); }
	FVector * GetImmediateMoveDestination(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AAIController.GetImmediateMoveDestination", result); }
	FVector * GetMoveFocus(FVector * result) { return NativeCall<FVector *, FVector *>(this, "AAIController.GetMoveFocus", result); }
	EPathFollowingStatus::Type GetMoveStatus() { return NativeCall<EPathFollowingStatus::Type>(this, "AAIController.GetMoveStatus"); }
	void GetPlayerViewPoint(FVector * out_Location, FRotator * out_Rotation) { NativeCall<void, FVector *, FRotator *>(this, "AAIController.GetPlayerViewPoint", out_Location, out_Rotation); }
	bool HasPartialPath() { return NativeCall<bool>(this, "AAIController.HasPartialPath"); }
	bool HasReached(const FVector * TestPoint, float InAcceptanceRadius, bool bExactSpot) { return NativeCall<bool, const FVector *, float, bool>(this, "AAIController.HasReached", TestPoint, InAcceptanceRadius, bExactSpot); }
	bool HasReached(AActor * TestGoal, float InAcceptanceRadius, bool bExactSpot) { return NativeCall<bool, AActor *, float, bool>(this, "AAIController.HasReached", TestGoal, InAcceptanceRadius, bExactSpot); }
	bool HasReachedCurrentTarget(const FVector * CurrentLocation) { return NativeCall<bool, const FVector *>(this, "AAIController.HasReachedCurrentTarget", CurrentLocation); }
	bool HasReachedDestination(const FVector * CurrentLocation) { return NativeCall<bool, const FVector *>(this, "AAIController.HasReachedDestination", CurrentLocation); }
	bool HasReachedInternal(const FVector * Goal, float GoalRadius, float GoalHalfHeight, const FVector * AgentLocation, float RadiusThreshold, bool bUseAgentRadius) { return NativeCall<bool, const FVector *, float, float, const FVector *, float, bool>(this, "AAIController.HasReachedInternal", Goal, GoalRadius, GoalHalfHeight, AgentLocation, RadiusThreshold, bUseAgentRadius); }
	void K2_ClearFocus() { NativeCall<void>(this, "AAIController.K2_ClearFocus"); }
	void K2_SetFocalPoint(FVector FP, bool bOffsetFromBase) { NativeCall<void, FVector, bool>(this, "AAIController.K2_SetFocalPoint", FP, bOffsetFromBase); }
	void K2_SetFocus(AActor * NewFocus) { NativeCall<void, AActor *>(this, "AAIController.K2_SetFocus", NewFocus); }
	bool LineOfSightTo(AActor * Other, FVector ViewPoint, bool bAlternateChecks) { return NativeCall<bool, AActor *, FVector, bool>(this, "AAIController.LineOfSightTo", Other, ViewPoint, bAlternateChecks); }
	EPathFollowingRequestResult::Type MoveToActor(AActor * Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass) { return NativeCall<EPathFollowingRequestResult::Type, AActor *, float, bool, bool, bool, TSubclassOf<UNavigationQueryFilter>>(this, "AAIController.MoveToActor", Goal, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bCanStrafe, FilterClass); }
	EPathFollowingRequestResult::Type MoveToLocation(const FVector * Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool WasPlayerCommand) { return NativeCall<EPathFollowingRequestResult::Type, const FVector *, float, bool, bool, bool, bool, TSubclassOf<UNavigationQueryFilter>, bool>(this, "AAIController.MoveToLocation", Dest, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bProjectDestinationToNavigation, bCanStrafe, FilterClass, WasPlayerCommand); }
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result) { NativeCall<void, FAIRequestID, EPathFollowingResult::Type>(this, "AAIController.OnMoveCompleted", RequestID, Result); }
	void OnPathFinished(EPathFollowingResult::Type Result) { NativeCall<void, EPathFollowingResult::Type>(this, "AAIController.OnPathFinished", Result); }
	void Possess(APawn * InPawn) { NativeCall<void, APawn *>(this, "AAIController.Possess", InPawn); }
	void PostInitializeComponents() { NativeCall<void>(this, "AAIController.PostInitializeComponents"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AAIController.PostRegisterAllComponents"); }
	FAIRequestID * RequestMove(FAIRequestID * result, TSharedPtr<FNavigationPath,1> Path, AActor * Goal, float AcceptanceRadius, bool bStopOnOverlap, TSharedPtr<FMoveRequestCustomData,1> CustomData) { return NativeCall<FAIRequestID *, FAIRequestID *, TSharedPtr<FNavigationPath,1>, AActor *, float, bool, TSharedPtr<FMoveRequestCustomData,1>>(this, "AAIController.RequestMove", result, Path, Goal, AcceptanceRadius, bStopOnOverlap, CustomData); }
	FAIRequestID * RequestMovement(FAIRequestID * result, TSharedPtr<FNavigationPath,1> InPath, AActor * InDestinationActor, float InAcceptanceRadius, bool bInStopOnOverlap, TSharedPtr<FMoveRequestCustomData,1> InGameData) { return NativeCall<FAIRequestID *, FAIRequestID *, TSharedPtr<FNavigationPath,1>, AActor *, float, bool, TSharedPtr<FMoveRequestCustomData,1>>(this, "AAIController.RequestMovement", result, InPath, InDestinationActor, InAcceptanceRadius, bInStopOnOverlap, InGameData); }
	void Reset() { NativeCall<void>(this, "AAIController.Reset"); }
	void ResetMovement() { NativeCall<void>(this, "AAIController.ResetMovement"); }
	bool RunBehaviorTree(UBehaviorTree * BTAsset) { return NativeCall<bool, UBehaviorTree *>(this, "AAIController.RunBehaviorTree", BTAsset); }
	void SetFocalPoint(FVector FP, bool bOffsetFromBase, char InPriority) { NativeCall<void, FVector, bool, char>(this, "AAIController.SetFocalPoint", FP, bOffsetFromBase, InPriority); }
	void SetFocus(AActor * NewFocus, char InPriority) { NativeCall<void, AActor *, char>(this, "AAIController.SetFocus", NewFocus, InPriority); }
	void SetMoveSegment(int SegmentStartIndex) { NativeCall<void, int>(this, "AAIController.SetMoveSegment", SegmentStartIndex); }
	void StopMovement() { NativeCall<void>(this, "AAIController.StopMovement"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AAIController.Tick", DeltaTime); }
	void UnPossess() { NativeCall<void>(this, "AAIController.UnPossess"); }
	void UpdateControlRotation(float DeltaTime, bool bUpdatePawn) { NativeCall<void, float, bool>(this, "AAIController.UpdateControlRotation", DeltaTime, bUpdatePawn); }
	void UpdateMoveFocus() { NativeCall<void>(this, "AAIController.UpdateMoveFocus"); }
	void UpdatePathSegment() { NativeCall<void>(this, "AAIController.UpdatePathSegment"); }
	bool UseBlackboard(UBlackboardData * BlackboardAsset) { return NativeCall<bool, UBlackboardData *>(this, "AAIController.UseBlackboard", BlackboardAsset); }
	void OnPossess(APawn * PossessedPawn) { NativeCall<void, APawn *>(this, "AAIController.OnPossess", PossessedPawn); }
};

struct APrimalDinoAIController : AAIController
{
	char __padding[0x318L];
	float& DieIfLeftWaterWanderMinimumWaterHeightMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterWanderMinimumWaterHeightMultiplier"); }
	float& DieIfLeftWaterReachedRadiusDistanceCheckMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterReachedRadiusDistanceCheckMultiplier"); }
	float& DieIfLeftWaterTargetUnsubmergedTimeoutField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetUnsubmergedTimeout"); }
	float& LandDinoMaxWaterTargetDepthCapsuleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxWaterTargetDepthCapsuleMultiplier"); }
	float& ExtraCorpseTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ExtraCorpseTargetingRange"); }
	float& FleeFromAttackCoolDownTimeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackCoolDownTime"); }
	float& FleeFromAttackTimeLimitField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FleeFromAttackTimeLimit"); }
	float& ForceFleeUnderHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForceFleeUnderHealthPercentage"); }
	bool& bFleeOnCriticalHealthField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bFleeOnCriticalHealth"); }
	float& DieIfLeftWaterTargetingRequiresFreeDepthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DieIfLeftWaterTargetingRequiresFreeDepth"); }
	long double& LastBlockadeCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastBlockadeCheckTime"); }
	long double& LastMovingAroundBlockadeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastMovingAroundBlockadeTime"); }
	float& MovingAroundBlockadeDirectionField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MovingAroundBlockadeDirection"); }
	FVector& MovingAroundBlockadePointField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.MovingAroundBlockadePoint"); }
	float& LastBlockadeWidthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LastBlockadeWidth"); }
	FVector& LastBlockadeHitNormalField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastBlockadeHitNormal"); }
	FVector& LastBlockadeHitLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastBlockadeHitLocation"); }
	FVector& StartMovingAroundBlockadeLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.StartMovingAroundBlockadeLocation"); }
	float& AttackDestinationOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackDestinationOffset"); }
	bool& bUseOverlapTargetCheckField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseOverlapTargetCheck"); }
	bool& bNotifyNeighborsWithoutDamageField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bNotifyNeighborsWithoutDamage"); }
	bool& bUseBPShouldNotifyNeighborField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPShouldNotifyNeighbor"); }
	bool& bUseBPShouldNotifyAnyNeighborField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseBPShouldNotifyAnyNeighbor"); }
	bool& bRequireAbsoluteDamageForNeighborNotificationField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bRequireAbsoluteDamageForNeighborNotification"); }
	float& AboveDeltaZAttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AboveDeltaZAttackRange"); }
	float& BelowDeltaZAttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BelowDeltaZAttackRange"); }
	float& WildAboveDeltaZTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildAboveDeltaZTargetingRange"); }
	float& WildBelowDeltaZTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WildBelowDeltaZTargetingRange"); }
	bool& bWildUseDeltaZTargetingForFlyerPawnOrBigDinoField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bWildUseDeltaZTargetingForFlyerPawnOrBigDino"); }
	TArray<FAggroEntry>& AggroEntriesField() { return *GetNativePointerField<TArray<FAggroEntry>*>(this, "APrimalDinoAIController.AggroEntries"); }
	bool& bDontWanderField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bDontWander"); }
	bool& bOnlyOverlapTargetCorpsesUnlessHasTargetField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bOnlyOverlapTargetCorpsesUnlessHasTarget"); }
	float& NaturalTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalTargetingRange"); }
	float& TamedTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedTargetingRange"); }
	float& TamedCorpseFoodTargetingRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedCorpseFoodTargetingRange"); }
	float& WanderRandomDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderRandomDistanceAmount"); }
	float& FlyingWanderFixedDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderFixedDistanceAmount"); }
	float& FlyingWanderRandomDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingWanderRandomDistanceAmount"); }
	float& MaxFlyingTargetDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MaxFlyingTargetDeltaZ"); }
	float& WanderFlyingZScalerField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingZScaler"); }
	float& WanderFlyingClampZHeightAboveGroundField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingClampZHeightAboveGround"); }
	float& WanderFlyingMinZHeightAboveGroundField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFlyingMinZHeightAboveGround"); }
	float& WanderFixedDistanceAmountField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.WanderFixedDistanceAmount"); }
	bool& bUseAggroField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseAggro"); }
	float& MinAggroValueField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAggroValue"); }
	float& AggroToAddUponRemovingTargetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponRemovingTarget"); }
	float& AggroToAddUponAcquiringTargetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroToAddUponAcquiringTarget"); }
	float& AggroFactorDecreaseSpeedField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseSpeed"); }
	float& AggroFactorDecreaseGracePeriodField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDecreaseGracePeriod"); }
	float& AggroFactorDamagePercentageMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDamagePercentageMultiplier"); }
	float& AggroNotifyNeighborsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsMultiplier"); }
	float& AggroNotifyNeighborsRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRange"); }
	float& AggroNotifyNeighborsRangeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroNotifyNeighborsRangeFalloff"); }
	float& TargetingDistanceReductionFactorLinearField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorLinear"); }
	float& TargetingDistanceReductionFactorExponentField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TargetingDistanceReductionFactorExponent"); }
	float& BeyondTargetingRangeAggroAdditionField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BeyondTargetingRangeAggroAddition"); }
	float& AggroFactorDesirabilityMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AggroFactorDesirabilityMultiplier"); }
	float& AttackRangeField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRange"); }
	float& AttackIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackInterval"); }
	float& AttackRotationRangeDegreesField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationRangeDegrees"); }
	float& AttackRotationGroundSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AttackRotationGroundSpeedMultiplier"); }
	float& RangeTargetWildDinosMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.RangeTargetWildDinosMultiplier"); }
	FRotator& AttackRotationRateField() { return *GetNativePointerField<FRotator*>(this, "APrimalDinoAIController.AttackRotationRate"); }
	bool& bFocusOnTargetDuringAttackField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bFocusOnTargetDuringAttack"); }
	FVector& FlyingMoveTowardsTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.FlyingMoveTowardsTargetOffset"); }
	FVector& CombatFlyingMoveTowardsTargetOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.CombatFlyingMoveTowardsTargetOffset"); }
	FVector& FlyingTargetFocalPositionOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.FlyingTargetFocalPositionOffset"); }
	float& FlyingReachedDestinationThresholdOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FlyingReachedDestinationThresholdOffset"); }
	float& SeekingIntervalCheckToFlyField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToFly"); }
	float& SeekingPercentChanceToFlyField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToFly"); }
	float& SeekingIntervalCheckToLandField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingIntervalCheckToLand"); }
	float& SeekingPercentChanceToLandField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.SeekingPercentChanceToLand"); }
	float& MinimumWanderGroundNormalZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinimumWanderGroundNormalZ"); }
	float& FollowStoppingDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FollowStoppingDistance"); }
	bool& bUseOverlapTargetCheckTracesField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseOverlapTargetCheckTraces"); }
	bool& bUseAlternateMovePointField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bUseAlternateMovePoint"); }
	bool& bTotallyIgnoreWaterTargetsField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bTotallyIgnoreWaterTargets"); }
	bool& bWaterDinoAllowUnsubmergedTargetsField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.bWaterDinoAllowUnsubmergedTargets"); }
	FVector& LastCheckAttackRangePawnLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastCheckAttackRangePawnLocation"); }
	FVector& LastCheckAttackRangeClosestPointField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastCheckAttackRangeClosestPoint"); }
	FVector& LastCheckAttackRangeTargetLocationField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastCheckAttackRangeTargetLocation"); }
	bool& HasAttackPriorityField() { return *GetNativePointerField<bool*>(this, "APrimalDinoAIController.HasAttackPriority"); }
	TArray<float>& TamedAITargetingRangeMultipliersField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalDinoAIController.TamedAITargetingRangeMultipliers"); }
	float& MateBoostAggroNotifyNeighborsMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MateBoostAggroNotifyNeighborsMultiplier"); }
	UBehaviorTree * BehaviourTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.BehaviourTree"); }
	UBehaviorTree * HasEnemyTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.HasEnemyTree"); }
	UBehaviorTree * BabyHasEnemyTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.BabyHasEnemyTree"); }
	UBehaviorTree * ForcedAggroHasEnemyTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.ForcedAggroHasEnemyTree"); }
	UBehaviorTree * NoEnemyTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.NoEnemyTree"); }
	UBehaviorTree * FleeFromAttackTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.FleeFromAttackTree"); }
	UBehaviorTree * TamedNoEnemyTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.TamedNoEnemyTree"); }
	UBehaviorTree * MissionTreeField() { return GetNativePointerField<UBehaviorTree *>(this, "APrimalDinoAIController.MissionTree"); }
	TArray<TSubclassOf<APrimalDinoCharacter>>& AggroNotifyNeighborsClassesField() { return *GetNativePointerField<TArray<TSubclassOf<APrimalDinoCharacter>>*>(this, "APrimalDinoAIController.AggroNotifyNeighborsClasses"); }
	float& MoveAroundBlockadeAdditionalWidthField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundBlockadeAdditionalWidth"); }
	float& MoveAroundObjectMaxVelocityField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MoveAroundObjectMaxVelocity"); }
	float& ForcedAggroTimeCounterField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedAggroTimeCounter"); }
	float& TamedMaxFollowDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedMaxFollowDistance"); }
	float& BaseStructureTargetingDesireField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.BaseStructureTargetingDesire"); }
	float& LandDinoMaxFlyerTargetDeltaZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.LandDinoMaxFlyerTargetDeltaZ"); }
	float& NaturalMaxDepthZField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.NaturalMaxDepthZ"); }
	int& ForcedAttackEnemyTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.ForcedAttackEnemyTeam"); }
	long double& LastForcedAttackEnemyTeamTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastForcedAttackEnemyTeamTime"); }
	int& LastCharacterTargetTeamField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.LastCharacterTargetTeam"); }
	float& ForcedFleeDurationField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.ForcedFleeDuration"); }
	float& MinAttackIntervalForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinAttackIntervalForFleeing"); }
	float& MinLocChangeIntervalForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.MinLocChangeIntervalForFleeing"); }
	float& PercentageTorporForFleeingField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.PercentageTorporForFleeing"); }
	float& DamagedForceAggroIntervalField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.DamagedForceAggroInterval"); }
	long double& ForceAggroUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.ForceAggroUntilTime"); }
	long double& LastExecutedAttackTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastExecutedAttackTime"); }
	long double& LastForcedFleeTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastForcedFleeTime"); }
	long double& LastFleeLocCheckTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastFleeLocCheckTime"); }
	FVector& LastFleeLocCheckField() { return *GetNativePointerField<FVector*>(this, "APrimalDinoAIController.LastFleeLocCheck"); }
	int& NumAlliesToAttackField() { return *GetNativePointerField<int*>(this, "APrimalDinoAIController.NumAlliesToAttack"); }
	float& FindLandingPositionZOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.FindLandingPositionZOffset"); }
	float& TamedFollowAcceptanceRadiusOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceRadiusOffset"); }
	float& TamedFollowAcceptanceHeightOffsetField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.TamedFollowAcceptanceHeightOffset"); }
	float& AIFlightMaxLandingZDistanceField() { return *GetNativePointerField<float*>(this, "APrimalDinoAIController.AIFlightMaxLandingZDistance"); }
	long double& ForcedMoveToUntilTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.ForcedMoveToUntilTime"); }
	long double& LastHadAggroEntriesTimeField() { return *GetNativePointerField<long double*>(this, "APrimalDinoAIController.LastHadAggroEntriesTime"); }
	TArray<float>& WildTargetingDesireMultiplierValuesField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalDinoAIController.WildTargetingDesireMultiplierValues"); }
	TArray<float>& TamedTargetingDesireMultiplierValuesField() { return *GetNativePointerField<TArray<float>*>(this, "APrimalDinoAIController.TamedTargetingDesireMultiplierValues"); }

	// Functions

	void AddToAggro(AActor * Attacker, float DamagePercent, bool bNotifyNeighbors, bool SetValue, bool bIsFromDamage, bool skipTeamCheck) { NativeCall<void, AActor *, float, bool, bool, bool, bool>(this, "APrimalDinoAIController.AddToAggro", Attacker, DamagePercent, bNotifyNeighbors, SetValue, bIsFromDamage, skipTeamCheck); }
	void AvoidGenericToPoint(FVector TargetDestination) { NativeCall<void, FVector>(this, "APrimalDinoAIController.AvoidGenericToPoint", TargetDestination); }
	void AvoidOutOfWater() { NativeCall<void>(this, "APrimalDinoAIController.AvoidOutOfWater"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalDinoAIController.BeginPlay"); }
	bool CalculateAndSetWonderingAIState(bool * StateChanged) { return NativeCall<bool, bool *>(this, "APrimalDinoAIController.CalculateAndSetWonderingAIState", StateChanged); }
	bool CanLand() { return NativeCall<bool>(this, "APrimalDinoAIController.CanLand"); }
	bool CheckMoveAroundBlockadePoint(FVector moveToPoint) { return NativeCall<bool, FVector>(this, "APrimalDinoAIController.CheckMoveAroundBlockadePoint", moveToPoint); }
	void ClearAggroEntries() { NativeCall<void>(this, "APrimalDinoAIController.ClearAggroEntries"); }
	void Destroyed() { NativeCall<void>(this, "APrimalDinoAIController.Destroyed"); }
	void ForceLand() { NativeCall<void>(this, "APrimalDinoAIController.ForceLand"); }
	float GetAcceptanceHeightOffset() { return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceHeightOffset"); }
	float GetAcceptanceRadiusOffset() { return NativeCall<float>(this, "APrimalDinoAIController.GetAcceptanceRadiusOffset"); }
	float GetAggroDesirability(AActor * InTarget) { return NativeCall<float, AActor *>(this, "APrimalDinoAIController.GetAggroDesirability", InTarget); }
	int GetAggroEntriesCount() { return NativeCall<int>(this, "APrimalDinoAIController.GetAggroEntriesCount"); }
	bool GetAggroEntry(int Index, AActor ** OutAttacker, float * OutAggroFactor, long double * OutLastAggroHitTime) { return NativeCall<bool, int, AActor **, float *, long double *>(this, "APrimalDinoAIController.GetAggroEntry", Index, OutAttacker, OutAggroFactor, OutLastAggroHitTime); }
	float GetAggroNotifyNeighborsRange_Implementation() { return NativeCall<float>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange_Implementation"); }
	float GetAttackInterval() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackInterval"); }
	float GetAttackRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRange"); }
	float GetAttackRotationGroundSpeedMultiplier() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier"); }
	float GetAttackRotationRangeDegrees() { return NativeCall<float>(this, "APrimalDinoAIController.GetAttackRotationRangeDegrees"); }
	FRotator * GetAttackRotationRate(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "APrimalDinoAIController.GetAttackRotationRate", result); }
	APrimalDinoCharacter * GetControlledDino() { return NativeCall<APrimalDinoCharacter *>(this, "APrimalDinoAIController.GetControlledDino"); }
	char GetCurrentAttackIndex() { return NativeCall<char>(this, "APrimalDinoAIController.GetCurrentAttackIndex"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "APrimalDinoAIController.GetDebugInfoString", result); }
	FVector * GetLandingLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalDinoAIController.GetLandingLocation", result); }
	float GetMinAttackRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetMinAttackRange"); }
	FVector * GetRandomWanderDestination(FVector * result, FVector LocOverride, float RandomOffsetMultiplier, bool bUseRandomNegativeXDir, bool bOrientRandOffsetByRotation, FRotator OrientRandOffsetByRotation) { return NativeCall<FVector *, FVector *, FVector, float, bool, bool, FRotator>(this, "APrimalDinoAIController.GetRandomWanderDestination", result, LocOverride, RandomOffsetMultiplier, bUseRandomNegativeXDir, bOrientRandOffsetByRotation, OrientRandOffsetByRotation); }
	float GetTargetingDesire(AActor * InTarget) { return NativeCall<float, AActor *>(this, "APrimalDinoAIController.GetTargetingDesire", InTarget); }
	FVector * GetWanderAroundActorDestination(FVector * result, APrimalDinoCharacter * dinoCharacter, FVector originalDestination) { return NativeCall<FVector *, FVector *, APrimalDinoCharacter *, FVector>(this, "APrimalDinoAIController.GetWanderAroundActorDestination", result, dinoCharacter, originalDestination); }
	bool IsForceTargetDinoRider(AShooterCharacter * playerTarget) { return NativeCall<bool, AShooterCharacter *>(this, "APrimalDinoAIController.IsForceTargetDinoRider", playerTarget); }
	bool IsLogicPaused() { return NativeCall<bool>(this, "APrimalDinoAIController.IsLogicPaused"); }
	bool IsWithinAttackRange(AActor * Other, bool bForceUseLastAttackIndex) { return NativeCall<bool, AActor *, bool>(this, "APrimalDinoAIController.IsWithinAttackRange", Other, bForceUseLastAttackIndex); }
	bool IsWithinAttackRangeAndCalculateBestAttack(AActor * Other, bool * bAttackChanged) { return NativeCall<bool, AActor *, bool *>(this, "APrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack", Other, bAttackChanged); }
	bool MoveAroundBlockade(FVector PreBumpLocation, AActor * BlockadeActor, UPrimitiveComponent * OtherComp, float BlockadeWidth, FVector HitNormal, FVector HitLocation, bool SkipBlockingCheck) { return NativeCall<bool, FVector, AActor *, UPrimitiveComponent *, float, FVector, FVector, bool>(this, "APrimalDinoAIController.MoveAroundBlockade", PreBumpLocation, BlockadeActor, OtherComp, BlockadeWidth, HitNormal, HitLocation, SkipBlockingCheck); }
	void NotifyBump(FVector PreBumpLocation, AActor * Other, UPrimitiveComponent * OtherComp, const FVector * HitNormal, const FVector * HitLocation) { NativeCall<void, FVector, AActor *, UPrimitiveComponent *, const FVector *, const FVector *>(this, "APrimalDinoAIController.NotifyBump", PreBumpLocation, Other, OtherComp, HitNormal, HitLocation); }
	void NotifyTakeDamage(float Damage, const FDamageEvent * DamageEvent, AController * EventInstigator, AActor * DamageCauser) { NativeCall<void, float, const FDamageEvent *, AController *, AActor *>(this, "APrimalDinoAIController.NotifyTakeDamage", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result) { NativeCall<void, FAIRequestID, EPathFollowingResult::Type>(this, "APrimalDinoAIController.OnMoveCompleted", RequestID, Result); }
	bool OrderedToLand() { return NativeCall<bool>(this, "APrimalDinoAIController.OrderedToLand"); }
	void PauseBrainComponent(FString reason) { NativeCall<void, FString>(this, "APrimalDinoAIController.PauseBrainComponent", reason); }
	void PlayStartledAnim() { NativeCall<void>(this, "APrimalDinoAIController.PlayStartledAnim"); }
	void Possess(APawn * InPawn) { NativeCall<void, APawn *>(this, "APrimalDinoAIController.Possess", InPawn); }
	void RebootBrainComponent() { NativeCall<void>(this, "APrimalDinoAIController.RebootBrainComponent"); }
	void RecoverMovement() { NativeCall<void>(this, "APrimalDinoAIController.RecoverMovement"); }
	void ResetAccelerationFollowsRotation() { NativeCall<void>(this, "APrimalDinoAIController.ResetAccelerationFollowsRotation"); }
	void ResetGroundSpeed() { NativeCall<void>(this, "APrimalDinoAIController.ResetGroundSpeed"); }
	void ResetRotationRate() { NativeCall<void>(this, "APrimalDinoAIController.ResetRotationRate"); }
	void ResetRotationUseAcceleration() { NativeCall<void>(this, "APrimalDinoAIController.ResetRotationUseAcceleration"); }
	void RestartBrainComponent() { NativeCall<void>(this, "APrimalDinoAIController.RestartBrainComponent"); }
	void ResumeBrainComponent(FString reason) { NativeCall<void, FString>(this, "APrimalDinoAIController.ResumeBrainComponent", reason); }
	bool RunBehaviorTree(UBehaviorTree * BTAsset) { return NativeCall<bool, UBehaviorTree *>(this, "APrimalDinoAIController.RunBehaviorTree", BTAsset); }
	void SetAttackGroundSpeed() { NativeCall<void>(this, "APrimalDinoAIController.SetAttackGroundSpeed"); }
	void SetAttackRotationRate() { NativeCall<void>(this, "APrimalDinoAIController.SetAttackRotationRate"); }
	void SetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalDinoAIController.SetHasAttackPriority", Value); }
	void SetTarget(AActor * InTarget, bool bDontAddAggro, bool bOverlapFoundTarget) { NativeCall<void, AActor *, bool, bool>(this, "APrimalDinoAIController.SetTarget", InTarget, bDontAddAggro, bOverlapFoundTarget); }
	bool ShouldForceFlee() { return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceFlee"); }
	bool ShouldForceRunWhenAttacking() { return NativeCall<bool>(this, "APrimalDinoAIController.ShouldForceRunWhenAttacking"); }
	static FVector * StaticGetRandomWanderDestination(FVector * result, APrimalDinoCharacter * TargetCharacter, APrimalDinoAIController * TargetAIController, FVector LocOverride, float RandomOffsetMultiplier, bool bUseRandomNegativeXDir, bool bOrientRandOffsetByRotation, FRotator OrientRandOffsetByRotation, float GroundCheckSpreadOverride) { return NativeCall<FVector *, FVector *, APrimalDinoCharacter *, APrimalDinoAIController *, FVector, float, bool, bool, FRotator, float>(nullptr, "APrimalDinoAIController.StaticGetRandomWanderDestination", result, TargetCharacter, TargetAIController, LocOverride, RandomOffsetMultiplier, bUseRandomNegativeXDir, bOrientRandOffsetByRotation, OrientRandOffsetByRotation, GroundCheckSpreadOverride); }
	void StopBrainComponent(FString reason) { NativeCall<void, FString>(this, "APrimalDinoAIController.StopBrainComponent", reason); }
	void Unstasis() { NativeCall<void>(this, "APrimalDinoAIController.Unstasis"); }
	void UpdateAggro() { NativeCall<void>(this, "APrimalDinoAIController.UpdateAggro"); }
	bool UseLowQualityBehaviorTreeTick() { return NativeCall<bool>(this, "APrimalDinoAIController.UseLowQualityBehaviorTreeTick"); }
	bool BPForceTargetDinoRider(AShooterCharacter * playerTarget) { return NativeCall<bool, AShooterCharacter *>(this, "APrimalDinoAIController.BPForceTargetDinoRider", playerTarget); }
	float BPGetTargetingDesire(AActor * ForTarget, float ForTargetingDesireValue) { return NativeCall<float, AActor *, float>(this, "APrimalDinoAIController.BPGetTargetingDesire", ForTarget, ForTargetingDesireValue); }
	void BPNotifyTargetSet() { NativeCall<void>(this, "APrimalDinoAIController.BPNotifyTargetSet"); }
	void BPOnFleeEvent() { NativeCall<void>(this, "APrimalDinoAIController.BPOnFleeEvent"); }
	bool BPOverrideIgnoredByWildDino(AActor * wildDinoToIgnore) { return NativeCall<bool, AActor *>(this, "APrimalDinoAIController.BPOverrideIgnoredByWildDino", wildDinoToIgnore); }
	FVector * BPOverrideLandingLocation(FVector * result, float * outRadius) { return NativeCall<FVector *, FVector *, float *>(this, "APrimalDinoAIController.BPOverrideLandingLocation", result, outRadius); }
	void BPSetupFindTarget() { NativeCall<void>(this, "APrimalDinoAIController.BPSetupFindTarget"); }
	bool BPShouldNotifyAnyNeighbor(APrimalDinoCharacter * neighbor) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalDinoAIController.BPShouldNotifyAnyNeighbor", neighbor); }
	bool BPShouldNotifyNeighbor(APrimalDinoCharacter * neighbor) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalDinoAIController.BPShouldNotifyNeighbor", neighbor); }
	FVector2D * BP_TamedOverrideHorizontalLandingRange(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "APrimalDinoAIController.BP_TamedOverrideHorizontalLandingRange", result); }
	bool CalculateAndSetWonderingAIStateEvent(bool StateChanged) { return NativeCall<bool, bool>(this, "APrimalDinoAIController.CalculateAndSetWonderingAIStateEvent", StateChanged); }
	void ChangedAITarget() { NativeCall<void>(this, "APrimalDinoAIController.ChangedAITarget"); }
	float GetAggroNotifyNeighborsRange() { return NativeCall<float>(this, "APrimalDinoAIController.GetAggroNotifyNeighborsRange"); }
	void OnLosingTargetEvent() { NativeCall<void>(this, "APrimalDinoAIController.OnLosingTargetEvent"); }
};

struct APrimalBotAIController : APrimalDinoAIController
{
	char __padding[0x28L];
	float& DinoSearchRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBotAIController.DinoSearchRadius"); }
	TWeakObjectPtr<APrimalDinoCharacter>& ClaimedDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter>*>(this, "APrimalBotAIController.ClaimedDino"); }
	long double& LastTimeGivenAttackPriorityField() { return *GetNativePointerField<long double*>(this, "APrimalBotAIController.LastTimeGivenAttackPriority"); }

	// Functions

	void ChangedAITarget() { NativeCall<void>(this, "APrimalBotAIController.ChangedAITarget"); }
	bool ClaimDino(APrimalDinoCharacter * Dino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalBotAIController.ClaimDino", Dino); }
	APrimalDinoCharacter * FindADinoToClaim() { return NativeCall<APrimalDinoCharacter *>(this, "APrimalBotAIController.FindADinoToClaim"); }
	UPrimalBotRidingComponent * GetBotRidingComponent(const APrimalDinoCharacter * Dino) { return NativeCall<UPrimalBotRidingComponent *, const APrimalDinoCharacter *>(this, "APrimalBotAIController.GetBotRidingComponent", Dino); }
	void InitializeBlackboardValues(const APrimalBotCharacter * Bot) { NativeCall<void, const APrimalBotCharacter *>(this, "APrimalBotAIController.InitializeBlackboardValues", Bot); }
	bool IsDinoRideable(APrimalDinoCharacter * Dino) { return NativeCall<bool, APrimalDinoCharacter *>(this, "APrimalBotAIController.IsDinoRideable", Dino); }
	bool IsTooCloseToAttack() { return NativeCall<bool>(this, "APrimalBotAIController.IsTooCloseToAttack"); }
	bool IsTooFarToAttack() { return NativeCall<bool>(this, "APrimalBotAIController.IsTooFarToAttack"); }
	void OnCharacterAttachedToDino(APrimalDinoCharacter * Dino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalBotAIController.OnCharacterAttachedToDino", Dino); }
	void OnCharacterDetachedFromDino(APrimalDinoCharacter * Dino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalBotAIController.OnCharacterDetachedFromDino", Dino); }
	void Possess(APawn * InPawn) { NativeCall<void, APawn *>(this, "APrimalBotAIController.Possess", InPawn); }
	void ReleaseClaimOnDino() { NativeCall<void>(this, "APrimalBotAIController.ReleaseClaimOnDino"); }
	void SetAttackCoordinator(AAIAttackCoordinator * Coordinator) { NativeCall<void, AAIAttackCoordinator *>(this, "APrimalBotAIController.SetAttackCoordinator", Coordinator); }
	void SetControllerOnDino(APrimalDinoCharacter * Dino) { NativeCall<void, APrimalDinoCharacter *>(this, "APrimalBotAIController.SetControllerOnDino", Dino); }
	void SetHasAttackPriority(bool Value) { NativeCall<void, bool>(this, "APrimalBotAIController.SetHasAttackPriority", Value); }
	void SetRiddenDinoAttackPriority() { NativeCall<void>(this, "APrimalBotAIController.SetRiddenDinoAttackPriority"); }
	float TimeSinceGivenAttackPriority() { return NativeCall<float>(this, "APrimalBotAIController.TimeSinceGivenAttackPriority"); }
	void UpdateDinoClaim() { NativeCall<void>(this, "APrimalBotAIController.UpdateDinoClaim"); }
	bool WantsAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.WantsAttackPriority"); }
	bool GetHasAttackPriority() { return NativeCall<bool>(this, "APrimalBotAIController.GetHasAttackPriority"); }
};

