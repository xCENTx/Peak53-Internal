#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_States.ButtonStyle_States_C
// (None)

class UClass* UButtonStyle_States_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_States_C");

	return Clss;
}


// ButtonStyle_States_C ButtonStyle_States.Default__ButtonStyle_States_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_States_C* UButtonStyle_States_C::GetDefaultObj()
{
	static class UButtonStyle_States_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_States_C*>(UButtonStyle_States_C::StaticClass()->DefaultObject);

	return Default;
}

}


