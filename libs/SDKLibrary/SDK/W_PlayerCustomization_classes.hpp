#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x4A8 - 0x3D8)
// WidgetBlueprintGeneratedClass W_PlayerCustomization.W_PlayerCustomization_C
class UW_PlayerCustomization_C : public UW_WindowBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCW_MenuButton_C*                      BtnAccept;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      BtnCancel;                                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      BtnNewLodout;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentTeam;                                       // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_LodoutName;                           // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      Elite;                                             // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_49;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_98;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      Insergents;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LoadoutNameArea;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          Loadouts;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      Return;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_73;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      W_LoadoutSlot;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      W_LoadoutSlot_1;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      W_LoadoutSlot_2;                                   // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      W_LoadoutSlot_3;                                   // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_C*                      W_LoadoutSlot_4;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                      WeaponBench;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SelectedTeam;                                      // 0x480(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CurrentLoadoutSlotId;                              // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlayerCustomization_C* GetDefaultObj();

	bool Get_Elite_bIsEnabled(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	bool Get_Insergents_bIsEnabled(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	class FText Get_CurrentTeam_Text();
	void BndEvt__W_MenuList_Lobby_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature();
	void BndEvt__W_MenuList_LoadOut_K2Node_ComponentBoundEvent_9_ButtonPressed__DelegateSignature();
	void BndEvt__W_PlayerCustomization_Elite_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
	void BndEvt__W_PlayerCustomization_Insergents_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
	void Construct();
	void PressedButtonElite();
	void BndEvt__W_PlayerCustomization_BtnNewLodout_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
	void BndEvt__W_PlayerCustomization_BtnCancel_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
	void BndEvt__W_PlayerCustomization_BtnAccept_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
	void PressedButtonInsergents();
	void OpenEquipmentMenu();
	void Refresh();
	void ExecuteUbergraph_W_PlayerCustomization(int32 EntryPoint, class UW_loadout_slot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_loadout_slot_C* CallFunc_Create_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn_4, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_5, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_6, TArray<class FString>& CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get, TArray<class FString>& CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get_1, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue_1, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess_7, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, class UWidget* CallFunc_Array_Get_Item_3, class UW_loadout_slot_C* K2Node_DynamicCast_AsW_Loadout_Slot, bool K2Node_DynamicCast_bSuccess_10, class UW_loadout_slot_C* K2Node_DynamicCast_AsW_Loadout_Slot_1, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_12, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


