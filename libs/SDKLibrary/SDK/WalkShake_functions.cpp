#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WalkShake.WalkShake_C
// (None)

class UClass* UWalkShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkShake_C");

	return Clss;
}


// WalkShake_C WalkShake.Default__WalkShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWalkShake_C* UWalkShake_C::GetDefaultObj()
{
	static class UWalkShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWalkShake_C*>(UWalkShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


