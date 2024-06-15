#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetId.h"

struct FTestExternalUIInterface
{
	char __padding[0x40L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestExternalUIInterface.SubsystemName"); }
	bool& bTestLoginUIField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestLoginUI"); }
	bool& bTestFriendsUIField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestFriendsUI"); }
	bool& bTestInviteUIField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestInviteUI"); }
	bool& bTestAchievementsUIField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestAchievementsUI"); }
	bool& bTestWebURLField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestWebURL"); }
	bool& bTestProfileUIField() { return *GetNativePointerField<bool*>(this, "FTestExternalUIInterface.bTestProfileUI"); }
	ETestExternalUIInterfaceState::Type& StateField() { return *GetNativePointerField<ETestExternalUIInterfaceState::Type*>(this, "FTestExternalUIInterface.State"); }

	// Functions

	void OnExternalUIChange(bool bIsOpening) { NativeCall<void, bool>(this, "FTestExternalUIInterface.OnExternalUIChange", bIsOpening); }
	void OnLoginUIClosed(TSharedPtr<FUniqueNetId,0> LoggedInUserId, const int LocalUserId) { NativeCall<void, TSharedPtr<FUniqueNetId,0>, const int>(this, "FTestExternalUIInterface.OnLoginUIClosed", LoggedInUserId, LocalUserId); }
	void StartNextTest() { NativeCall<void>(this, "FTestExternalUIInterface.StartNextTest"); }
	void Test() { NativeCall<void>(this, "FTestExternalUIInterface.Test"); }
	bool TestLoginUI() { return NativeCall<bool>(this, "FTestExternalUIInterface.TestLoginUI"); }
	bool TestProfileUI() { return NativeCall<bool>(this, "FTestExternalUIInterface.TestProfileUI"); }
	bool TestWebURL() { return NativeCall<bool>(this, "FTestExternalUIInterface.TestWebURL"); }
};

