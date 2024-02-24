#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MA4A4StockAttach.BP_MA4A4StockAttach_C
// (Actor)

class UClass* ABP_MA4A4StockAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MA4A4StockAttach_C");

	return Clss;
}


// BP_MA4A4StockAttach_C BP_MA4A4StockAttach.Default__BP_MA4A4StockAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MA4A4StockAttach_C* ABP_MA4A4StockAttach_C::GetDefaultObj()
{
	static class ABP_MA4A4StockAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MA4A4StockAttach_C*>(ABP_MA4A4StockAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}


