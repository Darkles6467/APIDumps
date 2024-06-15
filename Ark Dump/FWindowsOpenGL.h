#pragma once

#include "BaseDeclarations.h"
struct FOpenGLBase
{
	enum EQueryMode
	{
		QM_Result = 0x0,
		QM_ResultAvailable = 0x1,
	};

	enum EResourceLockMode
	{
		RLM_ReadWrite = 0x0,
		RLM_ReadOnly = 0x1,
		RLM_WriteOnly = 0x2,
		RLM_WriteOnlyUnsynchronized = 0x3,
		RLM_WriteOnlyPersistent = 0x4,
	};

	enum EFenceResult
	{
		FR_AlreadySignaled = 0x0,
		FR_TimeoutExpired = 0x1,
		FR_ConditionSatisfied = 0x2,
		FR_WaitFailed = 0x3,
	};


	// Functions

	static void ProcessExtensions(const FString * ExtensionsString) { NativeCall<void, const FString *>(nullptr, "FOpenGLBase.ProcessExtensions", ExtensionsString); }
};

struct FOpenGL3 : FOpenGLBase
{

	// Functions

	static FString * GetAdapterName(FString * result) { return NativeCall<FString *, FString *>(nullptr, "FOpenGL3.GetAdapterName", result); }
	static void ProcessExtensions(const FString * ExtensionsString) { NativeCall<void, const FString *>(nullptr, "FOpenGL3.ProcessExtensions", ExtensionsString); }
};

struct FOpenGL4 : FOpenGL3
{

	// Functions

	static void ProcessExtensions(const FString * ExtensionsString) { NativeCall<void, const FString *>(nullptr, "FOpenGL4.ProcessExtensions", ExtensionsString); }
};

struct FWindowsOpenGL : FOpenGL4
{
};

