#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2C0 - 0x278)
// WidgetBlueprintGeneratedClass W_PlayerInfo.W_PlayerInfo_C
class UW_PlayerInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Mute;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Mute;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerName;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Team;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VOIPAnim_C*                         W_VOIPAnim;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PlayerList_C*                       MainRef;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_40AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CharacterRef;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlayerInfo_C* GetDefaultObj();

	void GetUsername(class FText* UserName, bool Temp_bool_Variable, TScriptInterface<class IBP_VOIPInterface_C> K2Node_DynamicCast_AsBP_VOIPInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MSG_AVP_GetPlayerUsername_Success_, class FText CallFunc_MSG_AVP_GetPlayerUsername_Username, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void Construct();
	void RefreshInfos();
	void BndEvt__Button_Mute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_PlayerInfo(int32 EntryPoint, int32 CallFunc_GetTeamID_ByActorRef_TeamID, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, double K2Node_Select_Default, class FText Temp_text_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsMuted_ByActorRef_IsMuted_, class FText CallFunc_GetUsername_Username, bool CallFunc_GetIsVOIPActivated_ByActorRef_IsVOIPActivated_, class FText Temp_text_Variable_1, class FText K2Node_Select_Default_1, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
};

}


