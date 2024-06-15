#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPendingNetGame : UObject
{
	char __padding[0x108L];
	FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UPendingNetGame.URL"); }
	bool& bSuccessfullyConnectedField() { return *GetNativePointerField<bool*>(this, "UPendingNetGame.bSuccessfullyConnected"); }
	FModInfo& TargetTotalConversionField() { return *GetNativePointerField<FModInfo*>(this, "UPendingNetGame.TargetTotalConversion"); }
	TArray<FModInfo>& TargetModsField() { return *GetNativePointerField<TArray<FModInfo>*>(this, "UPendingNetGame.TargetMods"); }
	TArray<unsigned __int64>& LoadedModsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UPendingNetGame.LoadedMods"); }
	bool& bHasStartedTargetDownloadModField() { return *GetNativePointerField<bool*>(this, "UPendingNetGame.bHasStartedTargetDownloadMod"); }
	FName& AuthorityActiveEventField() { return *GetNativePointerField<FName*>(this, "UPendingNetGame.AuthorityActiveEvent"); }
	FString& AuthorityWorldModifierOverrideField() { return *GetNativePointerField<FString*>(this, "UPendingNetGame.AuthorityWorldModifierOverride"); }
	bool& bSentJoinRequestField() { return *GetNativePointerField<bool*>(this, "UPendingNetGame.bSentJoinRequest"); }
	int& PreparedModDataField() { return *GetNativePointerField<int*>(this, "UPendingNetGame.PreparedModData"); }
	bool& bSentClassInfoField() { return *GetNativePointerField<bool*>(this, "UPendingNetGame.bSentClassInfo"); }
	FString& ConnectionErrorField() { return *GetNativePointerField<FString*>(this, "UPendingNetGame.ConnectionError"); }

	// Functions

	void DoInitNetDriverInitialMessage() { NativeCall<void>(this, "UPendingNetGame.DoInitNetDriverInitialMessage"); }
	void FinishDestroy() { NativeCall<void>(this, "UPendingNetGame.FinishDestroy"); }
	void InitNetDriver() { NativeCall<void>(this, "UPendingNetGame.InitNetDriver"); }
	void NotifyControlMessage(UNetConnection * Connection, char MessageType, FInBunch * Bunch) { NativeCall<void, UNetConnection *, char, FInBunch *>(this, "UPendingNetGame.NotifyControlMessage", Connection, MessageType, Bunch); }
	void SendJoin() { NativeCall<void>(this, "UPendingNetGame.SendJoin"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UPendingNetGame.Serialize", Ar); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "UPendingNetGame.Tick", DeltaTime); }
	static void * operator new(const unsigned __int64 InSize, UObject * InOuter, FName InName, EObjectFlags InSetFlags) { return NativeCall<void *, const unsigned __int64, UObject *, FName, EObjectFlags>(nullptr, "UPendingNetGame.operator new", InSize, InOuter, InName, InSetFlags); }
};

