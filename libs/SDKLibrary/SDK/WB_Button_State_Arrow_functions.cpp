#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_State_Arrow.WB_Button_State_Arrow_C
// (None)

class UClass* UWB_Button_State_Arrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_State_Arrow_C");

	return Clss;
}


// WB_Button_State_Arrow_C WB_Button_State_Arrow.Default__WB_Button_State_Arrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_State_Arrow_C* UWB_Button_State_Arrow_C::GetDefaultObj()
{
	static class UWB_Button_State_Arrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_State_Arrow_C*>(UWB_Button_State_Arrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


