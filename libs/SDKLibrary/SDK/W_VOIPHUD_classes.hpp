#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A0 - 0x278)
// WidgetBlueprintGeneratedClass W_VOIPHUD.W_VOIPHUD_C
class UW_VOIPHUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_VoipIndicator;                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VOIPAnim_C*                         W_VOIPStatus;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class AActor*>                        ActualActorsIndicator;                             // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_VOIPHUD_C* GetDefaultObj();

	void RefreshVOIPList(bool Add_, class AActor* ActorRef, int32 Local_Index, bool Local_Found_, class AActor* Local_ActorRef, bool Local_Add_, class UW_VOIPIndicator_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_VOIPIndicator_C* K2Node_DynamicCast_AsW_VOIPIndicator, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_Select_Default, class UWidget* CallFunc_GetChildAt_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UW_VOIPIndicator_C* K2Node_DynamicCast_AsW_VOIPIndicator_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void SetVOIPIconVisibility(bool Activated_);
	void CheckVerticalBox();
	void ExecuteUbergraph_W_VOIPHUD(int32 EntryPoint, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Activated_, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UW_VOIPIndicator_C* K2Node_DynamicCast_AsW_VOIPIndicator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


