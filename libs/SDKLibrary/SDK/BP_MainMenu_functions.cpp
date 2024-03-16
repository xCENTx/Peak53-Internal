#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C
// (None)

class UClass* UBP_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_C");

	return Clss;
}


// BP_MainMenu_C BP_MainMenu.Default__BP_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MainMenu_C* UBP_MainMenu_C::GetDefaultObj()
{
	static class UBP_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MainMenu_C*>(UBP_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainMenu.BP_MainMenu_C.SGK MenuReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_MainMenu_C::SGK_MenuReference(class UWidget* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SGK MenuReference");

	Params::UBP_MainMenu_C_SGK_MenuReference_Params Parms{};

	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MainMenu.BP_MainMenu_C.SGK ConnectingScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ServerConnecting_C*      ServerConnecting                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MainMenu_C::SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SGK ConnectingScreen");

	Params::UBP_MainMenu_C_SGK_ConnectingScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerConnecting != nullptr)
		*ServerConnecting = Parms.ServerConnecting;

}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_MainMenu_C::BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OpenSecondaryWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MainMenu_C::OpenSecondaryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OpenSecondaryWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_MainMenu_C::BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "BndEvt__BP_MainMenu_Button_97_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_MainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKWidgetInterface_C>K2Node_DynamicCast_AsBP_SGKWidget_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_MenuReference_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MainMenu_C::ExecuteUbergraph_BP_MainMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_OpenSource_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKWidgetInterface_C> K2Node_DynamicCast_AsBP_SGKWidget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_MenuReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ExecuteUbergraph_BP_MainMenu");

	Params::UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKWidget_Interface = K2Node_DynamicCast_AsBP_SGKWidget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_MenuReference_ReturnValue = CallFunc_SGK_MenuReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


