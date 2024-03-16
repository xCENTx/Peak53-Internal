#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HDRI_LIGHTING_XROADS.HDRI_LIGHTING_XROADS_C
// (Actor)

class UClass* AHDRI_LIGHTING_XROADS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HDRI_LIGHTING_XROADS_C");

	return Clss;
}


// HDRI_LIGHTING_XROADS_C HDRI_LIGHTING_XROADS.Default__HDRI_LIGHTING_XROADS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHDRI_LIGHTING_XROADS_C* AHDRI_LIGHTING_XROADS_C::GetDefaultObj()
{
	static class AHDRI_LIGHTING_XROADS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHDRI_LIGHTING_XROADS_C*>(AHDRI_LIGHTING_XROADS_C::StaticClass()->DefaultObject);

	return Default;
}

}


