#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass MinimapInternal_Camera.MinimapInternal_Camera_C
class UMinimapInternal_Camera_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMapViewComponent*                     MapViewComp;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsCircular;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FloorDistance;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             PanelSize;                                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimapInternal_Camera_C* GetDefaultObj();

	void OnPaint(struct FPaintContext& Context, const struct FPaintContext& InContext, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FVector2D>& CallFunc_ComputeViewFrustum_CornerUVs, bool CallFunc_ComputeViewFrustum_ReturnValue, const struct FVector2D& CallFunc_Array_Get_Item, const struct FVector2D& CallFunc_Array_Get_Item_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_ComputeViewFrustum_FloorDistance_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MinimapInternal_Camera(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue);
};

}


