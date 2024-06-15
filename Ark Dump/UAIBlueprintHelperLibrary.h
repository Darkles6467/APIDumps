#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static UAIAsyncTaskBlueprintProxy * CreateMoveToProxyObject(UObject * WorldContextObject, APawn * Pawn, FVector Destination, AActor * TargetActor, float AcceptanceRadius, bool bStopOnOverlap) { return NativeCall<UAIAsyncTaskBlueprintProxy *, UObject *, APawn *, FVector, AActor *, float, bool>(nullptr, "UAIBlueprintHelperLibrary.CreateMoveToProxyObject", WorldContextObject, Pawn, Destination, TargetActor, AcceptanceRadius, bStopOnOverlap); }
	static UBlackboardComponent * GetBlackboard(AActor * Target) { return NativeCall<UBlackboardComponent *, AActor *>(nullptr, "UAIBlueprintHelperLibrary.GetBlackboard", Target); }
	static bool IsValidAILocation(FVector Location) { return NativeCall<bool, FVector>(nullptr, "UAIBlueprintHelperLibrary.IsValidAILocation", Location); }
	static bool IsValidAIRotation(FRotator Rotation) { return NativeCall<bool, FRotator>(nullptr, "UAIBlueprintHelperLibrary.IsValidAIRotation", Rotation); }
	static void LockAIResourcesWithAnimation(UAnimInstance * AnimInstance, bool bLockMovement, bool LockAILogic) { NativeCall<void, UAnimInstance *, bool, bool>(nullptr, "UAIBlueprintHelperLibrary.LockAIResourcesWithAnimation", AnimInstance, bLockMovement, LockAILogic); }
	static void SendAIMessage(APawn * Target, FName Message, UObject * MessageSource, bool bSuccess) { NativeCall<void, APawn *, FName, UObject *, bool>(nullptr, "UAIBlueprintHelperLibrary.SendAIMessage", Target, Message, MessageSource, bSuccess); }
	static void UnlockAIResourcesWithAnimation(UAnimInstance * AnimInstance, bool bUnlockMovement, bool UnlockAILogic) { NativeCall<void, UAnimInstance *, bool, bool>(nullptr, "UAIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation", AnimInstance, bUnlockMovement, UnlockAILogic); }
};

