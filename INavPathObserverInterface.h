#pragma once

#include "BaseDeclarations.h"
struct INavPathObserverInterface
{
	char __padding[0x8L];

	// Functions

	void OnPathFailed(INavigationPathGenerator * PathGenerator) { NativeCall<void, INavigationPathGenerator *>(this, "INavPathObserverInterface.OnPathFailed", PathGenerator); }
	void OnPathInvalid(INavigationPathGenerator * PathGenerator) { NativeCall<void, INavigationPathGenerator *>(this, "INavPathObserverInterface.OnPathInvalid", PathGenerator); }
	void OnPathUpdated(INavigationPathGenerator * PathGenerator) { NativeCall<void, INavigationPathGenerator *>(this, "INavPathObserverInterface.OnPathUpdated", PathGenerator); }
};

