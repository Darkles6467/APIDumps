#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UKismetRenderingLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void BeginDrawCanvasToRenderTarget(UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, UCanvas ** Canvas, FVector2D * Size, FDrawToRenderTargetContext * Context) { NativeCall<void, UObject *, UTextureRenderTarget2D *, UCanvas **, FVector2D *, FDrawToRenderTargetContext *>(nullptr, "UKismetRenderingLibrary.BeginDrawCanvasToRenderTarget", WorldContextObject, TextureRenderTarget, Canvas, Size, Context); }
	static void ClearRenderTarget2D(UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, FLinearColor ClearColor) { NativeCall<void, UObject *, UTextureRenderTarget2D *, FLinearColor>(nullptr, "UKismetRenderingLibrary.ClearRenderTarget2D", WorldContextObject, TextureRenderTarget, ClearColor); }
	static void ConvertRenderTargetToTexture2DEditorOnly(UObject * WorldContextObject, UTextureRenderTarget2D * RenderTarget, UTexture2D * Texture) { NativeCall<void, UObject *, UTextureRenderTarget2D *, UTexture2D *>(nullptr, "UKismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly", WorldContextObject, RenderTarget, Texture); }
	static void DrawMaterialToRenderTarget(UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, UMaterialInterface * Material) { NativeCall<void, UObject *, UTextureRenderTarget2D *, UMaterialInterface *>(nullptr, "UKismetRenderingLibrary.DrawMaterialToRenderTarget", WorldContextObject, TextureRenderTarget, Material); }
	static void EndDrawCanvasToRenderTarget(UObject * WorldContextObject, const FDrawToRenderTargetContext * Context) { NativeCall<void, UObject *, const FDrawToRenderTargetContext *>(nullptr, "UKismetRenderingLibrary.EndDrawCanvasToRenderTarget", WorldContextObject, Context); }
	static void ExportTexture2D(UObject * WorldContextObject, UTexture2D * Texture, const FString * FilePath, const FString * FileName) { NativeCall<void, UObject *, UTexture2D *, const FString *, const FString *>(nullptr, "UKismetRenderingLibrary.ExportTexture2D", WorldContextObject, Texture, FilePath, FileName); }
	static FColor * ReadRenderTargetPixel(FColor * result, UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, int X, int Y) { return NativeCall<FColor *, FColor *, UObject *, UTextureRenderTarget2D *, int, int>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetPixel", result, WorldContextObject, TextureRenderTarget, X, Y); }
	static FLinearColor * ReadRenderTargetRawPixel(FLinearColor * result, UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, int X, int Y) { return NativeCall<FLinearColor *, FLinearColor *, UObject *, UTextureRenderTarget2D *, int, int>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetRawPixel", result, WorldContextObject, TextureRenderTarget, X, Y); }
	static FLinearColor * ReadRenderTargetRawUV(FLinearColor * result, UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, float U, float V) { return NativeCall<FLinearColor *, FLinearColor *, UObject *, UTextureRenderTarget2D *, float, float>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetRawUV", result, WorldContextObject, TextureRenderTarget, U, V); }
	static FColor * ReadRenderTargetUV(FColor * result, UObject * WorldContextObject, UTextureRenderTarget2D * TextureRenderTarget, float U, float V) { return NativeCall<FColor *, FColor *, UObject *, UTextureRenderTarget2D *, float, float>(nullptr, "UKismetRenderingLibrary.ReadRenderTargetUV", result, WorldContextObject, TextureRenderTarget, U, V); }
	static void ReleaseRenderTarget2D(UTextureRenderTarget2D * TextureRenderTarget) { NativeCall<void, UTextureRenderTarget2D *>(nullptr, "UKismetRenderingLibrary.ReleaseRenderTarget2D", TextureRenderTarget); }
};

