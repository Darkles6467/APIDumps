#pragma once

#include "BaseDeclarations.h"
struct EHExceptionRecord
{
	char __padding[0x40L];
	unsigned int& ExceptionCodeField() { return *GetNativePointerField<unsigned int*>(this, "EHExceptionRecord.ExceptionCode"); }
	unsigned int& ExceptionFlagsField() { return *GetNativePointerField<unsigned int*>(this, "EHExceptionRecord.ExceptionFlags"); }
	_EXCEPTION_RECORD * ExceptionRecordField() { return GetNativePointerField<_EXCEPTION_RECORD *>(this, "EHExceptionRecord.ExceptionRecord"); }
	void * ExceptionAddressField() { return GetNativePointerField<void *>(this, "EHExceptionRecord.ExceptionAddress"); }
	unsigned int& NumberParametersField() { return *GetNativePointerField<unsigned int*>(this, "EHExceptionRecord.NumberParameters"); }
	EHExceptionRecord::EHParameters& paramsField() { return *GetNativePointerField<EHExceptionRecord::EHParameters*>(this, "EHExceptionRecord.params"); }
};

