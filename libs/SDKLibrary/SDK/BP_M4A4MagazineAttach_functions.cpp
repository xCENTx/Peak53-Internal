#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M4A4MagazineAttach.BP_M4A4MagazineAttach_C
// (Actor)

class UClass* ABP_M4A4MagazineAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M4A4MagazineAttach_C");

	return Clss;
}


// BP_M4A4MagazineAttach_C BP_M4A4MagazineAttach.Default__BP_M4A4MagazineAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M4A4MagazineAttach_C* ABP_M4A4MagazineAttach_C::GetDefaultObj()
{
	static class ABP_M4A4MagazineAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M4A4MagazineAttach_C*>(ABP_M4A4MagazineAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}

