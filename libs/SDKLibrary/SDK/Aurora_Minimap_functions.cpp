#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Aurora_Minimap.Aurora_Minimap_C
// (None)

class UClass* UAurora_Minimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Aurora_Minimap_C");

	return Clss;
}


// Aurora_Minimap_C Aurora_Minimap.Default__Aurora_Minimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAurora_Minimap_C* UAurora_Minimap_C::GetDefaultObj()
{
	static class UAurora_Minimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAurora_Minimap_C*>(UAurora_Minimap_C::StaticClass()->DefaultObject);

	return Default;
}

}


