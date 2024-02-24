#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x309 - 0x278)
// WidgetBlueprintGeneratedClass CW_TextButton.CW_TextButton_C
class UCW_TextButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_21;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_73;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ButtonHovered;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ButtonPressed;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Buttonunhovered;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               IconImage;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_ToolTipType                     Tool_Tip_Type;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_44E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rateing;                                           // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_EquipmentRarity                 Rarity_Index;                                      // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_44E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  In_Text;                                           // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         EnableToolTips;                                    // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCW_TextButton_C* GetDefaultObj();

	class UWidget* GetToolTipWidget(class UW_ToolTip_C* CallFunc_Create_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast);
	class FText GetText();
	void BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CW_TextButton(int32 EntryPoint, const struct FS_UIButtonStyles& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_Event_IsDesignTime);
	void Buttonunhovered__DelegateSignature();
	void ButtonPressed__DelegateSignature();
	void ButtonHovered__DelegateSignature();
};

}


