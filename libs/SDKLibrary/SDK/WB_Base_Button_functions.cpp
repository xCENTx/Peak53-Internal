#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Base_Button.WB_Base_Button_C
// (None)

class UClass* UWB_Base_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Base_Button_C");

	return Clss;
}


// WB_Base_Button_C WB_Base_Button.Default__WB_Base_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Base_Button_C* UWB_Base_Button_C::GetDefaultObj()
{
	static class UWB_Base_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Base_Button_C*>(UWB_Base_Button_C::StaticClass()->DefaultObject);

	return Default;
}

}


