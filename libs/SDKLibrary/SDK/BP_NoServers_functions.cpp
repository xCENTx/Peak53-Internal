#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_NoServers.BP_NoServers_C
// (None)

class UClass* UBP_NoServers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NoServers_C");

	return Clss;
}


// BP_NoServers_C BP_NoServers.Default__BP_NoServers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NoServers_C* UBP_NoServers_C::GetDefaultObj()
{
	static class UBP_NoServers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NoServers_C*>(UBP_NoServers_C::StaticClass()->DefaultObject);

	return Default;
}

}


