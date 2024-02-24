#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerConnecting.BP_ServerConnecting_C
// (None)

class UClass* UBP_ServerConnecting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerConnecting_C");

	return Clss;
}


// BP_ServerConnecting_C BP_ServerConnecting.Default__BP_ServerConnecting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerConnecting_C* UBP_ServerConnecting_C::GetDefaultObj()
{
	static class UBP_ServerConnecting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerConnecting_C*>(UBP_ServerConnecting_C::StaticClass()->DefaultObject);

	return Default;
}

}


