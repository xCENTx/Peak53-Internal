#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FFA_PlaceholderEndScreen.FFA_PlaceholderEndScreen_C
// (None)

class UClass* UFFA_PlaceholderEndScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FFA_PlaceholderEndScreen_C");

	return Clss;
}


// FFA_PlaceholderEndScreen_C FFA_PlaceholderEndScreen.Default__FFA_PlaceholderEndScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFFA_PlaceholderEndScreen_C* UFFA_PlaceholderEndScreen_C::GetDefaultObj()
{
	static class UFFA_PlaceholderEndScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFFA_PlaceholderEndScreen_C*>(UFFA_PlaceholderEndScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FFA_PlaceholderEndScreen.FFA_PlaceholderEndScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFFA_PlaceholderEndScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FFA_PlaceholderEndScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FFA_PlaceholderEndScreen.FFA_PlaceholderEndScreen_C.ExecuteUbergraph_FFA_PlaceholderEndScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFFA_PlaceholderEndScreen_C::ExecuteUbergraph_FFA_PlaceholderEndScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FFA_PlaceholderEndScreen_C", "ExecuteUbergraph_FFA_PlaceholderEndScreen");

	Params::UFFA_PlaceholderEndScreen_C_ExecuteUbergraph_FFA_PlaceholderEndScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


