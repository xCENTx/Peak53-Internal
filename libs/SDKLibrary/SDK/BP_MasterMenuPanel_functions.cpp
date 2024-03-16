#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MasterMenuPanel.BP_MasterMenuPanel_C
// (None)

class UClass* UBP_MasterMenuPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterMenuPanel_C");

	return Clss;
}


// BP_MasterMenuPanel_C BP_MasterMenuPanel.Default__BP_MasterMenuPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasterMenuPanel_C* UBP_MasterMenuPanel_C::GetDefaultObj()
{
	static class UBP_MasterMenuPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasterMenuPanel_C*>(UBP_MasterMenuPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK ConnectingScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ServerConnecting_C*      ServerConnecting                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "SGK ConnectingScreen");

	Params::UBP_MasterMenuPanel_C_SGK_ConnectingScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerConnecting != nullptr)
		*ServerConnecting = Parms.ServerConnecting;

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SGK MenuReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MasterMenuPanel_C::SGK_MenuReference(class UWidget* Menu, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "SGK MenuReference");

	Params::UBP_MasterMenuPanel_C_SGK_MenuReference_Params Parms{};

	Parms.Menu = Menu;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               HideSelf                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HideSecondary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::OpenWidget(class UUserWidget* Widget, bool HideSelf, bool HideSecondary, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "OpenWidget");

	Params::UBP_MasterMenuPanel_C_OpenWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.HideSelf = HideSelf;
	Parms.HideSecondary = HideSecondary;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.SelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadGameMenu_C*          K2Node_DynamicCast_AsBP_Load_Game_Menu                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SaveGameMenu_C*          K2Node_DynamicCast_AsBP_Save_Game_Menu                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadGameMenu_C*          K2Node_DynamicCast_AsBP_Load_Game_Menu_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_10            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_11            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_12            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ServerBrowser_C*         K2Node_DynamicCast_AsBP_Server_Browser                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::SelectWidget(enum class E_WidgetToggleType WidgetToggle, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UBP_LoadGameMenu_C* K2Node_DynamicCast_AsBP_Load_Game_Menu, bool K2Node_DynamicCast_bSuccess_4, class UBP_SaveGameMenu_C* K2Node_DynamicCast_AsBP_Save_Game_Menu, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_LoadGameMenu_C* K2Node_DynamicCast_AsBP_Load_Game_Menu_1, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8, bool K2Node_DynamicCast_bSuccess_13, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_11, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9, bool K2Node_DynamicCast_bSuccess_14, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_10, bool K2Node_DynamicCast_bSuccess_15, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_12, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_13, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_11, bool K2Node_DynamicCast_bSuccess_16, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_12, bool K2Node_DynamicCast_bSuccess_17, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_ServerBrowser_C* K2Node_DynamicCast_AsBP_Server_Browser, bool K2Node_DynamicCast_bSuccess_18, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "SelectWidget");

	Params::UBP_MasterMenuPanel_C_SelectWidget_Params Parms{};

	Parms.WidgetToggle = WidgetToggle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Load_Game_Menu = K2Node_DynamicCast_AsBP_Load_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Save_Game_Menu = K2Node_DynamicCast_AsBP_Save_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Load_Game_Menu_1 = K2Node_DynamicCast_AsBP_Load_Game_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_9 = CallFunc_GetGameInstance_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetGameInstance_ReturnValue_10 = CallFunc_GetGameInstance_ReturnValue_10;
	Parms.CallFunc_GetGameInstance_ReturnValue_11 = CallFunc_GetGameInstance_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_10 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_10;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetGameInstance_ReturnValue_12 = CallFunc_GetGameInstance_ReturnValue_12;
	Parms.CallFunc_GetGameInstance_ReturnValue_13 = CallFunc_GetGameInstance_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_11 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_11;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_12 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_12;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Server_Browser = K2Node_DynamicCast_AsBP_Server_Browser;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnFailure_8BE72C1C48A45480AD48308DE9AB0B52
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterMenuPanel_C::OnFailure_8BE72C1C48A45480AD48308DE9AB0B52()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "OnFailure_8BE72C1C48A45480AD48308DE9AB0B52");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterMenuPanel_C::OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MasterMenuPanel_C::Destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "Destroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterMenuPanel.BP_MasterMenuPanel_C.ExecuteUbergraph_BP_MasterMenuPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterMenuPanel_C::ExecuteUbergraph_BP_MasterMenuPanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterMenuPanel_C", "ExecuteUbergraph_BP_MasterMenuPanel");

	Params::UBP_MasterMenuPanel_C_ExecuteUbergraph_BP_MasterMenuPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


