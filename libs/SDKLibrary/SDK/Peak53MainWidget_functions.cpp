#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Peak53MainWidget

#include "Basic.hpp"

#include "Peak53MainWidget_classes.hpp"
#include "Peak53MainWidget_parameters.hpp"


namespace SDK
{

// Function Peak53MainWidget.Peak53MainWidget_C.AddScoreInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ScoreValues                   ScoreInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPeak53MainWidget_C::AddScoreInfo(const struct FS_ScoreValues& ScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "AddScoreInfo");

	Params::Peak53MainWidget_C_AddScoreInfo Parms{};

	Parms.ScoreInfo = std::move(ScoreInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53MainWidget.Peak53MainWidget_C.CanKnife
// (BlueprintCallable, BlueprintEvent)

void UPeak53MainWidget_C::CanKnife()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "CanKnife");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.CantKnife
// (BlueprintCallable, BlueprintEvent)

void UPeak53MainWidget_C::CantKnife()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "CantKnife");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPeak53MainWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.ExecuteUbergraph_Peak53MainWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPeak53MainWidget_C::ExecuteUbergraph_Peak53MainWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "ExecuteUbergraph_Peak53MainWidget");

	Params::Peak53MainWidget_C_ExecuteUbergraph_Peak53MainWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53MainWidget.Peak53MainWidget_C.GetPlayerPing
// (BlueprintCallable, BlueprintEvent)

void UPeak53MainWidget_C::GetPlayerPing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "GetPlayerPing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPeak53MainWidget_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "GetVisibility_0");

	Params::Peak53MainWidget_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Peak53MainWidget.Peak53MainWidget_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPeak53MainWidget_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "GetVisibility_1");

	Params::Peak53MainWidget_C_GetVisibility_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Peak53MainWidget.Peak53MainWidget_C.GetVisibility_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPeak53MainWidget_C::GetVisibility_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "GetVisibility_2");

	Params::Peak53MainWidget_C_GetVisibility_2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Peak53MainWidget.Peak53MainWidget_C.GetVisibility_3
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPeak53MainWidget_C::GetVisibility_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "GetVisibility_3");

	Params::Peak53MainWidget_C_GetVisibility_3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Peak53MainWidget.Peak53MainWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPeak53MainWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.OpenChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsTeamChat                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPeak53MainWidget_C::OpenChat(bool bIsTeamChat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "OpenChat");

	Params::Peak53MainWidget_C_OpenChat Parms{};

	Parms.bIsTeamChat = bIsTeamChat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53MainWidget.Peak53MainWidget_C.PingTimer
// (BlueprintCallable, BlueprintEvent)

void UPeak53MainWidget_C::PingTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "PingTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Peak53MainWidget.Peak53MainWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPeak53MainWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "PreConstruct");

	Params::Peak53MainWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53MainWidget.Peak53MainWidget_C.ShowTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPeak53MainWidget_C::ShowTooltip(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "ShowTooltip");

	Params::Peak53MainWidget_C_ShowTooltip Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Peak53MainWidget.Peak53MainWidget_C.TempSwap
// (BlueprintCallable, BlueprintEvent)

void UPeak53MainWidget_C::TempSwap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Peak53MainWidget_C", "TempSwap");

	UObject::ProcessEvent(Func, nullptr);
}

}

