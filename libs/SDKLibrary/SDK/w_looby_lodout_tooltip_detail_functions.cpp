#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_looby_lodout_tooltip_detail.w_looby_lodout_tooltip_detail_C
// (None)

class UClass* UW_looby_lodout_tooltip_detail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_looby_lodout_tooltip_detail_C");

	return Clss;
}


// w_looby_lodout_tooltip_detail_C w_looby_lodout_tooltip_detail.Default__w_looby_lodout_tooltip_detail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_looby_lodout_tooltip_detail_C* UW_looby_lodout_tooltip_detail_C::GetDefaultObj()
{
	static class UW_looby_lodout_tooltip_detail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_looby_lodout_tooltip_detail_C*>(UW_looby_lodout_tooltip_detail_C::StaticClass()->DefaultObject);

	return Default;
}

}


