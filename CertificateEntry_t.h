#pragma once

#include "BaseDeclarations.h"
struct CertificateEntry_t
{
	char __padding[0x10L];
	const wchar_t * IssuerField() { return GetNativePointerField<const wchar_t *>(this, "CertificateEntry_t.Issuer"); }
	const wchar_t * SubjectField() { return GetNativePointerField<const wchar_t *>(this, "CertificateEntry_t.Subject"); }
};

