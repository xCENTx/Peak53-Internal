#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Default.ButtonStyle_Default_C
// (None)

class UClass* UButtonStyle_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Default_C");

	return Clss;
}


// ButtonStyle_Default_C ButtonStyle_Default.Default__ButtonStyle_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Default_C* UButtonStyle_Default_C::GetDefaultObj()
{
	static class UButtonStyle_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Default_C*>(UButtonStyle_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


