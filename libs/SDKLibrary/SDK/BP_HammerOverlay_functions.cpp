#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_HammerOverlay.BP_HammerOverlay_C
// (None)

class UClass* UBP_HammerOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HammerOverlay_C");

	return Clss;
}


// BP_HammerOverlay_C BP_HammerOverlay.Default__BP_HammerOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HammerOverlay_C* UBP_HammerOverlay_C::GetDefaultObj()
{
	static class UBP_HammerOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HammerOverlay_C*>(UBP_HammerOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


