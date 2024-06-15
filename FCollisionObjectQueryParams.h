#pragma once

#include "BaseDeclarations.h"
struct FCollisionObjectQueryParams
{
	enum InitType
	{
		AllObjects = 0x0,
		AllStaticObjects = 0x1,
		AllDynamicObjects = 0x2,
	};

	char __padding[0x4L];
	int& ObjectTypesToQueryField() { return *GetNativePointerField<int*>(this, "FCollisionObjectQueryParams.ObjectTypesToQuery"); }

	// Functions

	void AddObjectTypesToQuery(ECollisionChannel QueryChannel) { NativeCall<void, ECollisionChannel>(this, "FCollisionObjectQueryParams.AddObjectTypesToQuery", QueryChannel); }
	bool IsValid() { return NativeCall<bool>(this, "FCollisionObjectQueryParams.IsValid"); }
	static bool IsValidObjectQuery(ECollisionChannel QueryChannel) { return NativeCall<bool, ECollisionChannel>(nullptr, "FCollisionObjectQueryParams.IsValidObjectQuery", QueryChannel); }
};

