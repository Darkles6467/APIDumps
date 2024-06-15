#pragma once

#include "BaseDeclarations.h"
struct CURLMsg
{
	char __padding[0x18L];
	CURLMSG& msgField() { return *GetNativePointerField<CURLMSG*>(this, "CURLMsg.msg"); }
	void * easy_handleField() { return GetNativePointerField<void *>(this, "CURLMsg.easy_handle"); }
	CURLMsg::<unnamed_type_data>& dataField() { return *GetNativePointerField<CURLMsg::<unnamed_type_data>*>(this, "CURLMsg.data"); }
};

