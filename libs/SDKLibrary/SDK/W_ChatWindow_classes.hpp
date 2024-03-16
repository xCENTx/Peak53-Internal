#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x2F9 - 0x280)
// WidgetBlueprintGeneratedClass W_ChatWindow.W_ChatWindow_C
class UW_ChatWindow_C : public UPKChatWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeChat;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BackGroundBorder;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      ChatEntry;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ChatLog;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ChatType;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ChatType_1;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxChat;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ChatIsOpen;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FadeTimerHandle;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   PC;                                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bTeamChat;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextMessageIndex;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APKPlayerController*                   PKPlayerController;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_EquipmentCharacter_C*              BP_Equipment_Character;                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bVisibleChat_;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ChatWindow_C* GetDefaultObj();

	void OnRep_bVisibleChat_();
	void Fade_Chat_Window(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool Should_Play_Message(int32 IndexToTest, TArray<struct FPKChatMessage>& TargetArray, struct FPKChatMessage* Output, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess, const struct FPKChatMessage& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Is_Team_1(bool* bIsSeal, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess);
	void Update_Chat(TArray<struct FPKChatMessage>& Messages, int32 NewLocalVar_0, const TArray<struct FPKChatMessage>& NewLocalVar, int32 CallFunc_Abs_Int_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Index_Variable, int32 Temp_int_Step_Size_Variable, bool Temp_bool_Break_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Should_Play_Message_ReturnValue, const struct FPKChatMessage& CallFunc_Should_Play_Message_Output, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Send_Chat_Message(class FText Message_Message, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Len_ReturnValue, bool CallFunc_Get_Is_Team_1_bIsSeal, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersonaName_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FPKChatMessage& K2Node_MakeStruct_PKChatMessage);
	void Show_Chat(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void SetTextToSend(bool bTeamChat, class FText Sender, class FText Msg, class FText* TexToSend, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default);
	void UpdateChatWindow(const struct FPKChatMessage& Message);
	void BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void InitChatEntry(bool bTeamChat);
	void ServerMessage(class FText Sender, class FText Msg, bool bTeamChat);
	void Construct();
	void PrintMessage(struct FPKChatMessage& Message);
	void ExecuteUbergraph_W_ChatWindow(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APKPlayerController* K2Node_DynamicCast_AsPKPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APKGameState* K2Node_DynamicCast_AsPeakGameStateBase, bool K2Node_DynamicCast_bSuccess_3, const struct FPKChatMessage& K2Node_CustomEvent_Message, class FText CallFunc_SetTextToSend_TexToSend, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText Temp_text_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool Temp_bool_Variable, class UW_ChatText_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_bTeamChat_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Msg, bool K2Node_CustomEvent_bTeamChat, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UW_ChatText_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, const struct FPKChatMessage& K2Node_Event_Message);
};

}


