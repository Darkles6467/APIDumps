#pragma once

#include "BaseDeclarations.h"
struct ITextInputMethodSystem
{
	char __padding[0x8L];
};

struct FWindowsTextInputMethodSystem : ITextInputMethodSystem
{
	enum EAPI
	{
		Unknown = 0x0,
		IMM = 0x1,
		TSF = 0x2,
	};

	char __padding[0xf8L];
	TSharedPtr<ITextInputMethodContext,0>& ActiveContextField() { return *GetNativePointerField<TSharedPtr<ITextInputMethodContext,0>*>(this, "FWindowsTextInputMethodSystem.ActiveContext"); }
	FWindowsTextInputMethodSystem::EAPI& CurrentAPIField() { return *GetNativePointerField<FWindowsTextInputMethodSystem::EAPI*>(this, "FWindowsTextInputMethodSystem.CurrentAPI"); }
	TComPtr<ITfInputProcessorProfiles>& TSFInputProcessorProfilesField() { return *GetNativePointerField<TComPtr<ITfInputProcessorProfiles>*>(this, "FWindowsTextInputMethodSystem.TSFInputProcessorProfiles"); }
	TComPtr<ITfInputProcessorProfileMgr>& TSFInputProcessorProfileManagerField() { return *GetNativePointerField<TComPtr<ITfInputProcessorProfileMgr>*>(this, "FWindowsTextInputMethodSystem.TSFInputProcessorProfileManager"); }
	TComPtr<ITfThreadMgr>& TSFThreadManagerField() { return *GetNativePointerField<TComPtr<ITfThreadMgr>*>(this, "FWindowsTextInputMethodSystem.TSFThreadManager"); }
	unsigned int& TSFClientIdField() { return *GetNativePointerField<unsigned int*>(this, "FWindowsTextInputMethodSystem.TSFClientId"); }
	TComPtr<ITfDocumentMgr>& TSFDisabledDocumentManagerField() { return *GetNativePointerField<TComPtr<ITfDocumentMgr>*>(this, "FWindowsTextInputMethodSystem.TSFDisabledDocumentManager"); }
	TComPtr<FTSFActivationProxy>& TSFActivationProxyField() { return *GetNativePointerField<TComPtr<FTSFActivationProxy>*>(this, "FWindowsTextInputMethodSystem.TSFActivationProxy"); }
	HIMC__ * IMMContextIdField() { return GetNativePointerField<HIMC__ *>(this, "FWindowsTextInputMethodSystem.IMMContextId"); }
	unsigned int& IMMPropertiesField() { return *GetNativePointerField<unsigned int*>(this, "FWindowsTextInputMethodSystem.IMMProperties"); }
};

