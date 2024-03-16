#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass w_ingame_loadout_screen.w_ingame_loadout_screen_C
class UW_ingame_loadout_screen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CurrentTeam;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          Loadouts;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_loadout_slot_C*                     W_loadout_slot;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPeak53Teams                      PeakTeam;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_51C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LoadoutChoosen;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ingame_loadout_screen_C* GetDefaultObj();

	class FText Get_CurrentTeam_Text(bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateUi();
	void CustomEvent(const class FString& CurrentEquipment);
	void ExecuteUbergraph_w_ingame_loadout_screen(int32 EntryPoint, class UW_loadout_slot_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class FString>& CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& K2Node_CustomEvent_CurrentEquipment);
	void LoadoutChoosen__DelegateSignature(const class FString& Equipment);
};

}


