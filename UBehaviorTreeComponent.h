#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBehaviorTreeSearchUpdate.h"
#include "FAIRequestID.h"

struct UBrainComponent : UActorComponent
{
	char __padding[0x40L];
	UBlackboardComponent * BlackboardCompField() { return GetNativePointerField<UBlackboardComponent *>(this, "UBrainComponent.BlackboardComp"); }
	TArray<FAIMessage>& MessagesToProcessField() { return *GetNativePointerField<TArray<FAIMessage>*>(this, "UBrainComponent.MessagesToProcess"); }
	FAIResourceLock& ResourceLockField() { return *GetNativePointerField<FAIResourceLock*>(this, "UBrainComponent.ResourceLock"); }

	// Functions

	void ClearResourceLock(EAILockSource::Type LockSource) { NativeCall<void, EAILockSource::Type>(this, "UBrainComponent.ClearResourceLock", LockSource); }
	void ForceUnlockResource() { NativeCall<void>(this, "UBrainComponent.ForceUnlockResource"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UBrainComponent.GetDebugInfoString", result); }
	void HandleMessage(const FAIMessage * Message) { NativeCall<void, const FAIMessage *>(this, "UBrainComponent.HandleMessage", Message); }
	void InitializeComponent() { NativeCall<void>(this, "UBrainComponent.InitializeComponent"); }
	bool IsResourceLocked() { return NativeCall<bool>(this, "UBrainComponent.IsResourceLocked"); }
	void LockResource(EAILockSource::Type LockSource) { NativeCall<void, EAILockSource::Type>(this, "UBrainComponent.LockResource", LockSource); }
	void OnRegister() { NativeCall<void>(this, "UBrainComponent.OnRegister"); }
	void RequestLogicRestartOnUnlock() { NativeCall<void>(this, "UBrainComponent.RequestLogicRestartOnUnlock"); }
	EAILogicResuming::Type ResumeLogic(const FString * Reason) { return NativeCall<EAILogicResuming::Type, const FString *>(this, "UBrainComponent.ResumeLogic", Reason); }
};

struct UBehaviorTreeComponent : UBrainComponent
{
	char __padding[0xd8L];
	int& TasksProcessedThisFrameField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeComponent.TasksProcessedThisFrame"); }
	bool& bHasScheduledTaskField() { return *GetNativePointerField<bool*>(this, "UBehaviorTreeComponent.bHasScheduledTask"); }
	FBTNodeExecutionInfo& ExecutionRequestField() { return *GetNativePointerField<FBTNodeExecutionInfo*>(this, "UBehaviorTreeComponent.ExecutionRequest"); }
	TArray<FBehaviorTreeInstance>& InstanceStackField() { return *GetNativePointerField<TArray<FBehaviorTreeInstance>*>(this, "UBehaviorTreeComponent.InstanceStack"); }
	TArray<FBehaviorTreeInstanceId>& KnownInstancesField() { return *GetNativePointerField<TArray<FBehaviorTreeInstanceId>*>(this, "UBehaviorTreeComponent.KnownInstances"); }
	FBehaviorTreeSearchData& SearchDataField() { return *GetNativePointerField<FBehaviorTreeSearchData*>(this, "UBehaviorTreeComponent.SearchData"); }
	int& TickingModulusField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeComponent.TickingModulus"); }
	int& LowQualityTickingModulusField() { return *GetNativePointerField<int*>(this, "UBehaviorTreeComponent.LowQualityTickingModulus"); }
	unsigned __int16& ActiveInstanceIdxField() { return *GetNativePointerField<unsigned __int16*>(this, "UBehaviorTreeComponent.ActiveInstanceIdx"); }

	// Functions

	void AbortCurrentTask() { NativeCall<void>(this, "UBehaviorTreeComponent.AbortCurrentTask"); }
	void ApplySearchData(UBTNode * NewActiveNode, int UpToIdx) { NativeCall<void, UBTNode *, int>(this, "UBehaviorTreeComponent.ApplySearchData", NewActiveNode, UpToIdx); }
	void ApplySearchUpdates(const TArray<FBehaviorTreeSearchUpdate> * UpdateList, int UpToIdx, int NewNodeExecutionIndex, bool bPostUpdate) { NativeCall<void, const TArray<FBehaviorTreeSearchUpdate> *, int, int, bool>(this, "UBehaviorTreeComponent.ApplySearchUpdates", UpdateList, UpToIdx, NewNodeExecutionIndex, bPostUpdate); }
	void BeginDestroy() { NativeCall<void>(this, "UBehaviorTreeComponent.BeginDestroy"); }
	void Cleanup() { NativeCall<void>(this, "UBehaviorTreeComponent.Cleanup"); }
	bool DeactivateUpTo(UBTCompositeNode * Node, unsigned __int16 NodeInstanceIdx, EBTNodeResult::Type * NodeResult) { return NativeCall<bool, UBTCompositeNode *, unsigned __int16, EBTNodeResult::Type *>(this, "UBehaviorTreeComponent.DeactivateUpTo", Node, NodeInstanceIdx, NodeResult); }
	FString * DescribeActiveTasks(FString * result) { return NativeCall<FString *, FString *>(this, "UBehaviorTreeComponent.DescribeActiveTasks", result); }
	FString * DescribeActiveTrees(FString * result) { return NativeCall<FString *, FString *>(this, "UBehaviorTreeComponent.DescribeActiveTrees", result); }
	void ExecuteTask(UBTTaskNode * TaskNode) { NativeCall<void, UBTTaskNode *>(this, "UBehaviorTreeComponent.ExecuteTask", TaskNode); }
	int FindInstanceContainingNode(const UBTNode * Node) { return NativeCall<int, const UBTNode *>(this, "UBehaviorTreeComponent.FindInstanceContainingNode", Node); }
	float GetCurrentTickDeltaTimeMultiplier() { return NativeCall<float>(this, "UBehaviorTreeComponent.GetCurrentTickDeltaTimeMultiplier"); }
	FString * GetDebugInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "UBehaviorTreeComponent.GetDebugInfoString", result); }
	EBTTaskStatus::Type GetTaskStatus(const UBTTaskNode * TaskNode) { return NativeCall<EBTTaskStatus::Type, const UBTTaskNode *>(this, "UBehaviorTreeComponent.GetTaskStatus", TaskNode); }
	bool IsAuxNodeActive(const UBTAuxiliaryNode * AuxNode) { return NativeCall<bool, const UBTAuxiliaryNode *>(this, "UBehaviorTreeComponent.IsAuxNodeActive", AuxNode); }
	bool IsExecutingBranch(const UBTNode * Node, int ChildIndex) { return NativeCall<bool, const UBTNode *, int>(this, "UBehaviorTreeComponent.IsExecutingBranch", Node, ChildIndex); }
	bool IsPaused() { return NativeCall<bool>(this, "UBehaviorTreeComponent.IsPaused"); }
	bool IsRunning() { return NativeCall<bool>(this, "UBehaviorTreeComponent.IsRunning"); }
	void OnRegister() { NativeCall<void>(this, "UBehaviorTreeComponent.OnRegister"); }
	void OnTaskFinished(const UBTTaskNode * TaskNode, EBTNodeResult::Type TaskResult) { NativeCall<void, const UBTTaskNode *, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.OnTaskFinished", TaskNode, TaskResult); }
	void OnTreeFinished() { NativeCall<void>(this, "UBehaviorTreeComponent.OnTreeFinished"); }
	void PauseLogic(const FString * Reason) { NativeCall<void, const FString *>(this, "UBehaviorTreeComponent.PauseLogic", Reason); }
	void ProcessExecutionRequest() { NativeCall<void>(this, "UBehaviorTreeComponent.ProcessExecutionRequest"); }
	bool PushInstance(UBehaviorTree * TreeAsset) { return NativeCall<bool, UBehaviorTree *>(this, "UBehaviorTreeComponent.PushInstance", TreeAsset); }
	void RegisterMessageObserver(const UBTTaskNode * TaskNode, FName MessageType) { NativeCall<void, const UBTTaskNode *, FName>(this, "UBehaviorTreeComponent.RegisterMessageObserver", TaskNode, MessageType); }
	void RegisterMessageObserver(const UBTTaskNode * TaskNode, FName MessageType, FAIRequestID RequestID) { NativeCall<void, const UBTTaskNode *, FName, FAIRequestID>(this, "UBehaviorTreeComponent.RegisterMessageObserver", TaskNode, MessageType, RequestID); }
	void RegisterParallelTask(const UBTTaskNode * TaskNode) { NativeCall<void, const UBTTaskNode *>(this, "UBehaviorTreeComponent.RegisterParallelTask", TaskNode); }
	void RemoveAllInstances() { NativeCall<void>(this, "UBehaviorTreeComponent.RemoveAllInstances"); }
	void RequestExecution(UBTCompositeNode * RequestedOn, int InstanceIdx, const UBTNode * RequestedBy, int RequestedByChildIndex, EBTNodeResult::Type ContinueWithResult, bool bStoreForDebugger) { NativeCall<void, UBTCompositeNode *, int, const UBTNode *, int, EBTNodeResult::Type, bool>(this, "UBehaviorTreeComponent.RequestExecution", RequestedOn, InstanceIdx, RequestedBy, RequestedByChildIndex, ContinueWithResult, bStoreForDebugger); }
	void RequestExecution(const UBTDecorator * RequestedBy) { NativeCall<void, const UBTDecorator *>(this, "UBehaviorTreeComponent.RequestExecution", RequestedBy); }
	void RequestExecution(EBTNodeResult::Type LastResult) { NativeCall<void, EBTNodeResult::Type>(this, "UBehaviorTreeComponent.RequestExecution", LastResult); }
	void RestartLogic() { NativeCall<void>(this, "UBehaviorTreeComponent.RestartLogic"); }
	EAILogicResuming::Type ResumeLogic(const FString * Reason) { return NativeCall<EAILogicResuming::Type, const FString *>(this, "UBehaviorTreeComponent.ResumeLogic", Reason); }
	bool StartTree(UBehaviorTree * TreeAsset, EBTExecutionMode::Type ExecuteMode) { return NativeCall<bool, UBehaviorTree *, EBTExecutionMode::Type>(this, "UBehaviorTreeComponent.StartTree", TreeAsset, ExecuteMode); }
	void StopLogic(const FString * Reason) { NativeCall<void, const FString *>(this, "UBehaviorTreeComponent.StopLogic", Reason); }
	void StopTree() { NativeCall<void>(this, "UBehaviorTreeComponent.StopTree"); }
	void UnregisterAuxNodesUpTo(const FBTNodeIndex * Index) { NativeCall<void, const FBTNodeIndex *>(this, "UBehaviorTreeComponent.UnregisterAuxNodesUpTo", Index); }
	void UnregisterMessageObserversFrom(const UBTTaskNode * TaskNode) { NativeCall<void, const UBTTaskNode *>(this, "UBehaviorTreeComponent.UnregisterMessageObserversFrom", TaskNode); }
	void UnregisterParallelTask(const UBTTaskNode * TaskNode, unsigned __int16 InstanceIdx) { NativeCall<void, const UBTTaskNode *, unsigned __int16>(this, "UBehaviorTreeComponent.UnregisterParallelTask", TaskNode, InstanceIdx); }
	void UpdateAbortingTasks() { NativeCall<void>(this, "UBehaviorTreeComponent.UpdateAbortingTasks"); }
	char UpdateInstanceId(UBehaviorTree * TreeAsset, const UBTNode * OriginNode, int OriginInstanceIdx) { return NativeCall<char, UBehaviorTree *, const UBTNode *, int>(this, "UBehaviorTreeComponent.UpdateInstanceId", TreeAsset, OriginNode, OriginInstanceIdx); }
};

