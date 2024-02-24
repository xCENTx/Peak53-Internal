#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IdleShake.IdleShake_C
// (None)

class UClass* UIdleShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IdleShake_C");

	return Clss;
}


// IdleShake_C IdleShake.Default__IdleShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIdleShake_C* UIdleShake_C::GetDefaultObj()
{
	static class UIdleShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIdleShake_C*>(UIdleShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


