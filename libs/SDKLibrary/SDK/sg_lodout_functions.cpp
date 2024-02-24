#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass sg_lodout.sg_lodout_C
// (None)

class UClass* USg_lodout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("sg_lodout_C");

	return Clss;
}


// sg_lodout_C sg_lodout.Default__sg_lodout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USg_lodout_C* USg_lodout_C::GetDefaultObj()
{
	static class USg_lodout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USg_lodout_C*>(USg_lodout_C::StaticClass()->DefaultObject);

	return Default;
}

}


