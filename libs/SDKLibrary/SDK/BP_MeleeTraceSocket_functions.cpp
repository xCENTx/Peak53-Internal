#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MeleeTraceSocket.BP_MeleeTraceSocket_C
// (SceneComponent)

class UClass* UBP_MeleeTraceSocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MeleeTraceSocket_C");

	return Clss;
}


// BP_MeleeTraceSocket_C BP_MeleeTraceSocket.Default__BP_MeleeTraceSocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MeleeTraceSocket_C* UBP_MeleeTraceSocket_C::GetDefaultObj()
{
	static class UBP_MeleeTraceSocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MeleeTraceSocket_C*>(UBP_MeleeTraceSocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


