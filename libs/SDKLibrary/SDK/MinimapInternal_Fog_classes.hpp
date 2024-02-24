#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass MinimapInternal_Fog.MinimapInternal_Fog_C
class UMinimapInternal_Fog_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Fog;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapViewComponent*                     MapViewComp;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AMapFog*                               MapFog;                                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FogMatInst;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StartTime;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimapInternal_Fog_C* GetDefaultObj();

	void TickFog(const struct FVector2D& V1, const struct FVector2D& V2, const TArray<struct FVector2D>& ViewCornersUV, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_GetDestinationFogRenderTarget_ReturnValue, TArray<struct FVector2D>& CallFunc_GetMapViewCornerUVs_CornerUVs, bool CallFunc_GetMapViewCornerUVs_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Array_Get_Item, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Array_Get_Item_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Array_Get_Item_3, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1);
	void UpdateMaterial(class UTexture2D* ObscuredTexture, class UTexture* BackgroundTexture, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetFogMaterialForUMG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Destruct();
	void OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void OnMapFogMaterialChanged_Event_0(class AMapFog* MapFog);
	void ExecuteUbergraph_MinimapInternal_Fog(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AMapFog* K2Node_CustomEvent_MapFog);
};

}


