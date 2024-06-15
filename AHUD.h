#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "FColor.h"

struct AHUD : AActor
{
	char __padding[0xe8L];
	FColor& WhiteColorField() { return *GetNativePointerField<FColor*>(this, "AHUD.WhiteColor"); }
	FColor& GreenColorField() { return *GetNativePointerField<FColor*>(this, "AHUD.GreenColor"); }
	FColor& RedColorField() { return *GetNativePointerField<FColor*>(this, "AHUD.RedColor"); }
	float& LastHUDRenderTimeField() { return *GetNativePointerField<float*>(this, "AHUD.LastHUDRenderTime"); }
	float& RenderDeltaField() { return *GetNativePointerField<float*>(this, "AHUD.RenderDelta"); }
	TArray<FName>& DebugDisplayField() { return *GetNativePointerField<TArray<FName>*>(this, "AHUD.DebugDisplay"); }
	TArray<FName>& ToggledDebugCategoriesField() { return *GetNativePointerField<TArray<FName>*>(this, "AHUD.ToggledDebugCategories"); }
	UCanvas * CanvasField() { return GetNativePointerField<UCanvas *>(this, "AHUD.Canvas"); }
	UCanvas * DebugCanvasField() { return GetNativePointerField<UCanvas *>(this, "AHUD.DebugCanvas"); }
	TArray<FDebugTextInfo>& DebugTextListField() { return *GetNativePointerField<TArray<FDebugTextInfo>*>(this, "AHUD.DebugTextList"); }
	TArray<FHUDHitBox>& HitBoxMapField() { return *GetNativePointerField<TArray<FHUDHitBox>*>(this, "AHUD.HitBoxMap"); }
	TArray<FHUDHitBox *>& HitBoxHitsField() { return *GetNativePointerField<TArray<FHUDHitBox *>*>(this, "AHUD.HitBoxHits"); }

	// Functions

