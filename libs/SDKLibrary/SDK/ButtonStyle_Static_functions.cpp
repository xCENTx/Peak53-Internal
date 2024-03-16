#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Static.ButtonStyle_Static_C
// (None)

class UClass* UButtonStyle_Static_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Static_C");

	return Clss;
}


// ButtonStyle_Static_C ButtonStyle_Static.Default__ButtonStyle_Static_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Static_C* UButtonStyle_Static_C::GetDefaultObj()
{
	static class UButtonStyle_Static_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Static_C*>(UButtonStyle_Static_C::StaticClass()->DefaultObject);

	return Default;
}

}


