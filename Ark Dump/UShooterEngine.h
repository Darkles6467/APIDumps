#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FModInfo.h"
#include "SWindow.h"
#include "FWorldContext.h"

struct UEngine : UObject
{
	char __padding[0x928L];
	UFont * TinyFontField() { return GetNativePointerField<UFont *>(this, "UEngine.TinyFont"); }
	FStringAssetReference& TinyFontNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.TinyFontName"); }
	UFont * SmallFontField() { return GetNativePointerField<UFont *>(this, "UEngine.SmallFont"); }
	FStringAssetReference& SmallFontNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.SmallFontName"); }
	UFont * MediumFontField() { return GetNativePointerField<UFont *>(this, "UEngine.MediumFont"); }
	FStringAssetReference& MediumFontNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.MediumFontName"); }
	UFont * LargeFontField() { return GetNativePointerField<UFont *>(this, "UEngine.LargeFont"); }
	FStringAssetReference& LargeFontNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.LargeFontName"); }
	UFont * SubtitleFontField() { return GetNativePointerField<UFont *>(this, "UEngine.SubtitleFont"); }
	FStringAssetReference& SubtitleFontNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.SubtitleFontName"); }
	TArray<UFont *>& AdditionalFontsField() { return *GetNativePointerField<TArray<UFont *>*>(this, "UEngine.AdditionalFonts"); }
	TArray<FString>& AdditionalFontNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.AdditionalFontNames"); }
	TSubclassOf<UConsole>& ConsoleClassField() { return *GetNativePointerField<TSubclassOf<UConsole>*>(this, "UEngine.ConsoleClass"); }
	FStringClassReference& ConsoleClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.ConsoleClassName"); }
	FStringClassReference& GameViewportClientClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.GameViewportClientClassName"); }
	FStringClassReference& LocalPlayerClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.LocalPlayerClassName"); }
	FStringClassReference& WorldSettingsClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.WorldSettingsClassName"); }
	FStringClassReference& NavigationSystemClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.NavigationSystemClassName"); }
	TSubclassOf<UNavigationSystem>& NavigationSystemClassField() { return *GetNativePointerField<TSubclassOf<UNavigationSystem>*>(this, "UEngine.NavigationSystemClass"); }
	FStringClassReference& AvoidanceManagerClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.AvoidanceManagerClassName"); }
	TSubclassOf<UAvoidanceManager>& AvoidanceManagerClassField() { return *GetNativePointerField<TSubclassOf<UAvoidanceManager>*>(this, "UEngine.AvoidanceManagerClass"); }
	TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "UEngine.PhysicsCollisionHandlerClass"); }
	FStringClassReference& PhysicsCollisionHandlerClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.PhysicsCollisionHandlerClassName"); }
	FStringClassReference& GameUserSettingsClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.GameUserSettingsClassName"); }
	TSubclassOf<ALevelScriptActor>& LevelScriptActorClassField() { return *GetNativePointerField<TSubclassOf<ALevelScriptActor>*>(this, "UEngine.LevelScriptActorClass"); }
	FStringClassReference& LevelScriptActorClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.LevelScriptActorClassName"); }
	FStringClassReference& DefaultBlueprintBaseClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.DefaultBlueprintBaseClassName"); }
	FStringClassReference& GameSingletonClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.GameSingletonClassName"); }
	UTireType * DefaultTireTypeField() { return GetNativePointerField<UTireType *>(this, "UEngine.DefaultTireType"); }
	FStringAssetReference& DefaultTireTypeNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultTireTypeName"); }
	FStringClassReference& DefaultPreviewPawnClassNameField() { return *GetNativePointerField<FStringClassReference*>(this, "UEngine.DefaultPreviewPawnClassName"); }
	FString& PlayOnConsoleSaveDirField() { return *GetNativePointerField<FString*>(this, "UEngine.PlayOnConsoleSaveDir"); }
	FStringAssetReference& DefaultTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultTextureName"); }
	FStringAssetReference& DefaultDiffuseTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultDiffuseTextureName"); }
	FStringAssetReference& DefaultBSPVertexTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultBSPVertexTextureName"); }
	FStringAssetReference& HighFrequencyNoiseTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.HighFrequencyNoiseTextureName"); }
	FStringAssetReference& DefaultBokehTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultBokehTextureName"); }
	UMaterial * WireframeMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.WireframeMaterial"); }
	FStringAssetReference& WireframeMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.WireframeMaterialName"); }
	UMaterial * DebugMeshMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.DebugMeshMaterial"); }
	FStringAssetReference& DebugMeshMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DebugMeshMaterialName"); }
	UMaterial * LevelColorationLitMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.LevelColorationLitMaterial"); }
	FStringAssetReference& LevelColorationLitMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.LevelColorationLitMaterialName"); }
	UMaterial * LevelColorationUnlitMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.LevelColorationUnlitMaterial"); }
	FStringAssetReference& LevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.LevelColorationUnlitMaterialName"); }
	UMaterial * LightingTexelDensityMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.LightingTexelDensityMaterial"); }
	FStringAssetReference& LightingTexelDensityNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.LightingTexelDensityName"); }
	UMaterial * ShadedLevelColorationLitMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
	FStringAssetReference& ShadedLevelColorationLitMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.ShadedLevelColorationLitMaterialName"); }
	UMaterial * ShadedLevelColorationUnlitMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
	FStringAssetReference& ShadedLevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.ShadedLevelColorationUnlitMaterialName"); }
	UMaterial * RemoveSurfaceMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.RemoveSurfaceMaterial"); }
	FStringAssetReference& RemoveSurfaceMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.RemoveSurfaceMaterialName"); }
	UMaterial * VertexColorMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorMaterial"); }
	FStringAssetReference& VertexColorMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorMaterialName"); }
	UMaterial * VertexColorViewModeMaterial_ColorOnlyField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
	FStringAssetReference& VertexColorViewModeMaterialName_ColorOnlyField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorViewModeMaterialName_ColorOnly"); }
	UMaterial * VertexColorViewModeMaterial_AlphaAsColorField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
	FStringAssetReference& VertexColorViewModeMaterialName_AlphaAsColorField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorViewModeMaterialName_AlphaAsColor"); }
	UMaterial * VertexColorViewModeMaterial_RedOnlyField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
	FStringAssetReference& VertexColorViewModeMaterialName_RedOnlyField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorViewModeMaterialName_RedOnly"); }
	UMaterial * VertexColorViewModeMaterial_GreenOnlyField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
	FStringAssetReference& VertexColorViewModeMaterialName_GreenOnlyField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorViewModeMaterialName_GreenOnly"); }
	UMaterial * VertexColorViewModeMaterial_BlueOnlyField() { return GetNativePointerField<UMaterial *>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
	FStringAssetReference& VertexColorViewModeMaterialName_BlueOnlyField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.VertexColorViewModeMaterialName_BlueOnly"); }
	UMaterial * ConstraintLimitMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.ConstraintLimitMaterial"); }
	FStringAssetReference& ConstraintLimitMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.ConstraintLimitMaterialName"); }
	UMaterial * InvalidLightmapSettingsMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
	FStringAssetReference& InvalidLightmapSettingsMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.InvalidLightmapSettingsMaterialName"); }
	UMaterial * PreviewShadowsIndicatorMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
	FStringAssetReference& PreviewShadowsIndicatorMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.PreviewShadowsIndicatorMaterialName"); }
	UMaterial * ArrowMaterialField() { return GetNativePointerField<UMaterial *>(this, "UEngine.ArrowMaterial"); }
	FStringAssetReference& ArrowMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.ArrowMaterialName"); }
	FLinearColor& LightingOnlyBrightnessField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightingOnlyBrightness"); }
	TArray<FColor>& LightComplexityColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "UEngine.LightComplexityColors"); }
	TArray<FLinearColor>& ShaderComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.ShaderComplexityColors"); }
	TArray<FLinearColor>& StationaryLightOverlapColorsField() { return *GetNativePointerField<TArray<FLinearColor>*>(this, "UEngine.StationaryLightOverlapColors"); }
	float& MaxPixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
	float& MaxES2PixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxES2PixelShaderAdditiveComplexityCount"); }
	float& MinLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
	float& IdealLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
	float& MaxLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
	float& RenderLightMapDensityGrayscaleScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
	float& RenderLightMapDensityColorScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
	FLinearColor& LightMapDensityVertexMappedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensityVertexMappedColor"); }
	FLinearColor& LightMapDensitySelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensitySelectedColor"); }
	TArray<FStatColorMapping>& StatColorMappingsField() { return *GetNativePointerField<TArray<FStatColorMapping>*>(this, "UEngine.StatColorMappings"); }
	UPhysicalMaterial * DefaultPhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "UEngine.DefaultPhysMaterial"); }
	FStringAssetReference& DefaultPhysMaterialNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.DefaultPhysMaterialName"); }
	TArray<FGameNameRedirect>& ActiveGameNameRedirectsField() { return *GetNativePointerField<TArray<FGameNameRedirect>*>(this, "UEngine.ActiveGameNameRedirects"); }
	TArray<FClassRedirect>& ActiveClassRedirectsField() { return *GetNativePointerField<TArray<FClassRedirect>*>(this, "UEngine.ActiveClassRedirects"); }
	TArray<FPluginRedirect>& ActivePluginRedirectsField() { return *GetNativePointerField<TArray<FPluginRedirect>*>(this, "UEngine.ActivePluginRedirects"); }
	TArray<FStructRedirect>& ActiveStructRedirectsField() { return *GetNativePointerField<TArray<FStructRedirect>*>(this, "UEngine.ActiveStructRedirects"); }
	FStringAssetReference& PreIntegratedSkinBRDFTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.PreIntegratedSkinBRDFTextureName"); }
	FStringAssetReference& MiniFontTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.MiniFontTextureName"); }
	FStringAssetReference& WeightMapPlaceholderTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.WeightMapPlaceholderTextureName"); }
	FStringAssetReference& LightMapDensityTextureNameField() { return *GetNativePointerField<FStringAssetReference*>(this, "UEngine.LightMapDensityTextureName"); }
	TArray<FString>& DeferredCommandsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.DeferredCommands"); }
	int& TickCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.TickCycles"); }
	int& GameCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.GameCycles"); }
	int& ClientCyclesField() { return *GetNativePointerField<int*>(this, "UEngine.ClientCycles"); }
	float& NearClipPlaneField() { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
	float& TimeBetweenPurgingPendingKillObjectsField() { return *GetNativePointerField<float*>(this, "UEngine.TimeBetweenPurgingPendingKillObjects"); }
	float& AsyncLoadingTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.AsyncLoadingTimeLimit"); }
	float& PriorityAsyncLoadingExtraTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PriorityAsyncLoadingExtraTime"); }
	float& LevelStreamingActorsUpdateTimeLimitField() { return *GetNativePointerField<float*>(this, "UEngine.LevelStreamingActorsUpdateTimeLimit"); }
	int& LevelStreamingComponentsRegistrationGranularityField() { return *GetNativePointerField<int*>(this, "UEngine.LevelStreamingComponentsRegistrationGranularity"); }
	int& MaximumLoopIterationCountField() { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
	TRange<float>& SmoothedFrameRateRangeField() { return *GetNativePointerField<TRange<float>*>(this, "UEngine.SmoothedFrameRateRange"); }
	int& NumPawnsAllowedToBeSpawnedInAFrameField() { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
	FColor& C_WorldBoxField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WorldBox"); }
	FColor& C_BrushWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushWire"); }
	FColor& C_AddWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_AddWire"); }
	FColor& C_SubtractWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SubtractWire"); }
	FColor& C_SemiSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SemiSolidWire"); }
	FColor& C_NonSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_NonSolidWire"); }
	FColor& C_WireBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WireBackground"); }
	FColor& C_ScaleBoxHiField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_ScaleBoxHi"); }
	FColor& C_VolumeCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_VolumeCollision"); }
	FColor& C_BSPCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BSPCollision"); }
	FColor& C_OrthoBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_OrthoBackground"); }
	FColor& C_VolumeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_Volume"); }
	FColor& C_BrushShapeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushShape"); }
	float& StreamingDistanceFactorField() { return *GetNativePointerField<float*>(this, "UEngine.StreamingDistanceFactor"); }
	TEnumAsByte<enum ETransitionType>& TransitionTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionType>*>(this, "UEngine.TransitionType"); }
	FString& TransitionDescriptionField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
	FString& TransitionGameModeField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
	float& MeshLODRangeField() { return *GetNativePointerField<float*>(this, "UEngine.MeshLODRange"); }
	float& CameraRotationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
	float& CameraTranslationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
	float& PrimitiveProbablyVisibleTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
	float& MaxOcclusionPixelsFractionField() { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
	int& MaxParticleResizeField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
	int& MaxParticleResizeWarnField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
	TArray<FDropNoteInfo>& PendingDroppedNotesField() { return *GetNativePointerField<TArray<FDropNoteInfo>*>(this, "UEngine.PendingDroppedNotes"); }
	FRigidBodyErrorCorrection& PhysicErrorCorrectionField() { return *GetNativePointerField<FRigidBodyErrorCorrection*>(this, "UEngine.PhysicErrorCorrection"); }
	float& NetClientTicksPerSecondField() { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
	float& DisplayGammaField() { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
	float& MinDesiredFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.MinDesiredFrameRate"); }
	FLinearColor& DefaultSelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.DefaultSelectedMaterialColor"); }
	FLinearColor& SelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColor"); }
	FLinearColor& SelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectionOutlineColor"); }
	FLinearColor& SelectedMaterialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColorOverride"); }
	bool& bIsOverridingSelectedColorField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsOverridingSelectedColor"); }
	unsigned int& bEnableVisualLogRecordingOnStartField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
	UDeviceProfileManager * DeviceProfileManagerField() { return GetNativePointerField<UDeviceProfileManager *>(this, "UEngine.DeviceProfileManager"); }
	int& ScreenSaverInhibitorSemaphoreField() { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
	FString& MatineeCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineeCaptureName"); }
	FString& MatineePackageCaptureNameField() { return *GetNativePointerField<FString*>(this, "UEngine.MatineePackageCaptureName"); }
	int& MatineeCaptureFPSField() { return *GetNativePointerField<int*>(this, "UEngine.MatineeCaptureFPS"); }
	TEnumAsByte<enum EMatineeCaptureType::Type>& MatineeCaptureTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMatineeCaptureType::Type>*>(this, "UEngine.MatineeCaptureType"); }
	bool& bNoTextureStreamingField() { return *GetNativePointerField<bool*>(this, "UEngine.bNoTextureStreaming"); }
	FString& ParticleEventManagerClassPathField() { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
	TArray<FScreenMessageString>& PriorityScreenMessagesField() { return *GetNativePointerField<TArray<FScreenMessageString>*>(this, "UEngine.PriorityScreenMessages"); }
	float& SelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
	float& BSPSelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
	float& HoverHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.HoverHighlightIntensity"); }
	float& SelectionHighlightIntensityBillboardsField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
	FString& LastModDownloadTextField() { return *GetNativePointerField<FString*>(this, "UEngine.LastModDownloadText"); }
	FString& PrimalNetAuth_MyIPStrField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_MyIPStr"); }
	FString& PrimalNetAuth_TokenField() { return *GetNativePointerField<FString*>(this, "UEngine.PrimalNetAuth_Token"); }
	TArray<unsigned char>& Primal_SteelShieldTokenField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UEngine.Primal_SteelShieldToken"); }
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "UEngine.bIsInitialized"); }
	FScreenSaverInhibitor * ScreenSaverInhibitorRunnableField() { return GetNativePointerField<FScreenSaverInhibitor *>(this, "UEngine.ScreenSaverInhibitorRunnable"); }
	bool& bPendingHardwareSurveyResultsField() { return *GetNativePointerField<bool*>(this, "UEngine.bPendingHardwareSurveyResults"); }
	TArray<FNetDriverDefinition>& NetDriverDefinitionsField() { return *GetNativePointerField<TArray<FNetDriverDefinition>*>(this, "UEngine.NetDriverDefinitions"); }
	TArray<FString>& ServerActorsField() { return *GetNativePointerField<TArray<FString>*>(this, "UEngine.ServerActors"); }
	TIndirectArray<FWorldContext>& WorldListField() { return *GetNativePointerField<TIndirectArray<FWorldContext>*>(this, "UEngine.WorldList"); }
	int& NextWorldContextHandleField() { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }

	// Functions

	const TIndirectArray<FWorldContext> * GetWorldContexts() { return NativeCall<const TIndirectArray<FWorldContext> *>(this, "UEngine.GetWorldContexts"); }
	void FEngineStatFuncs() { NativeCall<void>(this, "UEngine.FEngineStatFuncs"); }
	void FOnNetworkFailure() { NativeCall<void>(this, "UEngine.FOnNetworkFailure"); }
	FString * GetLastModDownloadText(FString * result) { return NativeCall<FString *, FString *>(this, "UEngine.GetLastModDownloadText", result); }
	bool IsInitialized() { return NativeCall<bool>(this, "UEngine.IsInitialized"); }
	void BroadcastNetworkFailure(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "UEngine.BroadcastNetworkFailure", World, NetDriver, FailureType, ErrorString); }
	void DumpFPSChart(const FString * InMapName, bool bForceDump) { NativeCall<void, const FString *, bool>(this, "UEngine.DumpFPSChart", InMapName, bForceDump); }
	void DumpFPSChartToLog(float TotalTime, float DeltaTime, int NumFrames, const FString * InMapName) { NativeCall<void, float, float, int, const FString *>(this, "UEngine.DumpFPSChartToLog", TotalTime, DeltaTime, NumFrames, InMapName); }
	void StartFPSChart() { NativeCall<void>(this, "UEngine.StartFPSChart"); }
	void StopFPSChart() { NativeCall<void>(this, "UEngine.StopFPSChart"); }
	void TickFPSChart(float DeltaSeconds) { NativeCall<void, float>(this, "UEngine.TickFPSChart", DeltaSeconds); }
	FString * GetCurrentModPath(FString * result) { return NativeCall<FString *, FString *>(this, "UEngine.GetCurrentModPath", result); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UEngine.LoadMapRedrawViewports"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UEngine.Tick", DeltaSeconds, bIdleMode); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UEngine.AddReferencedObjects", InThis, Collector); }
	EBrowseReturnVal::Type Browse(FWorldContext * WorldContext, FURL URL, FString * Error) { return NativeCall<EBrowseReturnVal::Type, FWorldContext *, FURL, FString *>(this, "UEngine.Browse", WorldContext, URL, Error); }
	void BrowseToDefaultMap(FWorldContext * Context) { NativeCall<void, FWorldContext *>(this, "UEngine.BrowseToDefaultMap", Context); }
	void CancelAllPending() { NativeCall<void>(this, "UEngine.CancelAllPending"); }
	void CancelPending(FWorldContext * Context) { NativeCall<void, FWorldContext *>(this, "UEngine.CancelPending", Context); }
	void CancelPending(UNetDriver * PendingNetGameDriver) { NativeCall<void, UNetDriver *>(this, "UEngine.CancelPending", PendingNetGameDriver); }
	void CancelPending(UWorld * InWorld, UPendingNetGame * NewPendingNetGame) { NativeCall<void, UWorld *, UPendingNetGame *>(this, "UEngine.CancelPending", InWorld, NewPendingNetGame); }
	void CancelPendingMapChange(FWorldContext * Context) { NativeCall<void, FWorldContext *>(this, "UEngine.CancelPendingMapChange", Context); }
	void CleanupPackagesToFullyLoad(FWorldContext * Context, EFullyLoadPackageType FullyLoadType, const FString * Tag) { NativeCall<void, FWorldContext *, EFullyLoadPackageType, const FString *>(this, "UEngine.CleanupPackagesToFullyLoad", Context, FullyLoadType, Tag); }
	void ClearDebugDisplayProperties() { NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties"); }
	bool CommitMapChange(FWorldContext * Context) { return NativeCall<bool, FWorldContext *>(this, "UEngine.CommitMapChange", Context); }
	void ConditionalCommitMapChange(FWorldContext * Context) { NativeCall<void, FWorldContext *>(this, "UEngine.ConditionalCommitMapChange", Context); }
	static void CopyPropertiesForUnrelatedObjects(UObject * OldObject, UObject * NewObject, UEngine::FCopyPropertiesForUnrelatedObjectsParams Params) { NativeCall<void, UObject *, UObject *, UEngine::FCopyPropertiesForUnrelatedObjectsParams>(nullptr, "UEngine.CopyPropertiesForUnrelatedObjects", OldObject, NewObject, Params); }
	void CreateGameUserSettings() { NativeCall<void>(this, "UEngine.CreateGameUserSettings"); }
	bool CreateNamedNetDriver(UPendingNetGame * PendingNetGame, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UPendingNetGame *, FName, FName>(this, "UEngine.CreateNamedNetDriver", PendingNetGame, NetDriverName, NetDriverDefinition); }
	bool CreateNamedNetDriver(UWorld * InWorld, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UWorld *, FName, FName>(this, "UEngine.CreateNamedNetDriver", InWorld, NetDriverName, NetDriverDefinition); }
	FWorldContext * CreateNewWorldContext(EWorldType::Type WorldType) { return NativeCall<FWorldContext *, EWorldType::Type>(this, "UEngine.CreateNewWorldContext", WorldType); }
	void DestroyNamedNetDriver(UPendingNetGame * PendingNetGame, FName NetDriverName) { NativeCall<void, UPendingNetGame *, FName>(this, "UEngine.DestroyNamedNetDriver", PendingNetGame, NetDriverName); }
	void DestroyNamedNetDriver(UWorld * InWorld, FName NetDriverName) { NativeCall<void, UWorld *, FName>(this, "UEngine.DestroyNamedNetDriver", InWorld, NetDriverName); }
	void DestroyWorldContext(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UEngine.DestroyWorldContext", InWorld); }
	void EnableScreenSaver(bool bEnable) { NativeCall<void, bool>(this, "UEngine.EnableScreenSaver", bEnable); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UEngine.Exec", InWorld, Cmd, Ar); }
	void ExecEngineStat(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * InName) { NativeCall<void, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ExecEngineStat", World, ViewportClient, InName); }
	void FinishDestroy() { NativeCall<void>(this, "UEngine.FinishDestroy"); }
	void GetAllLocalPlayerControllers(TArray<APlayerController *> * PlayerList) { NativeCall<void, TArray<APlayerController *> *>(this, "UEngine.GetAllLocalPlayerControllers", PlayerList); }
	static UFont * GetLargeFont() { return NativeCall<UFont *>(nullptr, "UEngine.GetLargeFont"); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate", DeltaTime, bAllowFrameRateSmoothing); }
	static UFont * GetMediumFont() { return NativeCall<UFont *>(nullptr, "UEngine.GetMediumFont"); }
	int GetNumGamePlayers(UWorld * InWorld) { return NativeCall<int, UWorld *>(this, "UEngine.GetNumGamePlayers", InWorld); }
	int GetNumGamePlayers(const UGameViewportClient * InViewport) { return NativeCall<int, const UGameViewportClient *>(this, "UEngine.GetNumGamePlayers", InViewport); }
	static FGuid * GetPackageGuid(FGuid * result, FName PackageName) { return NativeCall<FGuid *, FGuid *, FName>(nullptr, "UEngine.GetPackageGuid", result, PackageName); }
	static UFont * GetSmallFont() { return NativeCall<UFont *>(nullptr, "UEngine.GetSmallFont"); }
	static UFont * GetSubtitleFont() { return NativeCall<UFont *>(nullptr, "UEngine.GetSubtitleFont"); }
	static UFont * GetTinyFont() { return NativeCall<UFont *>(nullptr, "UEngine.GetTinyFont"); }
	FWorldContext * GetWorldContextFromGameViewportChecked(const UGameViewportClient * InViewport) { return NativeCall<FWorldContext *, const UGameViewportClient *>(this, "UEngine.GetWorldContextFromGameViewportChecked", InViewport); }
	FWorldContext * GetWorldContextFromHandleChecked(const FName WorldContextHandle) { return NativeCall<FWorldContext *, const FName>(this, "UEngine.GetWorldContextFromHandleChecked", WorldContextHandle); }
	FWorldContext * GetWorldContextFromPendingNetGameNetDriverChecked(const UNetDriver * InPendingNetDriver) { return NativeCall<FWorldContext *, const UNetDriver *>(this, "UEngine.GetWorldContextFromPendingNetGameNetDriverChecked", InPendingNetDriver); }
	FWorldContext * GetWorldContextFromWorld(const UWorld * InWorld) { return NativeCall<FWorldContext *, const UWorld *>(this, "UEngine.GetWorldContextFromWorld", InWorld); }
	FWorldContext * GetWorldContextFromWorldChecked(UWorld * InWorld) { return NativeCall<FWorldContext *, UWorld *>(this, "UEngine.GetWorldContextFromWorldChecked", InWorld); }
	UWorld * GetWorldFromContextObject(UObject * Object, bool bChecked) { return NativeCall<UWorld *, UObject *, bool>(this, "UEngine.GetWorldFromContextObject", Object, bChecked); }
	bool HandleCeCommand(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleCeCommand", InWorld, Cmd, Ar); }
	bool HandleCheckLightsCommand(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleCheckLightsCommand", InWorld, Cmd, Ar); }
	bool HandleCrackURLCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleCrackURLCommand", Cmd, Ar); }
	bool HandleDeferCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleDeferCommand", Cmd, Ar); }
	void HandleDisconnect(UWorld * InWorld, UNetDriver * NetDriver) { NativeCall<void, UWorld *, UNetDriver *>(this, "UEngine.HandleDisconnect", InWorld, NetDriver); }
	bool HandleDisconnectCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleDisconnectCommand", Cmd, Ar, InWorld); }
	bool HandleDumpShaderStatsCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleDumpShaderStatsCommand", Cmd, Ar); }
	bool HandleDumpTicksCommand(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleDumpTicksCommand", InWorld, Cmd, Ar); }
	bool HandleGameVerCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleGameVerCommand", Cmd, Ar); }
	bool HandleGammaCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleGammaCommand", Cmd, Ar); }
	bool HandleLogShadowsCommand(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleLogShadowsCommand", InWorld, Cmd, Ar); }
	void HandleNetworkFailure(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "UEngine.HandleNetworkFailure", World, NetDriver, FailureType, ErrorString); }
	bool HandleOpenCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleOpenCommand", Cmd, Ar, InWorld); }
	bool HandleReconnectCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleReconnectCommand", Cmd, Ar, InWorld); }
	bool HandleSayCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleSayCommand", Cmd, Ar, InWorld); }
	bool HandleServerTravelCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleServerTravelCommand", Cmd, Ar, InWorld); }
	bool HandleStartMovieCaptureCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleStartMovieCaptureCommand", Cmd, Ar); }
	bool HandleStatCommand(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleStatCommand", World, ViewportClient, Cmd, Ar); }
	bool HandleStopMovieCaptureCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UEngine.HandleStopMovieCaptureCommand", Cmd, Ar); }
	bool HandleStreamMapCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleStreamMapCommand", Cmd, Ar, InWorld); }
	bool HandleTravelCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UEngine.HandleTravelCommand", Cmd, Ar, InWorld); }
	void HandleTravelFailure(UWorld * InWorld, ETravelFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, ETravelFailure::Type, const FString *>(this, "UEngine.HandleTravelFailure", InWorld, FailureType, ErrorString); }
	static FString * HardwareSurveyBucketRAM(FString * result, unsigned int MemoryMB) { return NativeCall<FString *, FString *, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketRAM", result, MemoryMB); }
	static FString * HardwareSurveyBucketResolution(FString * result, unsigned int DisplayWidth, unsigned int DisplayHeight) { return NativeCall<FString *, FString *, unsigned int, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketResolution", result, DisplayWidth, DisplayHeight); }
	static FString * HardwareSurveyBucketVRAM(FString * result, unsigned int VidMemoryMB) { return NativeCall<FString *, FString *, unsigned int>(nullptr, "UEngine.HardwareSurveyBucketVRAM", result, VidMemoryMB); }
	void Init(IEngineLoop * InEngineLoop) { NativeCall<void, IEngineLoop *>(this, "UEngine.Init", InEngineLoop); }
	void InitHardwareSurvey() { NativeCall<void>(this, "UEngine.InitHardwareSurvey"); }
	bool InitializeAudioDevice() { return NativeCall<bool>(this, "UEngine.InitializeAudioDevice"); }
	bool InitializeHMDDevice() { return NativeCall<bool>(this, "UEngine.InitializeHMDDevice"); }
	void InitializeObjectReferences() { NativeCall<void>(this, "UEngine.InitializeObjectReferences"); }
	bool IsEngineStat(const FString * InName) { return NativeCall<bool, const FString *>(this, "UEngine.IsEngineStat", InName); }
	bool IsPreparingMapChange(FWorldContext * Context) { return NativeCall<bool, FWorldContext *>(this, "UEngine.IsPreparingMapChange", Context); }
	bool IsSplitScreen(UWorld * InWorld) { return NativeCall<bool, UWorld *>(this, "UEngine.IsSplitScreen", InWorld); }
	bool IsStereoscopic3D(FViewport * InViewport) { return NativeCall<bool, FViewport *>(this, "UEngine.IsStereoscopic3D", InViewport); }
	FURL * LastURLFromWorld(UWorld * World) { return NativeCall<FURL *, UWorld *>(this, "UEngine.LastURLFromWorld", World); }
	bool LoadMap(FWorldContext * WorldContext, FURL URL, UPendingNetGame * Pending, FString * Error) { return NativeCall<bool, FWorldContext *, FURL, UPendingNetGame *, FString *>(this, "UEngine.LoadMap", WorldContext, URL, Pending, Error); }
	void LoadPackagesFully(UWorld * InWorld, EFullyLoadPackageType FullyLoadType, const FString * Tag) { NativeCall<void, UWorld *, EFullyLoadPackageType, const FString *>(this, "UEngine.LoadPackagesFully", InWorld, FullyLoadType, Tag); }
	bool MakeSureMapNameIsValid(FString * InOutMapName) { return NativeCall<bool, FString *>(this, "UEngine.MakeSureMapNameIsValid", InOutMapName); }
	void MovePendingLevel(FWorldContext * Context) { NativeCall<void, FWorldContext *>(this, "UEngine.MovePendingLevel", Context); }
	void OnExternalUIChange(bool bInIsOpening) { NativeCall<void, bool>(this, "UEngine.OnExternalUIChange", bInIsOpening); }
	void OnHardwareSurveyComplete(const FHardwareSurveyResults * SurveyResults) { NativeCall<void, const FHardwareSurveyResults *>(this, "UEngine.OnHardwareSurveyComplete", SurveyResults); }
	void OnLostFocusPause(bool EnablePause) { NativeCall<void, bool>(this, "UEngine.OnLostFocusPause", EnablePause); }
	void ParseCommandline() { NativeCall<void>(this, "UEngine.ParseCommandline"); }
	UPendingNetGame * PendingNetGameFromWorld(UWorld * InWorld) { return NativeCall<UPendingNetGame *, UWorld *>(this, "UEngine.PendingNetGameFromWorld", InWorld); }
	void PerformanceCapture(const FString * CaptureName) { NativeCall<void, const FString *>(this, "UEngine.PerformanceCapture", CaptureName); }
	void PreExit() { NativeCall<void>(this, "UEngine.PreExit"); }
	bool PrepareMapChange(FWorldContext * Context, const TArray<FName> * LevelNames) { return NativeCall<bool, FWorldContext *, const TArray<FName> *>(this, "UEngine.PrepareMapChange", Context, LevelNames); }
	void RecordHMDAnalytics() { NativeCall<void>(this, "UEngine.RecordHMDAnalytics"); }
	void RenderEngineStats(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int LHSX, int * InOutLHSY, int RHSX, int * InOutRHSY, const FVector * ViewLocation, const FRotator * ViewRotation) { NativeCall<void, UWorld *, FViewport *, FCanvas *, int, int *, int, int *, const FVector *, const FRotator *>(this, "UEngine.RenderEngineStats", World, Viewport, Canvas, LHSX, InOutLHSY, RHSX, InOutRHSY, ViewLocation, ViewRotation); }
	int RenderStatAI(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatAI", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatColorList(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatColorList", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatFPS(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatFPS", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatHitches(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatHitches", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatLevels(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatLevels", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatNamedEvents(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatNamedEvents", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSounds(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatSounds", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatSummary(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatSummary", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatTexture(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatTexture", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	int RenderStatUnit(UWorld * World, FViewport * Viewport, FCanvas * Canvas, int X, int Y, const FVector * ViewLocation, const FRotator * ViewRotation) { return NativeCall<int, UWorld *, FViewport *, FCanvas *, int, int, const FVector *, const FRotator *>(this, "UEngine.RenderStatUnit", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	void RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame * PendingNetGameToNotify) { NativeCall<void, UPendingNetGame *>(this, "UEngine.RequestAuthTokenThenNotifyPendingNetGame", PendingNetGameToNotify); }
	FSeamlessTravelHandler * SeamlessTravelHandlerForWorld(UWorld * World) { return NativeCall<FSeamlessTravelHandler *, UWorld *>(this, "UEngine.SeamlessTravelHandlerForWorld", World); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UEngine.Serialize", Ar); }
	void SetClientTravel(UWorld * InWorld, const wchar_t * NextURL, ETravelType InTravelType) { NativeCall<void, UWorld *, const wchar_t *, ETravelType>(this, "UEngine.SetClientTravel", InWorld, NextURL, InTravelType); }
	void SetEngineStats(UWorld * World, FCommonViewportClient * ViewportClient, const TArray<FString> * InNames, const bool bShow) { NativeCall<void, UWorld *, FCommonViewportClient *, const TArray<FString> *, const bool>(this, "UEngine.SetEngineStats", World, ViewportClient, InNames, bShow); }
	void SetShouldCommitPendingMapChange(UWorld * InWorld, bool NewShouldCommitPendingMapChange) { NativeCall<void, UWorld *, bool>(this, "UEngine.SetShouldCommitPendingMapChange", InWorld, NewShouldCommitPendingMapChange); }
	bool ShouldAbsorbAuthorityOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbAuthorityOnlyEvent"); }
	bool ShouldAbsorbCosmeticOnlyEvent() { return NativeCall<bool>(this, "UEngine.ShouldAbsorbCosmeticOnlyEvent"); }
	bool ShouldCommitPendingMapChange(UWorld * InWorld) { return NativeCall<bool, UWorld *>(this, "UEngine.ShouldCommitPendingMapChange", InWorld); }
	void ShutdownAudioDevice() { NativeCall<void>(this, "UEngine.ShutdownAudioDevice"); }
	void ShutdownWorldNetDriver(UWorld * World) { NativeCall<void, UWorld *>(this, "UEngine.ShutdownWorldNetDriver", World); }
	void SpawnServerActors(UWorld * World) { NativeCall<void, UWorld *>(this, "UEngine.SpawnServerActors", World); }
	void SwapControllerId(ULocalPlayer * NewPlayer, int CurrentControllerId, int NewControllerID) { NativeCall<void, ULocalPlayer *, int, int>(this, "UEngine.SwapControllerId", NewPlayer, CurrentControllerId, NewControllerID); }
	void TickDeferredCommands() { NativeCall<void>(this, "UEngine.TickDeferredCommands"); }
	void TickHardwareSurvey() { NativeCall<void>(this, "UEngine.TickHardwareSurvey"); }
	bool TickWorldTravel(FWorldContext * Context, float DeltaSeconds) { return NativeCall<bool, FWorldContext *, float>(this, "UEngine.TickWorldTravel", Context, DeltaSeconds); }
	bool ToggleStatDetailed(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatDetailed", World, ViewportClient, Stream); }
	bool ToggleStatFPS(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatFPS", World, ViewportClient, Stream); }
	bool ToggleStatHitches(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatHitches", World, ViewportClient, Stream); }
	bool ToggleStatNamedEvents(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatNamedEvents", World, ViewportClient, Stream); }
	bool ToggleStatSounds(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatSounds", World, ViewportClient, Stream); }
	bool ToggleStatUnit(UWorld * World, FCommonViewportClient * ViewportClient, const wchar_t * Stream) { return NativeCall<bool, UWorld *, FCommonViewportClient *, const wchar_t *>(this, "UEngine.ToggleStatUnit", World, ViewportClient, Stream); }
	void TriggerPostLoadMapEvents() { NativeCall<void>(this, "UEngine.TriggerPostLoadMapEvents"); }
	void UpdateTimeAndHandleMaxTickRate() { NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate"); }
	void UpdateTransitionType(UWorld * CurrentWorld) { NativeCall<void, UWorld *>(this, "UEngine.UpdateTransitionType", CurrentWorld); }
	bool UseSound() { return NativeCall<bool>(this, "UEngine.UseSound"); }
	void VerifyLoadMapWorldCleanup() { NativeCall<void>(this, "UEngine.VerifyLoadMapWorldCleanup"); }
	void WorldAdded(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UEngine.WorldAdded", InWorld); }
	void WorldDestroyed(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UEngine.WorldDestroyed", InWorld); }
	bool IsHardwareSurveyRequired() { return NativeCall<bool>(this, "UEngine.IsHardwareSurveyRequired"); }
};

struct UGameEngine : UEngine
{
	char __padding[0x40L];
	float& MaxDeltaTimeField() { return *GetNativePointerField<float*>(this, "UGameEngine.MaxDeltaTime"); }
	TWeakPtr<SWindow,0>& GameViewportWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "UGameEngine.GameViewportWindow"); }

	// Functions

	static void ConditionallyOverrideSettings(int * ResolutionX, int * ResolutionY, EWindowMode::Type * WindowMode) { NativeCall<void, int *, int *, EWindowMode::Type *>(nullptr, "UGameEngine.ConditionallyOverrideSettings", ResolutionX, ResolutionY, WindowMode); }
	void CreateGameViewport(UGameViewportClient * GameViewportClient) { NativeCall<void, UGameViewportClient *>(this, "UGameEngine.CreateGameViewport", GameViewportClient); }
	void CreateGameViewportWidget(UGameViewportClient * GameViewportClient) { NativeCall<void, UGameViewportClient *>(this, "UGameEngine.CreateGameViewportWidget", GameViewportClient); }
	static TSharedRef<SWindow,0> * CreateGameWindow(TSharedRef<SWindow,0> * result) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *>(nullptr, "UGameEngine.CreateGameWindow", result); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UGameEngine.Exec", InWorld, Cmd, Ar); }
	void FinishDestroy() { NativeCall<void>(this, "UGameEngine.FinishDestroy"); }
	float GetGameViewportDPIScale(UGameViewportClient * ViewportClient) { return NativeCall<float, UGameViewportClient *>(this, "UGameEngine.GetGameViewportDPIScale", ViewportClient); }
	UWorld * GetGameWorld() { return NativeCall<UWorld *>(this, "UGameEngine.GetGameWorld"); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UGameEngine.GetMaxTickRate", DeltaTime, bAllowFrameRateSmoothing); }
	bool HandleExitCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameEngine.HandleExitCommand", Cmd, Ar); }
	bool HandleGetMaxTickRateCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameEngine.HandleGetMaxTickRateCommand", Cmd, Ar); }
	bool HandleReattachComponentsCommand(const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, const wchar_t *, FOutputDevice *>(this, "UGameEngine.HandleReattachComponentsCommand", Cmd, Ar); }
	void Init(IEngineLoop * InEngineLoop) { NativeCall<void, IEngineLoop *>(this, "UGameEngine.Init", InEngineLoop); }
	void OnGameWindowClosed(const TSharedRef<SWindow,0> * WindowBeingClosed) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "UGameEngine.OnGameWindowClosed", WindowBeingClosed); }
	void OnGameWindowMoved(const TSharedRef<SWindow,0> * WindowBeingMoved) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "UGameEngine.OnGameWindowMoved", WindowBeingMoved); }
	void PreExit() { NativeCall<void>(this, "UGameEngine.PreExit"); }
	void ProcessToggleFreezeCommand(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UGameEngine.ProcessToggleFreezeCommand", InWorld); }
	void ProcessToggleFreezeStreamingCommand(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UGameEngine.ProcessToggleFreezeStreamingCommand", InWorld); }
	void RedrawViewports(bool bShouldPresent) { NativeCall<void, bool>(this, "UGameEngine.RedrawViewports", bShouldPresent); }
	void SwitchGameWindowToUseGameViewport() { NativeCall<void>(this, "UGameEngine.SwitchGameWindowToUseGameViewport"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UGameEngine.Tick", DeltaSeconds, bIdleMode); }
};

struct UShooterEngine : UGameEngine
{
	char __padding[0x20L];
	FString& LastConnectionErrorStringField() { return *GetNativePointerField<FString*>(this, "UShooterEngine.LastConnectionErrorString"); }
	FString& LastNotInstalledDLCMapNameField() { return *GetNativePointerField<FString*>(this, "UShooterEngine.LastNotInstalledDLCMapName"); }

	// Functions

	FString * GetCurrentModPath(FString * result) { return NativeCall<FString *, FString *>(this, "UShooterEngine.GetCurrentModPath", result); }
	void HandleNetworkFailure(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "UShooterEngine.HandleNetworkFailure", World, NetDriver, FailureType, ErrorString); }
	bool HasModInstalled(unsigned __int64 ModId) { return NativeCall<bool, unsigned __int64>(this, "UShooterEngine.HasModInstalled", ModId); }
	void Init(IEngineLoop * InEngineLoop) { NativeCall<void, IEngineLoop *>(this, "UShooterEngine.Init", InEngineLoop); }
	bool LoadGameMods(const TArray<FModInfo> * Mods, bool bSendNetMessage) { return NativeCall<bool, const TArray<FModInfo> *, bool>(this, "UShooterEngine.LoadGameMods", Mods, bSendNetMessage); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UShooterEngine.LoadMapRedrawViewports"); }
	void OnConfirmationDialogClosed(bool bAccept) { NativeCall<void, bool>(this, "UShooterEngine.OnConfirmationDialogClosed", bAccept); }
	void PostLoadedMods() { NativeCall<void>(this, "UShooterEngine.PostLoadedMods"); }
	void RequestAuthTokenThenNotifyPendingNetGame(UPendingNetGame * PendingNetGameToNotify) { NativeCall<void, UPendingNetGame *>(this, "UShooterEngine.RequestAuthTokenThenNotifyPendingNetGame", PendingNetGameToNotify); }
	void ShowLoadingScreenUI() { NativeCall<void>(this, "UShooterEngine.ShowLoadingScreenUI"); }
	bool UseHighQualityVFX() { return NativeCall<bool>(this, "UShooterEngine.UseHighQualityVFX"); }
};

