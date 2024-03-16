#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ChatWindow.W_ChatWindow_C
// (None)

class UClass* UW_ChatWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ChatWindow_C");

	return Clss;
}


// W_ChatWindow_C W_ChatWindow.Default__W_ChatWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ChatWindow_C* UW_ChatWindow_C::GetDefaultObj()
{
	static class UW_ChatWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ChatWindow_C*>(UW_ChatWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ChatWindow.W_ChatWindow_C.OnRep_bVisibleChat?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ChatWindow_C::OnRep_bVisibleChat_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "OnRep_bVisibleChat?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatWindow.W_ChatWindow_C.Fade Chat Window
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::Fade_Chat_Window(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Fade Chat Window");

	Params::UW_ChatWindow_C_Fade_Chat_Window_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.Should Play Message
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              IndexToTest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPKChatMessage>      TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPKChatMessage              Output                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    K2Node_DynamicCast_AsBP_Equipment_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPKChatMessage              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ChatWindow_C::Should_Play_Message(int32 IndexToTest, TArray<struct FPKChatMessage>& TargetArray, struct FPKChatMessage* Output, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess, const struct FPKChatMessage& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Should Play Message");

	Params::UW_ChatWindow_C_Should_Play_Message_Params Parms{};

	Parms.IndexToTest = IndexToTest;
	Parms.TargetArray = TargetArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Character = K2Node_DynamicCast_AsBP_Equipment_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	return Parms.ReturnValue;

}


// Function W_ChatWindow.W_ChatWindow_C.Get Is Team 1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsSeal                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    K2Node_DynamicCast_AsBP_Equipment_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::Get_Is_Team_1(bool* bIsSeal, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Get Is Team 1");

	Params::UW_ChatWindow_C_Get_Is_Team_1_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Character = K2Node_DynamicCast_AsBP_Equipment_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSeal != nullptr)
		*bIsSeal = Parms.bIsSeal;

}


// Function W_ChatWindow.W_ChatWindow_C.Update Chat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPKChatMessage>      Messages                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPKChatMessage>      NewLocalVar                                                      (Edit, BlueprintVisible)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Index_Variable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Step_Size_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Break_Variable                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Play_Message_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPKChatMessage              CallFunc_Should_Play_Message_Output                              (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::Update_Chat(TArray<struct FPKChatMessage>& Messages, int32 NewLocalVar_0, const TArray<struct FPKChatMessage>& NewLocalVar, int32 CallFunc_Abs_Int_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Index_Variable, int32 Temp_int_Step_Size_Variable, bool Temp_bool_Break_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Should_Play_Message_ReturnValue, const struct FPKChatMessage& CallFunc_Should_Play_Message_Output, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Update Chat");

	Params::UW_ChatWindow_C_Update_Chat_Params Parms{};

	Parms.Messages = Messages;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Index_Variable = Temp_int_Index_Variable;
	Parms.Temp_int_Step_Size_Variable = Temp_int_Step_Size_Variable;
	Parms.Temp_bool_Break_Variable = Temp_bool_Break_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Should_Play_Message_ReturnValue = CallFunc_Should_Play_Message_ReturnValue;
	Parms.CallFunc_Should_Play_Message_Output = CallFunc_Should_Play_Message_Output;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.Send Chat Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message_Message                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Is_Team_1_bIsSeal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersonaName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FPKChatMessage              K2Node_MakeStruct_PKChatMessage                                  (None)

void UW_ChatWindow_C::Send_Chat_Message(class FText Message_Message, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Len_ReturnValue, bool CallFunc_Get_Is_Team_1_bIsSeal, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersonaName_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FPKChatMessage& K2Node_MakeStruct_PKChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Send Chat Message");

	Params::UW_ChatWindow_C_Send_Chat_Message_Params Parms{};

	Parms.Message_Message = Message_Message;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Get_Is_Team_1_bIsSeal = CallFunc_Get_Is_Team_1_bIsSeal;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersonaName_ReturnValue = CallFunc_GetPersonaName_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_PKChatMessage = K2Node_MakeStruct_PKChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.Show Chat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_ChatWindow_C::Show_Chat(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Show Chat");

	Params::UW_ChatWindow_C_Show_Chat_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.SetTextToSend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTeamChat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Msg                                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        TexToSend                                                        (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)

void UW_ChatWindow_C::SetTextToSend(bool bTeamChat, class FText Sender, class FText Msg, class FText* TexToSend, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "SetTextToSend");

	Params::UW_ChatWindow_C_SetTextToSend_Params Parms{};

	Parms.bTeamChat = bTeamChat;
	Parms.Sender = Sender;
	Parms.Msg = Msg;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (TexToSend != nullptr)
		*TexToSend = Parms.TexToSend;

}


// Function W_ChatWindow.W_ChatWindow_C.UpdateChatWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPKChatMessage              Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ChatWindow_C::UpdateChatWindow(const struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "UpdateChatWindow");

	Params::UW_ChatWindow_C_UpdateChatWindow_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_ChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.InitChatEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTeamChat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::InitChatEntry(bool bTeamChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "InitChatEntry");

	Params::UW_ChatWindow_C_InitChatEntry_Params Parms{};

	Parms.bTeamChat = bTeamChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.ServerMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sender                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Msg                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bTeamChat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ChatWindow_C::ServerMessage(class FText Sender, class FText Msg, bool bTeamChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "ServerMessage");

	Params::UW_ChatWindow_C_ServerMessage_Params Parms{};

	Parms.Sender = Sender;
	Parms.Msg = Msg;
	Parms.bTeamChat = bTeamChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ChatWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ChatWindow.W_ChatWindow_C.PrintMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPKChatMessage              Message                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ChatWindow_C::PrintMessage(struct FPKChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "PrintMessage");

	Params::UW_ChatWindow_C_PrintMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ChatWindow.W_ChatWindow_C.ExecuteUbergraph_W_ChatWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    K2Node_DynamicCast_AsBP_Equipment_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APKPlayerController*         K2Node_DynamicCast_AsPKPlayer_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APKGameState*                K2Node_DynamicCast_AsPeakGameStateBase                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPKChatMessage              K2Node_CustomEvent_Message                                       (None)
// class FText                        CallFunc_SetTextToSend_TexToSend                                 (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ChatText_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bTeamChat_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_CustomEvent_Sender                                        (ConstParm)
// class FText                        K2Node_CustomEvent_Msg                                           (ConstParm)
// bool                               K2Node_CustomEvent_bTeamChat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ChatText_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPKChatMessage              K2Node_Event_Message                                             (ConstParm)

void UW_ChatWindow_C::ExecuteUbergraph_W_ChatWindow(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ABP_EquipmentCharacter_C* K2Node_DynamicCast_AsBP_Equipment_Character, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APKPlayerController* K2Node_DynamicCast_AsPKPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APKGameState* K2Node_DynamicCast_AsPeakGameStateBase, bool K2Node_DynamicCast_bSuccess_3, const struct FPKChatMessage& K2Node_CustomEvent_Message, class FText CallFunc_SetTextToSend_TexToSend, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText Temp_text_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool Temp_bool_Variable, class UW_ChatText_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_bTeamChat_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Msg, bool K2Node_CustomEvent_bTeamChat, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UW_ChatText_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, const struct FPKChatMessage& K2Node_Event_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ChatWindow_C", "ExecuteUbergraph_W_ChatWindow");

	Params::UW_ChatWindow_C_ExecuteUbergraph_W_ChatWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Character = K2Node_DynamicCast_AsBP_Equipment_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsPKPlayer_Controller = K2Node_DynamicCast_AsPKPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeakGameStateBase = K2Node_DynamicCast_AsPeakGameStateBase;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_SetTextToSend_TexToSend = CallFunc_SetTextToSend_TexToSend;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_bTeamChat_1 = K2Node_CustomEvent_bTeamChat_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_Msg = K2Node_CustomEvent_Msg;
	Parms.K2Node_CustomEvent_bTeamChat = K2Node_CustomEvent_bTeamChat;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_5 = CallFunc_GetOwningPlayer_ReturnValue_5;
	Parms.K2Node_Event_Message = K2Node_Event_Message;

	UObject::ProcessEvent(Func, &Parms);

}

}


