#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenu.MainMenu_C
// (None)

class UClass* UMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_C");

	return Clss;
}


// MainMenu_C MainMenu.Default__MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenu_C* UMainMenu_C::GetDefaultObj()
{
	static class UMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenu_C*>(UMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenu.MainMenu_C.SetBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::SetBackgroundImage(class UTexture2D* Image, bool CallFunc_MakeLiteralBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "SetBackgroundImage");

	Params::UMainMenu_C_SetBackgroundImage_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OpenStartScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::OpenStartScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OpenStartScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UMainMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnKeyDown");

	Params::UMainMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenu.MainMenu_C.AcceptedTerms
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AcceptedTerms                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformUserName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTermsAndConditions_C*       K2Node_DynamicCast_AsTerms_and_Conditions                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::AcceptedTerms(bool* AcceptedTerms, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UTermsAndConditions_C* K2Node_DynamicCast_AsTerms_and_Conditions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "AcceptedTerms");

	Params::UMainMenu_C_AcceptedTerms_Params Parms{};

	Parms.CallFunc_GetPlatformUserName_ReturnValue = CallFunc_GetPlatformUserName_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsTerms_and_Conditions = K2Node_DynamicCast_AsTerms_and_Conditions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AcceptedTerms != nullptr)
		*AcceptedTerms = Parms.AcceptedTerms;

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonResume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonResume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonResume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonOptions_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.HandleBackRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleBackRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "HandleBackRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonSetScenario_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonSetScenario_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonSetScenario_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonControls_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonControls_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonControls_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonCredits_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonCredits_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonCredits_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenMarketplace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenMarketplace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenMarketplace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenSupport_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenSupport_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenSupport_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenWebPage_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenWebPage_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenWebPage_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenFacebookPage_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenFacebookPage_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenFacebookPage_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenInstagramPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenInstagramPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenInstagramPage_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenYoutubePage_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenYoutubePage_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenYoutubePage_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_OpenArtstationPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_OpenArtstationPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_OpenArtstationPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.HandleScenarioDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleScenarioDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "HandleScenarioDay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.HandleScenarioNight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleScenarioNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "HandleScenarioNight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ClickedDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::ClickedDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ClickedDay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ClickedNight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::ClickedNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ClickedNight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__MainMenu_ButtonQuit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenu_C::BndEvt__MainMenu_ButtonQuit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__MainMenu_ButtonQuit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "PreConstruct");

	Params::UMainMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_IngameMenu_C*           K2Node_DynamicCast_AsHUD_Ingame_Menu                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_IngameMenu_C* K2Node_DynamicCast_AsHUD_Ingame_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::UMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_Ingame_Menu = K2Node_DynamicCast_AsHUD_Ingame_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


