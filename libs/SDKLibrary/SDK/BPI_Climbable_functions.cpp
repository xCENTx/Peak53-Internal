#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Climbable.BPI_Climbable_C
// (None)

class UClass* IBPI_Climbable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Climbable_C");

	return Clss;
}


// BPI_Climbable_C BPI_Climbable.Default__BPI_Climbable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Climbable_C* IBPI_Climbable_C::GetDefaultObj()
{
	static class IBPI_Climbable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Climbable_C*>(IBPI_Climbable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Climbable.BPI_Climbable_C.SetLadder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DynamicLadder_C*         LadderRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Climbable_C::SetLadder(class ABP_DynamicLadder_C* LadderRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Climbable_C", "SetLadder");

	Params::IBPI_Climbable_C_SetLadder_Params Parms{};

	Parms.LadderRef = LadderRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


