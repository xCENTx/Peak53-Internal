#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass BP_MasterRadialMenu.BP_MasterRadialMenu_C
class UBP_MasterRadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MasterSegment_C*                   Mouse_Over_Segment;                                // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Rotation;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerBuildingComponent_C*         PlayerBuildingComponent;                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PreviousPageWidget;                                // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NextPageWidget;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MasterRadialMenu_C* GetDefaultObj();

	void SetSegmentOver(class UBP_MasterSegment_C* Segment, double Rotation_, double _Rotation_, bool ExtraChecks, double ExtraRotation_, double _ExtraRotation_, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default);
	void SelectSegment(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetMouseOver(bool CallFunc_IsVisible_ReturnValue);
	void GetMouseRotation(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_BP_MasterRadialMenu(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


