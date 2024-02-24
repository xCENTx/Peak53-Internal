#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MasterCharRef.BPI_MasterCharRef_C
// (None)

class UClass* IBPI_MasterCharRef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MasterCharRef_C");

	return Clss;
}


// BPI_MasterCharRef_C BPI_MasterCharRef.Default__BPI_MasterCharRef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MasterCharRef_C* IBPI_MasterCharRef_C::GetDefaultObj()
{
	static class IBPI_MasterCharRef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MasterCharRef_C*>(IBPI_MasterCharRef_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MasterCharRef.BPI_MasterCharRef_C.CharRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SGKMasterCharacter_C*    CharRef                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_MasterCharRef_C::CharRef(class ABP_SGKMasterCharacter_C** CharRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MasterCharRef_C", "CharRef");

	Params::IBPI_MasterCharRef_C_CharRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharRef != nullptr)
		*CharRef = Parms.CharRef;

}

}


