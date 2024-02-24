#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Player_Controller.ALS_Player_Controller_C
// (Actor, PlayerController)

class UClass* AALS_Player_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Player_Controller_C");

	return Clss;
}


// ALS_Player_Controller_C ALS_Player_Controller.Default__ALS_Player_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AALS_Player_Controller_C* AALS_Player_Controller_C::GetDefaultObj()
{
	static class AALS_Player_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AALS_Player_Controller_C*>(AALS_Player_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Player_Controller.ALS_Player_Controller_C.SetGlobalTimeDilationLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Dilation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_Player_Controller_C::SetGlobalTimeDilationLocal(double Dilation, bool CallFunc_IsStandalone_ReturnValue, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Player_Controller_C", "SetGlobalTimeDilationLocal");

	Params::AALS_Player_Controller_C_SetGlobalTimeDilationLocal_Params Parms{};

	Parms.Dilation = Dilation;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


