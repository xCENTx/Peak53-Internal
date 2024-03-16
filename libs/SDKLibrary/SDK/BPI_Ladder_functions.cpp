#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Ladder.BPI_Ladder_C
// (None)

class UClass* IBPI_Ladder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Ladder_C");

	return Clss;
}


// BPI_Ladder_C BPI_Ladder.Default__BPI_Ladder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Ladder_C* IBPI_Ladder_C::GetDefaultObj()
{
	static class IBPI_Ladder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Ladder_C*>(IBPI_Ladder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Ladder.BPI_Ladder_C.SetLadderRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterLadder_C*          LadderRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Ladder_C::SetLadderRef(class ABP_MasterLadder_C* LadderRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ladder_C", "SetLadderRef");

	Params::IBPI_Ladder_C_SetLadderRef_Params Parms{};

	Parms.LadderRef = LadderRef;

	UObject::ProcessEvent(Func, &Parms);

}

}


