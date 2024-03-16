#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x3B0 - 0x278)
// WidgetBlueprintGeneratedClass BP_CookingSlot.BP_CookingSlot_C
class UBP_CookingSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AmountText;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemBackround;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemNameText;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProgressText;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SlotIconBorder;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SlotIconSizeBox;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Tint;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            SlotImage;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       SlotImageOpacity;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SlotName;                                          // 0x2D0(0x18)(Edit, BlueprintVisible)
	enum class E_EquipmentType                   EquipmentSlotType;                                 // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SlotOccupiedImage;                                 // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UseItemBackroundColor;                             // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShortNameCutOff;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SlotIconSize;                                      // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemTooltip_C*                     Tooltip;                                           // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentTime;                                       // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseOver;                                         // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Handle;                                      // 0x328(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ResumeTimerLength;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSettingsSaveData_C*             OptionsSave;                                       // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TimerLength;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CookingSlotIndex;                                  // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CookingSlot;                                       // 0x350(0x4D)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_44AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CookingComponent_C*                CookingInventory;                                  // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CookingSlot_C* GetDefaultObj();

	void LoadGameSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings);
	void SetProgressPercent(double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	class FText GetProgressPercentText(int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_ProgressText_Text_0(int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	void IsItemValid(bool* ItemValid, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateItemCount(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_TotalAmmo_ReturnValue, int32 CallFunc_TotalMaxAmmo_MaxAmmo, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound_1, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound_2, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_2, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsItemValid_ItemValid);
	void UpdateCookingItem(const struct FS_InvSlot& CookingSlot, class FText CallFunc_GetItemName_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1);
	class FText GetItemName(class FText ShortNameL, class FText NameL, bool Temp_bool_Variable, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UBP_MoveIcon_C* MoveIconL, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_MoveIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_IsItemValid_ItemValid);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UBP_MoveIcon_C* MoveIconL, const struct FS_InvSlotID& MoveSlotL, bool Temp_bool_Variable, enum class E_SpecialSlotType Temp_byte_Variable, enum class E_SpecialSlotType Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class E_SpecialSlotType K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess);
	void ShowRedOverlay();
	void HideOverlay();
	void ShowGreenOverlay();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ResumeTimer();
	void PauseTimer();
	void ResumeFrom(double CurrentTime, double TimerLength, bool Paused);
	void RestartTimer();
	void StartTimer(double Time);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_BP_CookingSlot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ItemTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_SGK_ItemCookingRecipe_ReturnValue, const struct FS_CookingRecipe& CallFunc_SGK_ItemCookingRecipe_CookingRecipe, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UBP_ItemTooltip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, double K2Node_CustomEvent_CurrentTime, double K2Node_CustomEvent_TimerLength, bool K2Node_CustomEvent_Paused, double K2Node_CustomEvent_Time, bool CallFunc_IsValid_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsItemValid_ItemValid, bool CallFunc_IsValid_ReturnValue_6, const struct FPointerEvent& K2Node_Event_MouseEvent_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, double CallFunc_StartTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
};

}


