#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerFeedMessageWidget.PlayerFeedMessageWidget_C
// (None)

class UClass* UPlayerFeedMessageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFeedMessageWidget_C");

	return Clss;
}


// PlayerFeedMessageWidget_C PlayerFeedMessageWidget.Default__PlayerFeedMessageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerFeedMessageWidget_C* UPlayerFeedMessageWidget_C::GetDefaultObj()
{
	static class UPlayerFeedMessageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFeedMessageWidget_C*>(UPlayerFeedMessageWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.RemoveActorEventSeq
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  MessageFeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedMessageWidget_C::RemoveActorEventSeq(class UTextBlock* MessageFeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "RemoveActorEventSeq");

	Params::UPlayerFeedMessageWidget_C_RemoveActorEventSeq_Params Parms{};

	Parms.MessageFeed = MessageFeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedMessageWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "Tick");

	Params::UPlayerFeedMessageWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.RemoveActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerFeedMessageWidget_C::RemoveActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "RemoveActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerFeedMessageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerFeedMessageWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "PreConstruct");

	Params::UPlayerFeedMessageWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerFeedMessageWidget.PlayerFeedMessageWidget_C.ExecuteUbergraph_PlayerFeedMessageWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_CustomEvent_MessageFeed                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UPlayerFeedMessageWidget_C::ExecuteUbergraph_PlayerFeedMessageWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UTextBlock* K2Node_CustomEvent_MessageFeed, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFeedMessageWidget_C", "ExecuteUbergraph_PlayerFeedMessageWidget");

	Params::UPlayerFeedMessageWidget_C_ExecuteUbergraph_PlayerFeedMessageWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_MessageFeed = K2Node_CustomEvent_MessageFeed;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


