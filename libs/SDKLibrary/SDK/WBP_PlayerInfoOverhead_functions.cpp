#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerInfoOverhead

#include "Basic.hpp"

#include "WBP_PlayerInfoOverhead_classes.hpp"
#include "WBP_PlayerInfoOverhead_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerInfoOverhead.WBP_PlayerInfoOverhead_C.Get_GreenDot_ColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWBP_PlayerInfoOverhead_C::Get_GreenDot_ColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInfoOverhead_C", "Get_GreenDot_ColorAndOpacity");

	Params::WBP_PlayerInfoOverhead_C_Get_GreenDot_ColorAndOpacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerInfoOverhead.WBP_PlayerInfoOverhead_C.Get_PlayerNameText_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_PlayerInfoOverhead_C::Get_PlayerNameText_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInfoOverhead_C", "Get_PlayerNameText_Text");

	Params::WBP_PlayerInfoOverhead_C_Get_PlayerNameText_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerInfoOverhead.WBP_PlayerInfoOverhead_C.Get_SizeBox_0_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_PlayerInfoOverhead_C::Get_SizeBox_0_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInfoOverhead_C", "Get_SizeBox_0_Visibility");

	Params::WBP_PlayerInfoOverhead_C_Get_SizeBox_0_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerInfoOverhead.WBP_PlayerInfoOverhead_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_PlayerInfoOverhead_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInfoOverhead_C", "GetVisibility_0");

	Params::WBP_PlayerInfoOverhead_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

