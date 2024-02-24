#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKDamageInterface.BP_SGKDamageInterface_C
// (None)

class UClass* IBP_SGKDamageInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKDamageInterface_C");

	return Clss;
}


// BP_SGKDamageInterface_C BP_SGKDamageInterface.Default__BP_SGKDamageInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKDamageInterface_C* IBP_SGKDamageInterface_C::GetDefaultObj()
{
	static class IBP_SGKDamageInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKDamageInterface_C*>(IBP_SGKDamageInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.GetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKDamageInterface_C::GetHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "GetHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_DamageType            DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Hitbox                HitBox                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKDamageInterface_C::SGK_Damage(int32 BaseDamage, class AActor* EventInstigator, class AActor* DamageCauser, enum class E_DamageType DamageType, enum class E_Hitbox HitBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK Damage");

	Params::IBP_SGKDamageInterface_C_SGK_Damage_Params Parms{};

	Parms.BaseDamage = BaseDamage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.DamageType = DamageType;
	Parms.HitBox = HitBox;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK SetCurrentHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHealthAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKDamageInterface_C::SGK_SetCurrentHealth(int32 NewHealthAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK SetCurrentHealth");

	Params::IBP_SGKDamageInterface_C_SGK_SetCurrentHealth_Params Parms{};

	Parms.NewHealthAmount = NewHealthAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK ShowHealthWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowHealthWidget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HealthWidgetName                                                 (Parm, OutParm)

void IBP_SGKDamageInterface_C::SGK_ShowHealthWidget(bool* ShowHealthWidget, class FText* HealthWidgetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK ShowHealthWidget");

	Params::IBP_SGKDamageInterface_C_SGK_ShowHealthWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowHealthWidget != nullptr)
		*ShowHealthWidget = Parms.ShowHealthWidget;

	if (HealthWidgetName != nullptr)
		*HealthWidgetName = Parms.HealthWidgetName;

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK MaxHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKDamageInterface_C::SGK_MaxHealth(int32* MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK MaxHealth");

	Params::IBP_SGKDamageInterface_C_SGK_MaxHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK CurrentHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKDamageInterface_C::SGK_CurrentHealth(int32* Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK CurrentHealth");

	Params::IBP_SGKDamageInterface_C_SGK_CurrentHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;

}


// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK BleedDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TickDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TickTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BleedLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKDamageInterface_C::SGK_BleedDamage(int32 TickDamage, double TickTime, double BleedLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKDamageInterface_C", "SGK BleedDamage");

	Params::IBP_SGKDamageInterface_C_SGK_BleedDamage_Params Parms{};

	Parms.TickDamage = TickDamage;
	Parms.TickTime = TickTime;
	Parms.BleedLength = BleedLength;

	UObject::ProcessEvent(Func, &Parms);

}

}


