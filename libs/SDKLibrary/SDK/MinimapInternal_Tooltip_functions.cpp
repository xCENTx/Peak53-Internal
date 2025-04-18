#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimapInternal_Tooltip

#include "Basic.hpp"

#include "MinimapInternal_Tooltip_classes.hpp"
#include "MinimapInternal_Tooltip_parameters.hpp"


namespace SDK
{

// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinimapInternal_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinimapInternal_Tooltip_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.ExecuteUbergraph_MinimapInternal_Tooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::ExecuteUbergraph_MinimapInternal_Tooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "ExecuteUbergraph_MinimapInternal_Tooltip");

	Params::MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.OnIconDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapIconComponent*                MapIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::OnIconDestroyed(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "OnIconDestroyed");

	Params::MinimapInternal_Tooltip_C_OnIconDestroyed Parms{};

	Parms.MapIcon = MapIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Tick");

	Params::MinimapInternal_Tooltip_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

