#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKSaveGameMetaData.BP_SGKSaveGameMetaData_C
// (None)

class UClass* UBP_SGKSaveGameMetaData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKSaveGameMetaData_C");

	return Clss;
}


// BP_SGKSaveGameMetaData_C BP_SGKSaveGameMetaData.Default__BP_SGKSaveGameMetaData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SGKSaveGameMetaData_C* UBP_SGKSaveGameMetaData_C::GetDefaultObj()
{
	static class UBP_SGKSaveGameMetaData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SGKSaveGameMetaData_C*>(UBP_SGKSaveGameMetaData_C::StaticClass()->DefaultObject);

	return Default;
}

}


