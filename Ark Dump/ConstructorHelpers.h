#pragma once

#include "BaseDeclarations.h"
struct ConstructorHelpers
{

	// Functions

	static void ValidateObject(UObject * Object, const FString * PathName, const wchar_t * ObjectToFind) { NativeCall<void, UObject *, const FString *, const wchar_t *>(nullptr, "ConstructorHelpers.ValidateObject", Object, PathName, ObjectToFind); }
	static void CheckIfIsInConstructor(const wchar_t * ObjectToFind) { NativeCall<void, const wchar_t *>(nullptr, "ConstructorHelpers.CheckIfIsInConstructor", ObjectToFind); }
	static void FailedToFind(const wchar_t * ObjectToFind) { NativeCall<void, const wchar_t *>(nullptr, "ConstructorHelpers.FailedToFind", ObjectToFind); }
	static void StripObjectClass(FString * PathName, bool bAssertOnBadPath) { NativeCall<void, FString *, bool>(nullptr, "ConstructorHelpers.StripObjectClass", PathName, bAssertOnBadPath); }
};

