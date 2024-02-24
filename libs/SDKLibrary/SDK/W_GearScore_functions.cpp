#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_GearScore.W_GearScore_C
// (None)

class UClass* UW_GearScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_GearScore_C");

	return Clss;
}


// W_GearScore_C W_GearScore.Default__W_GearScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_GearScore_C* UW_GearScore_C::GetDefaultObj()
{
	static class UW_GearScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_GearScore_C*>(UW_GearScore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_GearScore.W_GearScore_C.GetBrushColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UW_GearScore_C::GetBrushColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_GearScore_C", "GetBrushColor");

	Params::UW_GearScore_C_GetBrushColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


