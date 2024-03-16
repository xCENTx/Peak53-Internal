#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerFeedWidget.PlayerFeedWidget_C
// (None)

class UClass* UPlayerFeedWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFeedWidget_C");

	return Clss;
}


// PlayerFeedWidget_C PlayerFeedWidget.Default__PlayerFeedWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerFeedWidget_C* UPlayerFeedWidget_C::GetDefaultObj()
{
	static class UPlayerFeedWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFeedWidget_C*>(UPlayerFeedWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerFeedWidget.PlayerFeedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerFeedWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerFeedWidget.PlayerFeedWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedWidget_C", "PreConstruct");

	Params::UPlayerFeedWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedWidget.PlayerFeedWidget_C.SendPlayerFeedMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MessageFeedVar                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETextJustify            Justification                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 In_Color_and_Opacity                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              In_Font_Info_Size                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedWidget_C::SendPlayerFeedMessage(class FText MessageFeedVar, enum class ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedWidget_C", "SendPlayerFeedMessage");

	Params::UPlayerFeedWidget_C_SendPlayerFeedMessage_Params Parms{};

	Parms.MessageFeedVar = MessageFeedVar;
	Parms.Justification = Justification;
	Parms.In_Color_and_Opacity = In_Color_and_Opacity;
	Parms.In_Font_Info_Size = In_Font_Info_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedWidget.PlayerFeedWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedWidget_C", "Tick");

	Params::UPlayerFeedWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedWidget.PlayerFeedWidget_C.ExecuteUbergraph_PlayerFeedWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerFeedMessageWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APeak53GameState_C*          K2Node_DynamicCast_AsPeak_53Game_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MessageFeedVar                                (None)
// enum class ETextJustify            K2Node_CustomEvent_Justification                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_CustomEvent_In_Color_and_Opacity                          (None)
// int32                              K2Node_CustomEvent_In_Font_Info_Size                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedWidget_C::ExecuteUbergraph_PlayerFeedWidget(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UPlayerFeedMessageWidget_C* CallFunc_Create_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_MessageFeedVar, enum class ETextJustify K2Node_CustomEvent_Justification, const struct FSlateColor& K2Node_CustomEvent_In_Color_and_Opacity, int32 K2Node_CustomEvent_In_Font_Info_Size, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedWidget_C", "ExecuteUbergraph_PlayerFeedWidget");

	Params::UPlayerFeedWidget_C_ExecuteUbergraph_PlayerFeedWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsPeak_53Game_State = K2Node_DynamicCast_AsPeak_53Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_MessageFeedVar = K2Node_CustomEvent_MessageFeedVar;
	Parms.K2Node_CustomEvent_Justification = K2Node_CustomEvent_Justification;
	Parms.K2Node_CustomEvent_In_Color_and_Opacity = K2Node_CustomEvent_In_Color_and_Opacity;
	Parms.K2Node_CustomEvent_In_Font_Info_Size = K2Node_CustomEvent_In_Font_Info_Size;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


