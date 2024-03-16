#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimapInternal_Tooltip.MinimapInternal_Tooltip_C
// (None)

class UClass* UMinimapInternal_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapInternal_Tooltip_C");

	return Clss;
}


// MinimapInternal_Tooltip_C MinimapInternal_Tooltip.Default__MinimapInternal_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapInternal_Tooltip_C* UMinimapInternal_Tooltip_C::GetDefaultObj()
{
	static class UMinimapInternal_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapInternal_Tooltip_C*>(UMinimapInternal_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Tick");

	Params::UMinimapInternal_Tooltip_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.OnIconDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapIconComponent*           MapIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::OnIconDestroyed(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "OnIconDestroyed");

	Params::UMinimapInternal_Tooltip_C_OnIconDestroyed_Params Parms{};

	Parms.MapIcon = MapIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Tooltip_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.ExecuteUbergraph_MinimapInternal_Tooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePositionScaledByDPI_LocationX                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePositionScaledByDPI_LocationY                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePositionScaledByDPI_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapIconComponent*           K2Node_CustomEvent_MapIcon                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Tooltip_C::ExecuteUbergraph_MinimapInternal_Tooltip(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UMapIconComponent* K2Node_CustomEvent_MapIcon, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Tooltip_C", "ExecuteUbergraph_MinimapInternal_Tooltip");

	Params::UMinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetMousePositionScaledByDPI_LocationX = CallFunc_GetMousePositionScaledByDPI_LocationX;
	Parms.CallFunc_GetMousePositionScaledByDPI_LocationY = CallFunc_GetMousePositionScaledByDPI_LocationY;
	Parms.CallFunc_GetMousePositionScaledByDPI_ReturnValue = CallFunc_GetMousePositionScaledByDPI_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_MapIcon = K2Node_CustomEvent_MapIcon;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


