#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D0 - 0x278)
// WidgetBlueprintGeneratedClass MinimapInternal_Background.MinimapInternal_Background_C
class UMinimapInternal_Background_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Background;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Overlay;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapViewComponent*                     MapViewComp;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AMapBackground*                        MapBackground;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture*                              CurrentTexture;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CurrentOverlay;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BackgroundMatInst;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StartTime;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              OverlayMatInst;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AlwaysTickHandle;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimapInternal_Background_C* GetDefaultObj();

	void InitOverlay(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UpdateOverLay(class USceneComponent* HeightComponent, class UTextureRenderTarget2D* NewOverlay, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetActiveBackgroundLevel_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetBackgroundOverlay_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetBackgroundZOrder_ReturnValue, bool CallFunc_IsBackgroundVisible_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateTexture(class USceneComponent* HeightComponent, class UTexture* NewTexture, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_GetActiveBackgroundLevel_ReturnValue, class UTexture* CallFunc_GetBackgroundTexture_ReturnValue);
	void TickBackground(const struct FVector2D& V1, const struct FVector2D& V2, const TArray<struct FVector2D>& ViewCornersUV, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetBackgroundPriority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMultiLevel_ReturnValue, bool CallFunc_GetActiveBackgroundPriority_IsInsideAnyBackground, int32 CallFunc_GetActiveBackgroundPriority_ReturnValue, TArray<struct FVector2D>& CallFunc_GetMapViewCornerUVs_CornerUVs, bool CallFunc_GetMapViewCornerUVs_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Array_Get_Item, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Array_Get_Item_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Array_Get_Item_3, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1);
	void UpdateMaterial(bool bShouldRecreate, class UMaterialInterface* NewMaterial, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetBackgroundMaterialForUMG_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue);
	void Construct();
	void OnTextureMatChanged(class AMapBackground* MapBackground);
	void Destruct();
	void OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void On_Appearance_Changed(class AMapBackground* MapBackground);
	void On_Overlay_Changed(class AMapBackground* MapBackground, int32 Level, class UTextureRenderTarget2D* RenderTarget);
	void Always_Tick();
	void ExecuteUbergraph_MinimapInternal_Background(int32 EntryPoint, class AMapBackground* K2Node_CustomEvent_MapBackground_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AMapBackground* K2Node_CustomEvent_MapBackground_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AMapBackground* K2Node_CustomEvent_MapBackground, int32 K2Node_CustomEvent_Level, class UTextureRenderTarget2D* K2Node_CustomEvent_RenderTarget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


