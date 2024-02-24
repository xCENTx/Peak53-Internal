#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shelf_01b.BP_Shelf_01b_C
// (Actor)

class UClass* ABP_Shelf_01b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shelf_01b_C");

	return Clss;
}


// BP_Shelf_01b_C BP_Shelf_01b.Default__BP_Shelf_01b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shelf_01b_C* ABP_Shelf_01b_C::GetDefaultObj()
{
	static class ABP_Shelf_01b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shelf_01b_C*>(ABP_Shelf_01b_C::StaticClass()->DefaultObject);

	return Default;
}

}


