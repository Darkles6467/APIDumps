#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMultiUseEntry.h"
#include "UPrimalItem.h"

struct UStructuresPlus : UBlueprintFunctionLibrary
{

	// Functions

	static TArray<FMultiUseEntry> * SP_AddMenuEntries(TArray<FMultiUseEntry> * result, const TArray<FMultiUseEntry> * EntriesIn, APlayerController * PC, APrimalStructure * Structure, bool bIsGlass) { return NativeCall<TArray<FMultiUseEntry> *, TArray<FMultiUseEntry> *, const TArray<FMultiUseEntry> *, APlayerController *, APrimalStructure *, bool>(nullptr, "UStructuresPlus.SP_AddMenuEntries", result, EntriesIn, PC, Structure, bIsGlass); }
	static void SP_AlterGlassTransparency(TEnumAsByte<enum EGlassTransparencyType::Type> GlassSettingsTransparencyType, float GlassSettingsTransparency, UMaterialInstanceDynamic * InsideMIC, UMaterialInstanceDynamic * OutsideMIC) { NativeCall<void, TEnumAsByte<enum EGlassTransparencyType::Type>, float, UMaterialInstanceDynamic *, UMaterialInstanceDynamic *>(nullptr, "UStructuresPlus.SP_AlterGlassTransparency", GlassSettingsTransparencyType, GlassSettingsTransparency, InsideMIC, OutsideMIC); }
	static void SP_GetAccessibleInventoriesInRange(APlayerController * PC, FVector Location, float PullRange, AActor * ActorToIgnore, TArray<APrimalDinoCharacter *> * OutDinos, TArray<APrimalStructureItemContainer *> * OutStructures) { NativeCall<void, APlayerController *, FVector, float, AActor *, TArray<APrimalDinoCharacter *> *, TArray<APrimalStructureItemContainer *> *>(nullptr, "UStructuresPlus.SP_GetAccessibleInventoriesInRange", PC, Location, PullRange, ActorToIgnore, OutDinos, OutStructures); }
	static bool SP_GetBoolOption(AGameMode * GameMode, FString OptionName) { return NativeCall<bool, AGameMode *, FString>(nullptr, "UStructuresPlus.SP_GetBoolOption", GameMode, OptionName); }
	static void SP_GetCentralPointForFlexibleConnection(const TArray<APrimalStructure *> * Structures, APrimalStructure * ThisStructure, bool bDrawDebug, TArray<FVector> * OutConnectionPoints, FVector * OutCentralPoint) { NativeCall<void, const TArray<APrimalStructure *> *, APrimalStructure *, bool, TArray<FVector> *, FVector *>(nullptr, "UStructuresPlus.SP_GetCentralPointForFlexibleConnection", Structures, ThisStructure, bDrawDebug, OutConnectionPoints, OutCentralPoint); }
	static void SP_GetCharacterWeights(APrimalCharacter * Character, float * OutMaxWeight, float * OutCurrentWeight) { NativeCall<void, APrimalCharacter *, float *, float *>(nullptr, "UStructuresPlus.SP_GetCharacterWeights", Character, OutMaxWeight, OutCurrentWeight); }
	static int SP_GetEmptyInventorySlotCount(UPrimalInventoryComponent * Inventory, bool bIsDino) { return NativeCall<int, UPrimalInventoryComponent *, bool>(nullptr, "UStructuresPlus.SP_GetEmptyInventorySlotCount", Inventory, bIsDino); }
	static float SP_GetFloatOption(AGameMode * GameMode, FString OptionName, float Default, float Max) { return NativeCall<float, AGameMode *, FString, float, float>(nullptr, "UStructuresPlus.SP_GetFloatOption", GameMode, OptionName, Default, Max); }
	static int SP_GetInventoryCapacityForItem(TSubclassOf<UPrimalItem> ItemClass, AActor * TargetActor) { return NativeCall<int, TSubclassOf<UPrimalItem>, AActor *>(nullptr, "UStructuresPlus.SP_GetInventoryCapacityForItem", ItemClass, TargetActor); }
	static float SP_GetInventoryWeightMultiplier(TSubclassOf<UPrimalItem> ItemClass, UPrimalInventoryComponent * Inventory) { return NativeCall<float, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent *>(nullptr, "UStructuresPlus.SP_GetInventoryWeightMultiplier", ItemClass, Inventory); }
	static FLinearColor * SP_GetMessageTypeColor(FLinearColor * result, TEnumAsByte<enum ESPMessageType::Type> MsgType) { return NativeCall<FLinearColor *, FLinearColor *, TEnumAsByte<enum ESPMessageType::Type>>(nullptr, "UStructuresPlus.SP_GetMessageTypeColor", result, MsgType); }
	static FLinearColor * SP_GetSpecialMenuColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(nullptr, "UStructuresPlus.SP_GetSpecialMenuColor", result); }
	static bool SP_IsConnectedToInfiniteWaterSource(APrimalStructure * Structure) { return NativeCall<bool, APrimalStructure *>(nullptr, "UStructuresPlus.SP_IsConnectedToInfiniteWaterSource", Structure); }
	static bool SP_IsFlexibleConnectionLinked(const TArray<APrimalStructure *> * Structures, APrimalStructure * NewStructure) { return NativeCall<bool, const TArray<APrimalStructure *> *, APrimalStructure *>(nullptr, "UStructuresPlus.SP_IsFlexibleConnectionLinked", Structures, NewStructure); }
	static bool SP_IsFuel(UPrimalInventoryComponent * Inventory, TSubclassOf<UPrimalItem> ItemClass) { return NativeCall<bool, UPrimalInventoryComponent *, TSubclassOf<UPrimalItem>>(nullptr, "UStructuresPlus.SP_IsFuel", Inventory, ItemClass); }
	static bool SP_IsLinkedToPowerOrWater(APrimalStructure * Structure) { return NativeCall<bool, APrimalStructure *>(nullptr, "UStructuresPlus.SP_IsLinkedToPowerOrWater", Structure); }
	static bool SP_IsSuitablePullTarget(AActor * TargetActor, APlayerController * PC) { return NativeCall<bool, AActor *, APlayerController *>(nullptr, "UStructuresPlus.SP_IsSuitablePullTarget", TargetActor, PC); }
	static bool SP_IsValidStructureForConnection(APrimalStructure * Structure, const TArray<TSubclassOf<APrimalStructure>> * StructureTypes) { return NativeCall<bool, APrimalStructure *, const TArray<TSubclassOf<APrimalStructure>> *>(nullptr, "UStructuresPlus.SP_IsValidStructureForConnection", Structure, StructureTypes); }
	static void SP_MessageClient(APlayerController * PC, FString Message, TEnumAsByte<enum ESPMessageType::Type> MsgType) { NativeCall<void, APlayerController *, FString, TEnumAsByte<enum ESPMessageType::Type>>(nullptr, "UStructuresPlus.SP_MessageClient", PC, Message, MsgType); }
	static int SP_SafeRemoveFromInventory(TSubclassOf<UPrimalItem> ItemClass, UPrimalInventoryComponent * Inventory, int ToRemove, bool bExactClassMatch, bool bIgnoreHotbar) { return NativeCall<int, TSubclassOf<UPrimalItem>, UPrimalInventoryComponent *, int, bool, bool>(nullptr, "UStructuresPlus.SP_SafeRemoveFromInventory", ItemClass, Inventory, ToRemove, bExactClassMatch, bIgnoreHotbar); }
	static void SP_SetGlassModelEdgeVisibility(int Index, UStaticMeshComponent * Top, UStaticMeshComponent * Bottom, UStaticMeshComponent * Left, UStaticMeshComponent * Right, bool bIsTriangle) { NativeCall<void, int, UStaticMeshComponent *, UStaticMeshComponent *, UStaticMeshComponent *, UStaticMeshComponent *, bool>(nullptr, "UStructuresPlus.SP_SetGlassModelEdgeVisibility", Index, Top, Bottom, Left, Right, bIsTriangle); }
};

