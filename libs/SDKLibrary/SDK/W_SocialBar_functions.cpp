#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SocialBar

#include "Basic.hpp"

#include "W_SocialBar_classes.hpp"
#include "W_SocialBar_parameters.hpp"


namespace SDK
{

// Function W_SocialBar.W_SocialBar_C.ExecuteUbergraph_W_SocialBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SocialBar_C::ExecuteUbergraph_W_SocialBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "ExecuteUbergraph_W_SocialBar");

	Params::W_SocialBar_C_ExecuteUbergraph_W_SocialBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SocialBar.W_SocialBar_C.BndEvt__W_SocialBar_Settings_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SocialBar_C::BndEvt__W_SocialBar_Settings_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "BndEvt__W_SocialBar_Settings_K2Node_ComponentBoundEvent_6_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SocialBar.W_SocialBar_C.BndEvt__W_SocialBar_LeaderBorad_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SocialBar_C::BndEvt__W_SocialBar_LeaderBorad_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "BndEvt__W_SocialBar_LeaderBorad_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SocialBar.W_SocialBar_C.BndEvt__W_SocialBar_Comunication_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SocialBar_C::BndEvt__W_SocialBar_Comunication_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "BndEvt__W_SocialBar_Comunication_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SocialBar.W_SocialBar_C.BndEvt__W_SocialBar_BugReporting_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SocialBar_C::BndEvt__W_SocialBar_BugReporting_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "BndEvt__W_SocialBar_BugReporting_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SocialBar.W_SocialBar_C.BndEvt__W_SocialBar_AddSquadMember_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
// (BlueprintEvent)

void UW_SocialBar_C::BndEvt__W_SocialBar_AddSquadMember_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SocialBar_C", "BndEvt__W_SocialBar_AddSquadMember_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

