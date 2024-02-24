#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DummyMarker.DummyMarker_C
// (Actor)

class UClass* ADummyMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DummyMarker_C");

	return Clss;
}


// DummyMarker_C DummyMarker.Default__DummyMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADummyMarker_C* ADummyMarker_C::GetDefaultObj()
{
	static class ADummyMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADummyMarker_C*>(ADummyMarker_C::StaticClass()->DefaultObject);

	return Default;
}

}


