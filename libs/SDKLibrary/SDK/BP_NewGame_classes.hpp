#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x3A8 - 0x278)
// WidgetBlueprintGeneratedClass BP_NewGame.BP_NewGame_C
class UBP_NewGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       ComboBoxString_171;                                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_275;                               // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               StartGameButton;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Subtitle;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_AreYouSureMenu_C*                  AreYouSureMenu;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x2C8(0x18)(Edit, BlueprintVisible)
	class FText                                  SubtitleText;                                      // 0x2E0(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        TitleFont;                                         // 0x2F8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        SubtitleFont;                                      // 0x350(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_NewGame_C* GetDefaultObj();

	void FindExistingSave(const class FString& SlotName, bool* SaveFound, class UBP_SGKSaveGameMetaData_C* SaveMetaDataL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void DeleteExistingSave(const class FString& SlotName, bool SaveFoundL, int32 MetaDataIndexL, class UBP_SGKSaveGameMetaData_C* SaveMetaDataL, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_SaveGameToSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void YesSelected();
	void NoSelected();
	void BndEvt__CreateServerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_NewGame(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_FindExistingSave_SaveFound, const class FString& CallFunc_GetSelectedOption_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}


