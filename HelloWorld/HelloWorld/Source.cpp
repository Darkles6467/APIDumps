#include "Header.h"

void HelloWorld_Chat(AShooterPlayerController* player /* The player that sent the message */, FString* message /*Message sent by the player*/, EChatSendMode::Type ChatType [[maybe_unused]] /* was sent in global, local, tribe, etc chat */)
{
	//SendChatMessage(AShooterPlayerController* player_controller, const FString& sender_name, const T* msg, Args&&... args)
	//L infront of a string makes it a wide string FStrings are basically just wide strings so you can use a wide string where an FString is expected
	//args are for formatting the message like adding args in the middle of a message the param is optional though
	ArkApi::GetApiUtils().SendChatMessage(player, L"SenderName", L"Message");

	int RandomNumber = 1 + rand() % 100;
	//{} indicates where the arg will be placed in the message it is placed in chronological order so the first {} will be replaced by the first arg, the second by the second arg and so on
	ArkApi::GetApiUtils().SendChatMessage(player, L"ExampleWithArgs", L"A random number is: {}", RandomNumber);
}

void Load()
{
	Log::Get().Init("HelloWorld");

	//Everything you want to happen on load like hooks and commands
	ArkApi::GetCommands().AddChatCommand("/HelloWorld", &HelloWorld_Chat);
}

void Unload()
{
	//Everything to happen unload (remove hooks and commands here)
	ArkApi::GetCommands().RemoveChatCommand("/HelloWorld");
}

//Regular windows DllMain function
BOOL APIENTRY DllMain(HMODULE hModule [[maybe_unused]], DWORD ul_reason_for_call, LPVOID lpReserved [[maybe_unused]] )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		Load();
		break;
	case DLL_PROCESS_DETACH:
		Unload();
		break;
	}
	return TRUE;
}