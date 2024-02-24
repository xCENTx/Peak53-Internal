#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Button_SelectedHovered.TextStyle_Button_SelectedHovered_C
// (None)

class UClass* UTextStyle_Button_SelectedHovered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Button_SelectedHovered_C");

	return Clss;
}


// TextStyle_Button_SelectedHovered_C TextStyle_Button_SelectedHovered.Default__TextStyle_Button_SelectedHovered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Button_SelectedHovered_C* UTextStyle_Button_SelectedHovered_C::GetDefaultObj()
{
	static class UTextStyle_Button_SelectedHovered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Button_SelectedHovered_C*>(UTextStyle_Button_SelectedHovered_C::StaticClass()->DefaultObject);

	return Default;
}

}


