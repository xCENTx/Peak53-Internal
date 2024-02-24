#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichImageDecorate.BP_RichImageDecorate_C
// (None)

class UClass* UBP_RichImageDecorate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichImageDecorate_C");

	return Clss;
}


// BP_RichImageDecorate_C BP_RichImageDecorate.Default__BP_RichImageDecorate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichImageDecorate_C* UBP_RichImageDecorate_C::GetDefaultObj()
{
	static class UBP_RichImageDecorate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichImageDecorate_C*>(UBP_RichImageDecorate_C::StaticClass()->DefaultObject);

	return Default;
}

}


