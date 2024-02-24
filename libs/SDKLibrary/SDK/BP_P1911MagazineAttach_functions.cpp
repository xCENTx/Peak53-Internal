#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P1911MagazineAttach.BP_P1911MagazineAttach_C
// (Actor)

class UClass* ABP_P1911MagazineAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P1911MagazineAttach_C");

	return Clss;
}


// BP_P1911MagazineAttach_C BP_P1911MagazineAttach.Default__BP_P1911MagazineAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P1911MagazineAttach_C* ABP_P1911MagazineAttach_C::GetDefaultObj()
{
	static class ABP_P1911MagazineAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P1911MagazineAttach_C*>(ABP_P1911MagazineAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}


