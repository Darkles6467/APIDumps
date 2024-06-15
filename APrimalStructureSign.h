#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"
#include "FMultiUseEntry.h"

struct APrimalStructureSign : APrimalStructure
{
	char __padding[0x30L];
	FString& SignTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSign.SignText"); }
	float& SignWidthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.SignWidth"); }
	int& MaxNumberofCharactersField() { return *GetNativePointerField<int*>(this, "APrimalStructureSign.MaxNumberofCharacters"); }
	float& MinFontSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.MinFontSize"); }
	float& DefaultScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructureSign.DefaultScale"); }
	TSubobjectPtr<UTextRenderComponent>& TextRenderField() { return *GetNativePointerField<TSubobjectPtr<UTextRenderComponent>*>(this, "APrimalStructureSign.TextRender"); }
	long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSign.LastSignNamingTime"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureSign.BeginPlay"); }
	void ClientMultiUse(APlayerController * ForPC, int UseIndex) { NativeCall<void, APlayerController *, int>(this, "APrimalStructureSign.ClientMultiUse", ForPC, UseIndex); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureSign.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetMultiUseEntries(APlayerController * ForPC, TArray<FMultiUseEntry> * MultiUseEntries) { NativeCall<void, APlayerController *, TArray<FMultiUseEntry> *>(this, "APrimalStructureSign.GetMultiUseEntries", ForPC, MultiUseEntries); }
	void OnRep_SignText(const FString * PreviousSignText) { NativeCall<void, const FString *>(this, "APrimalStructureSign.OnRep_SignText", PreviousSignText); }
	void ProcessEditText(AShooterPlayerController * ForPC, const FString * TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController *, const FString *, bool>(this, "APrimalStructureSign.ProcessEditText", ForPC, TextToUse, __formal); }
	void RefreshStructureColors(UMeshComponent * ForceRefreshComponent) { NativeCall<void, UMeshComponent *>(this, "APrimalStructureSign.RefreshStructureColors", ForceRefreshComponent); }
	bool TryMultiUse(APlayerController * ForPC, int UseIndex) { return NativeCall<bool, APlayerController *, int>(this, "APrimalStructureSign.TryMultiUse", ForPC, UseIndex); }
	void UpdatedSignText() { NativeCall<void>(this, "APrimalStructureSign.UpdatedSignText"); }
};

