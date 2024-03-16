#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_NoSaves.BP_NoSaves_C
// (None)

class UClass* UBP_NoSaves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NoSaves_C");

	return Clss;
}


// BP_NoSaves_C BP_NoSaves.Default__BP_NoSaves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NoSaves_C* UBP_NoSaves_C::GetDefaultObj()
{
	static class UBP_NoSaves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NoSaves_C*>(UBP_NoSaves_C::StaticClass()->DefaultObject);

	return Default;
}

}


