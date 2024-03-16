#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CodeLockPanel.BP_CodeLockPanel_C
// (None)

class UClass* UBP_CodeLockPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CodeLockPanel_C");

	return Clss;
}


// BP_CodeLockPanel_C BP_CodeLockPanel.Default__BP_CodeLockPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CodeLockPanel_C* UBP_CodeLockPanel_C::GetDefaultObj()
{
	static class UBP_CodeLockPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CodeLockPanel_C*>(UBP_CodeLockPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.EnterText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_GetText_ReturnValue_3                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_4                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CodeLockPanel_C::EnterText(class FText Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_1, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_3, class FText CallFunc_GetText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Len_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "EnterText");

	Params::UBP_CodeLockPanel_C_EnterText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_3 = CallFunc_GetText_ReturnValue_3;
	Parms.CallFunc_GetText_ReturnValue_4 = CallFunc_GetText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateSetCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetCode                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CodeLockPanel_C::UpdateSetCode(bool SetCode, class AActor* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "UpdateSetCode");

	Params::UBP_CodeLockPanel_C_UpdateSetCode_Params Parms{};

	Parms.SetCode = SetCode;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.UpdateCodeMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_CodeLockPanel_C::UpdateCodeMessage(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "UpdateCodeMessage");

	Params::UBP_CodeLockPanel_C_UpdateCodeMessage_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__Button_81_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__Clear_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__9_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__7_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__6_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CodeLockPanel_C::BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "BndEvt__0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodeLockPanel.BP_CodeLockPanel_C.ExecuteUbergraph_BP_CodeLockPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CodeLockPanel_C::ExecuteUbergraph_BP_CodeLockPanel(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodeLockPanel_C", "ExecuteUbergraph_BP_CodeLockPanel");

	Params::UBP_CodeLockPanel_C_ExecuteUbergraph_BP_CodeLockPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


