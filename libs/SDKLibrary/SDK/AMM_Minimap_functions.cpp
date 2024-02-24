#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AMM_Minimap.AMM_Minimap_C
// (None)

class UClass* UAMM_Minimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AMM_Minimap_C");

	return Clss;
}


// AMM_Minimap_C AMM_Minimap.Default__AMM_Minimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAMM_Minimap_C* UAMM_Minimap_C::GetDefaultObj()
{
	static class UAMM_Minimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAMM_Minimap_C*>(UAMM_Minimap_C::StaticClass()->DefaultObject);

	return Default;
}

}


