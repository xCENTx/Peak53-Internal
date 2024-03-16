#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_IngameMenu.HUD_IngameMenu_C
// (Actor)

class UClass* AHUD_IngameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_IngameMenu_C");

	return Clss;
}


// HUD_IngameMenu_C HUD_IngameMenu.Default__HUD_IngameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_IngameMenu_C* AHUD_IngameMenu_C::GetDefaultObj()
{
	static class AHUD_IngameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_IngameMenu_C*>(AHUD_IngameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_IngameMenu.HUD_IngameMenu_C.ShowFPSDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCustomUserSettings_C*       K2Node_DynamicCast_AsCustom_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_IngameMenu_C::ShowFPSDisplay(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UCustomUserSettings_C* K2Node_DynamicCast_AsCustom_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "ShowFPSDisplay");

	Params::AHUD_IngameMenu_C_ShowFPSDisplay_Params Parms{};

	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_User_Settings = K2Node_DynamicCast_AsCustom_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.AcceptedTerms
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AcceptedTerms                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformUserName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTermsAndConditions_C*       K2Node_DynamicCast_AsTerms_and_Conditions                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_IngameMenu_C::AcceptedTerms(bool* AcceptedTerms, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UTermsAndConditions_C* K2Node_DynamicCast_AsTerms_and_Conditions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "AcceptedTerms");

	Params::AHUD_IngameMenu_C_AcceptedTerms_Params Parms{};

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


// Function HUD_IngameMenu.HUD_IngameMenu_C.IsVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUD_IngameMenu_C::IsVisible(bool* IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "IsVisible");

	Params::AHUD_IngameMenu_C_IsVisible_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.CheckTermsAnConditions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::CheckTermsAnConditions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "CheckTermsAnConditions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.UserHasAcceptedTermsAndConditions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::UserHasAcceptedTermsAndConditions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "UserHasAcceptedTermsAndConditions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.ShowMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::ShowMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "ShowMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.HideMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::HideMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "HideMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AHUD_IngameMenu_C::CustomEvent(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "CustomEvent");

	Params::AHUD_IngameMenu_C_CustomEvent_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.ToggleMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUD_IngameMenu_C::ToggleMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "ToggleMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_IngameMenu.HUD_IngameMenu_C.ExecuteUbergraph_HUD_IngameMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_IsVisible                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AcceptedTerms_AcceptedTerms                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTernsAndConditions_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMainMenu_C*                 CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AHUD_IngameMenu_C::ExecuteUbergraph_HUD_IngameMenu(int32 EntryPoint, bool CallFunc_IsVisible_IsVisible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_AcceptedTerms_AcceptedTerms, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UTernsAndConditions_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UMainMenu_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_IngameMenu_C", "ExecuteUbergraph_HUD_IngameMenu");

	Params::AHUD_IngameMenu_C_ExecuteUbergraph_HUD_IngameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_IsVisible = CallFunc_IsVisible_IsVisible;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_AcceptedTerms_AcceptedTerms = CallFunc_AcceptedTerms_AcceptedTerms;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


