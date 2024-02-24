#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicWindowFrame.BP_BasicWindowFrame_C
// (Actor)

class UClass* ABP_BasicWindowFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicWindowFrame_C");

	return Clss;
}


// BP_BasicWindowFrame_C BP_BasicWindowFrame.Default__BP_BasicWindowFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicWindowFrame_C* ABP_BasicWindowFrame_C::GetDefaultObj()
{
	static class ABP_BasicWindowFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicWindowFrame_C*>(ABP_BasicWindowFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