	void AddDebugText_Implementation(const FString * DebugText, AActor * SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont * InFont, float FontScale) { NativeCall<void, const FString *, AActor *, float, FVector, FVector, FColor, bool, bool, bool, UFont *, float>(this, "AHUD.AddDebugText_Implementation", DebugText, SrcActor, Duration, Offset, DesiredOffset, TextColor, bSkipOverwriteCheck, bAbsoluteLocation, bKeepAttachedToActor, InFont, FontScale); }
	void AddHitBox(FVector2D Position, FVector2D Size, FName Name, bool bConsumesInput, int Priority) { NativeCall<void, FVector2D, FVector2D, FName, bool, int>(this, "AHUD.AddHitBox", Position, Size, Name, bConsumesInput, Priority); }
	void AddPostRenderedActor(AActor * A) { NativeCall<void, AActor *>(this, "AHUD.AddPostRenderedActor", A); }
	void Deproject(float ScreenX, float ScreenY, FVector * WorldPosition, FVector * WorldDirection) { NativeCall<void, float, float, FVector *, FVector *>(this, "AHUD.Deproject", ScreenX, ScreenY, WorldPosition, WorldDirection); }
	void DrawActorOverlays(FVector Viewpoint, FRotator ViewRotation) { NativeCall<void, FVector, FRotator>(this, "AHUD.DrawActorOverlays", Viewpoint, ViewRotation); }
	void DrawDebugTextList() { NativeCall<void>(this, "AHUD.DrawDebugTextList"); }
	void DrawHUD() { NativeCall<void>(this, "AHUD.DrawHUD"); }
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor) { NativeCall<void, float, float, float, float, FLinearColor>(this, "AHUD.DrawLine", StartScreenX, StartScreenY, EndScreenX, EndScreenY, LineColor); }
	void DrawMaterial(UMaterialInterface * Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) { NativeCall<void, UMaterialInterface *, float, float, float, float, float, float, float, float, float, bool, float, FVector2D>(this, "AHUD.DrawMaterial", Material, ScreenX, ScreenY, ScreenW, ScreenH, MaterialU, MaterialV, MaterialUWidth, MaterialVHeight, Scale, bScalePosition, Rotation, RotPivot); }
	void DrawMaterialSimple(UMaterialInterface * Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) { NativeCall<void, UMaterialInterface *, float, float, float, float, float, bool>(this, "AHUD.DrawMaterialSimple", Material, ScreenX, ScreenY, ScreenW, ScreenH, Scale, bScalePosition); }
	void DrawRect(FLinearColor Color, float ScreenX, float ScreenY, float Width, float Height) { NativeCall<void, FLinearColor, float, float, float, float>(this, "AHUD.DrawRect", Color, ScreenX, ScreenY, Width, Height); }
	void DrawText(const FString * Text, FLinearColor Color, float ScreenX, float ScreenY, UFont * Font, float Scale, bool bScalePosition) { NativeCall<void, const FString *, FLinearColor, float, float, UFont *, float, bool>(this, "AHUD.DrawText", Text, Color, ScreenX, ScreenY, Font, Scale, bScalePosition); }
	void DrawText(const FString * Text, FVector2D Position, UFont * TextFont, FVector2D FontScale, FColor TextColor) { NativeCall<void, const FString *, FVector2D, UFont *, FVector2D, FColor>(this, "AHUD.DrawText", Text, Position, TextFont, FontScale, TextColor); }
	void DrawTexture(UTexture * Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor Color, EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) { NativeCall<void, UTexture *, float, float, float, float, float, float, float, float, FLinearColor, EBlendMode, float, bool, float, FVector2D>(this, "AHUD.DrawTexture", Texture, ScreenX, ScreenY, ScreenW, ScreenH, TextureU, TextureV, TextureUWidth, TextureVHeight, Color, BlendMode, Scale, bScalePosition, Rotation, RotPivot); }
	void DrawTextureSimple(UTexture * Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) { NativeCall<void, UTexture *, float, float, float, bool>(this, "AHUD.DrawTextureSimple", Texture, ScreenX, ScreenY, Scale, bScalePosition); }
	void GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D * FirstPoint, const FVector2D * SecondPoint, TArray<AActor *> * OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed) { NativeCall<void, TSubclassOf<AActor>, const FVector2D *, const FVector2D *, TArray<AActor *> *, bool, bool>(this, "AHUD.GetActorsInSelectionRectangle", ClassFilter, FirstPoint, SecondPoint, OutActors, bIncludeNonCollidingComponents, bActorMustBeFullyEnclosed); }
	FVector2D * GetCoordinateOffset(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "AHUD.GetCoordinateOffset", result); }
	UFont * GetFontFromSizeIndex(int FontSizeIndex) { return NativeCall<UFont *, int>(this, "AHUD.GetFontFromSizeIndex", FontSizeIndex); }
	const FHUDHitBox * GetHitBoxAtCoordinates(FVector2D InHitLocation, bool bIsConsumingInput) { return NativeCall<const FHUDHitBox *, FVector2D, bool>(this, "AHUD.GetHitBoxAtCoordinates", InHitLocation, bIsConsumingInput); }
	void GetTextSize(const FString * Text, float * OutWidth, float * OutHeight, UFont * Font, float Scale) { NativeCall<void, const FString *, float *, float *, UFont *, float>(this, "AHUD.GetTextSize", Text, OutWidth, OutHeight, Font, Scale); }
	bool IsCanvasValid_WarnIfNot() { return NativeCall<bool>(this, "AHUD.IsCanvasValid_WarnIfNot"); }
	void OnLostFocusPause(bool bEnable) { NativeCall<void, bool>(this, "AHUD.OnLostFocusPause", bEnable); }
	void PostInitializeComponents() { NativeCall<void>(this, "AHUD.PostInitializeComponents"); }
	void PostRender() { NativeCall<void>(this, "AHUD.PostRender"); }
	FVector * Project(FVector * result, FVector Location) { return NativeCall<FVector *, FVector *, FVector>(this, "AHUD.Project", result, Location); }
	void RemoveAllDebugStrings_Implementation() { NativeCall<void>(this, "AHUD.RemoveAllDebugStrings_Implementation"); }
	void RemoveDebugText_Implementation(AActor * SrcActor, bool bLeaveDurationText) { NativeCall<void, AActor *, bool>(this, "AHUD.RemoveDebugText_Implementation", SrcActor, bLeaveDurationText); }
	void RemovePostRenderedActor(AActor * A) { NativeCall<void, AActor *>(this, "AHUD.RemovePostRenderedActor", A); }
	void RenderHitBoxes(FCanvas * InCanvas) { NativeCall<void, FCanvas *>(this, "AHUD.RenderHitBoxes", InCanvas); }
	void SetCanvas(UCanvas * InCanvas, UCanvas * InDebugCanvas) { NativeCall<void, UCanvas *, UCanvas *>(this, "AHUD.SetCanvas", InCanvas, InDebugCanvas); }
	bool ShouldDisplayDebug(const FName * DebugType) { return NativeCall<bool, const FName *>(this, "AHUD.ShouldDisplayDebug", DebugType); }
	void ShowDebug(FName DebugType) { NativeCall<void, FName>(this, "AHUD.ShowDebug", DebugType); }
	void ShowDebugInfo(float * YL, float * YPos) { NativeCall<void, float *, float *>(this, "AHUD.ShowDebugInfo", YL, YPos); }
	void ShowDebugToggleSubCategory(FName Category) { NativeCall<void, FName>(this, "AHUD.ShowDebugToggleSubCategory", Category); }
	void ShowHUD() { NativeCall<void>(this, "AHUD.ShowHUD"); }
	bool UpdateAndDispatchHitBoxClickEvents(const FVector2D ClickLocation, const EInputEvent InEventType, const bool bIsTouchEvent) { return NativeCall<bool, const FVector2D, const EInputEvent, const bool>(this, "AHUD.UpdateAndDispatchHitBoxClickEvents", ClickLocation, InEventType, bIsTouchEvent); }
	void AddDebugText(const FString * DebugText, AActor * SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont * InFont, float FontScale) { NativeCall<void, const FString *, AActor *, float, FVector, FVector, FColor, bool, bool, bool, UFont *, float>(this, "AHUD.AddDebugText", DebugText, SrcActor, Duration, Offset, DesiredOffset, TextColor, bSkipOverwriteCheck, bAbsoluteLocation, bKeepAttachedToActor, InFont, FontScale); }
	void ReceiveDrawHUD(int SizeX, int SizeY) { NativeCall<void, int, int>(this, "AHUD.ReceiveDrawHUD", SizeX, SizeY); }
	void ReceiveHitBoxBeginCursorOver(const FName BoxName) { NativeCall<void, const FName>(this, "AHUD.ReceiveHitBoxBeginCursorOver", BoxName); }
	void ReceiveHitBoxClick(const FName BoxName) { NativeCall<void, const FName>(this, "AHUD.ReceiveHitBoxClick", BoxName); }
	void ReceiveHitBoxEndCursorOver(const FName BoxName) { NativeCall<void, const FName>(this, "AHUD.ReceiveHitBoxEndCursorOver", BoxName); }
	void ReceiveHitBoxRelease(const FName BoxName) { NativeCall<void, const FName>(this, "AHUD.ReceiveHitBoxRelease", BoxName); }
	void RemoveAllDebugStrings() { NativeCall<void>(this, "AHUD.RemoveAllDebugStrings"); }
	void RemoveDebugText(AActor * SrcActor, bool bLeaveDurationText) { NativeCall<void, AActor *, bool>(this, "AHUD.RemoveDebugText", SrcActor, bLeaveDurationText); }
};

