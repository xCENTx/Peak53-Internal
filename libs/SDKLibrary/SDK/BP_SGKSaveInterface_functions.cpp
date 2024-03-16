#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKSaveInterface.BP_SGKSaveInterface_C
// (None)

class UClass* IBP_SGKSaveInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKSaveInterface_C");

	return Clss;
}


// BP_SGKSaveInterface_C BP_SGKSaveInterface.Default__BP_SGKSaveInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKSaveInterface_C* IBP_SGKSaveInterface_C::GetDefaultObj()
{
	static class IBP_SGKSaveInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKSaveInterface_C*>(IBP_SGKSaveInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKSaveInterface.BP_SGKSaveInterface_C.SGKSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKSaveInterface_C::SGKSave(class UBP_SGKSaveGame_C* Save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveInterface_C", "SGKSave");

	Params::IBP_SGKSaveInterface_C_SGKSave_Params Parms{};

	Parms.Save = Save;

	UObject::ProcessEvent(Func, &Parms);

}

}


