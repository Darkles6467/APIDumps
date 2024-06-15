#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FAtmosphereTextureResource : FRenderResource
{
	enum ETextureType
	{
		E_Transmittance = 0x0,
		E_Irradiance = 0x1,
		E_Inscatter = 0x2,
	};

	char __padding[0x28L];
	FAtmosphereTextureResource::ETextureType& TexTypeField() { return *GetNativePointerField<FAtmosphereTextureResource::ETextureType*>(this, "FAtmosphereTextureResource.TexType"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "FAtmosphereTextureResource.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "FAtmosphereTextureResource.SizeY"); }
	int& SizeZField() { return *GetNativePointerField<int*>(this, "FAtmosphereTextureResource.SizeZ"); }
	void * TextureDataField() { return GetNativePointerField<void *>(this, "FAtmosphereTextureResource.TextureData"); }

	// Functions

	void InitRHI() { NativeCall<void>(this, "FAtmosphereTextureResource.InitRHI"); }
	void ReleaseRHI() { NativeCall<void>(this, "FAtmosphereTextureResource.ReleaseRHI"); }
};

