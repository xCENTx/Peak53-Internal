#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PrimaryDataAsset_Global.BP_PrimaryDataAsset_Global_C
// (None)

class UClass* UBP_PrimaryDataAsset_Global_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PrimaryDataAsset_Global_C");

	return Clss;
}


// BP_PrimaryDataAsset_Global_C BP_PrimaryDataAsset_Global.Default__BP_PrimaryDataAsset_Global_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PrimaryDataAsset_Global_C* UBP_PrimaryDataAsset_Global_C::GetDefaultObj()
{
	static class UBP_PrimaryDataAsset_Global_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PrimaryDataAsset_Global_C*>(UBP_PrimaryDataAsset_Global_C::StaticClass()->DefaultObject);

	return Default;
}

}


