#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x171 (0x471 - 0x300)
// WidgetBlueprintGeneratedClass BP_SaveGameMenu.BP_SaveGameMenu_C
class UBP_SaveGameMenu_C : public UBP_MasterMenuPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LoadGameMenuPanel_C*               BP_SaveGamePanel;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            InputsBox;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuButton_C*                      NewSaveButton;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SaveVerticalBox;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Subtitle;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SGKSaveGameMetaData_C*             SaveGameMetaData;                                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           HostSaveGameServer;                                // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AreYouSureMenu_C*                  AreYouSureMenu;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SaveComplete_C*                    SaveCompleteMenu;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SaveNameMenu_C*                    SaveNameMenu;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           HostNewGameServer;                                 // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x380(0x18)(Edit, BlueprintVisible)
	class FText                                  SubtitleText;                                      // 0x398(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        TitleFont;                                         // 0x3B0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        SubtitleFont;                                      // 0x408(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FMargin                               NoSavesPadding;                                    // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SinglePlayer;                                      // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SaveGameMenu_C* GetDefaultObj();

	void PopulateSaveGameList(const struct FS_SaveMetaData& SaveMetaDataL, class UBP_SaveGameMenuPanel_C* NewSaveGamePanelL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UBP_NoSaves_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_SaveGameMenuPanel_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CancelSelected();
	void SaveSelected();
	void BndEvt__BP_MenuButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType);
	void ExecuteUbergraph_BP_SaveGameMenu(int32 EntryPoint, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


