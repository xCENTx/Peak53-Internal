#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Grungy.ButtonStyle_Grungy_C
// (None)

class UClass* UButtonStyle_Grungy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Grungy_C");

	return Clss;
}


// ButtonStyle_Grungy_C ButtonStyle_Grungy.Default__ButtonStyle_Grungy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Grungy_C* UButtonStyle_Grungy_C::GetDefaultObj()
{
	static class UButtonStyle_Grungy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Grungy_C*>(UButtonStyle_Grungy_C::StaticClass()->DefaultObject);

	return Default;
}

}


