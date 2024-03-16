#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass INT_EquipmentCharacter.INT_EquipmentCharacter_C
// (None)

class UClass* IINT_EquipmentCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("INT_EquipmentCharacter_C");

	return Clss;
}


// INT_EquipmentCharacter_C INT_EquipmentCharacter.Default__INT_EquipmentCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IINT_EquipmentCharacter_C* IINT_EquipmentCharacter_C::GetDefaultObj()
{
	static class IINT_EquipmentCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IINT_EquipmentCharacter_C*>(IINT_EquipmentCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function INT_EquipmentCharacter.INT_EquipmentCharacter_C.SetisInTopBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTopBox                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_EquipmentCharacter_C::SetisInTopBox(bool IsTopBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_EquipmentCharacter_C", "SetisInTopBox");

	Params::IINT_EquipmentCharacter_C_SetisInTopBox_Params Parms{};

	Parms.IsTopBox = IsTopBox;

	UObject::ProcessEvent(Func, &Parms);

}


// Function INT_EquipmentCharacter.INT_EquipmentCharacter_C.GetisInTopBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTopBox                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_EquipmentCharacter_C::GetisInTopBox(bool* IsTopBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_EquipmentCharacter_C", "GetisInTopBox");

	Params::IINT_EquipmentCharacter_C_GetisInTopBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsTopBox != nullptr)
		*IsTopBox = Parms.IsTopBox;

}


// Function INT_EquipmentCharacter.INT_EquipmentCharacter_C.GetisOnLadder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOnLadder                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_EquipmentCharacter_C::GetisOnLadder(bool* IsOnLadder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_EquipmentCharacter_C", "GetisOnLadder");

	Params::IINT_EquipmentCharacter_C_GetisOnLadder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOnLadder != nullptr)
		*IsOnLadder = Parms.IsOnLadder;

}


// Function INT_EquipmentCharacter.INT_EquipmentCharacter_C.SetOnLadderBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOnLadder                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IINT_EquipmentCharacter_C::SetOnLadderBool(bool IsOnLadder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_EquipmentCharacter_C", "SetOnLadderBool");

	Params::IINT_EquipmentCharacter_C_SetOnLadderBool_Params Parms{};

	Parms.IsOnLadder = IsOnLadder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function INT_EquipmentCharacter.INT_EquipmentCharacter_C.EquipCharRef_INT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquipmentCharacter_C*    EquipCharRef_INT                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IINT_EquipmentCharacter_C::EquipCharRef_INT(class ABP_EquipmentCharacter_C** EquipCharRef_INT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("INT_EquipmentCharacter_C", "EquipCharRef_INT");

	Params::IINT_EquipmentCharacter_C_EquipCharRef_INT_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EquipCharRef_INT != nullptr)
		*EquipCharRef_INT = Parms.EquipCharRef_INT;

}

}


