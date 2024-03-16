#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InGameMenu.BP_InGameMenu_C
// (None)

class UClass* UBP_InGameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGameMenu_C");

	return Clss;
}


// BP_InGameMenu_C BP_InGameMenu.Default__BP_InGameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGameMenu_C* UBP_InGameMenu_C::GetDefaultObj()
{
	static class UBP_InGameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGameMenu_C*>(UBP_InGameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InGameMenu.BP_InGameMenu_C.ExecuteUbergraph_BP_InGameMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGameMenu_C::ExecuteUbergraph_BP_InGameMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InGameMenu_C", "ExecuteUbergraph_BP_InGameMenu");

	Params::UBP_InGameMenu_C_ExecuteUbergraph_BP_InGameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


