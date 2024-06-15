#pragma once

#include "BaseDeclarations.h"
struct FShooterGameSessionParams
{
	char __padding[0x88L];
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "FShooterGameSessionParams.SessionName"); }
	FName& InitSessionNameField() { return *GetNativePointerField<FName*>(this, "FShooterGameSessionParams.InitSessionName"); }
	bool& bIsLANField() { return *GetNativePointerField<bool*>(this, "FShooterGameSessionParams.bIsLAN"); }
	bool& bIsPresenceField() { return *GetNativePointerField<bool*>(this, "FShooterGameSessionParams.bIsPresence"); }
	bool& bIsPrivateField() { return *GetNativePointerField<bool*>(this, "FShooterGameSessionParams.bIsPrivate"); }
	int& BestSessionIdxField() { return *GetNativePointerField<int*>(this, "FShooterGameSessionParams.BestSessionIdx"); }
	FString& DDUserIdField() { return *GetNativePointerField<FString*>(this, "FShooterGameSessionParams.DDUserId"); }
	FString& DDUserNameField() { return *GetNativePointerField<FString*>(this, "FShooterGameSessionParams.DDUserName"); }
	unsigned __int64& ModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FShooterGameSessionParams.ModId"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "FShooterGameSessionParams.ServerPassword"); }
	FString& ServerAdminPasswordField() { return *GetNativePointerField<FString*>(this, "FShooterGameSessionParams.ServerAdminPassword"); }
	FString& SpectatorPasswordField() { return *GetNativePointerField<FString*>(this, "FShooterGameSessionParams.SpectatorPassword"); }

	// Functions

};

