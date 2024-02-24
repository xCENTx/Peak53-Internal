#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SprintShake.SprintShake_C
// (None)

class UClass* USprintShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SprintShake_C");

	return Clss;
}


// SprintShake_C SprintShake.Default__SprintShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USprintShake_C* USprintShake_C::GetDefaultObj()
{
	static class USprintShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USprintShake_C*>(USprintShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


