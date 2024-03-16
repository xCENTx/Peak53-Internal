#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CustomizationComponent.BP_CustomizationComponent_C
// (None)

class UClass* UBP_CustomizationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CustomizationComponent_C");

	return Clss;
}


// BP_CustomizationComponent_C BP_CustomizationComponent.Default__BP_CustomizationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CustomizationComponent_C* UBP_CustomizationComponent_C::GetDefaultObj()
{
	static class UBP_CustomizationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CustomizationComponent_C*>(UBP_CustomizationComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


