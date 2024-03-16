#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Scope.WBP_Scope_C
// (None)

class UClass* UWBP_Scope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Scope_C");

	return Clss;
}


// WBP_Scope_C WBP_Scope.Default__WBP_Scope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Scope_C* UWBP_Scope_C::GetDefaultObj()
{
	static class UWBP_Scope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Scope_C*>(UWBP_Scope_C::StaticClass()->DefaultObject);

	return Default;
}

}


