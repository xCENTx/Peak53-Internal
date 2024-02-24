#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_BuildMenuOverlay.BP_BuildMenuOverlay_C
// (None)

class UClass* UBP_BuildMenuOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildMenuOverlay_C");

	return Clss;
}


// BP_BuildMenuOverlay_C BP_BuildMenuOverlay.Default__BP_BuildMenuOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildMenuOverlay_C* UBP_BuildMenuOverlay_C::GetDefaultObj()
{
	static class UBP_BuildMenuOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildMenuOverlay_C*>(UBP_BuildMenuOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateRotateOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BuildMenuOverlay_C::UpdateRotateOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuOverlay_C", "UpdateRotateOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.LowerOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BuildMenuOverlay_C::LowerOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuOverlay_C", "LowerOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.UpdateKeyOverlays
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BuildMenuOverlay_C::UpdateKeyOverlays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuOverlay_C", "UpdateKeyOverlays");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_BuildMenuOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildMenuOverlay.BP_BuildMenuOverlay_C.ExecuteUbergraph_BP_BuildMenuOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerBuildingComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_BuildPartDetails_BuildPartFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_SGK_BuildPartDetails_BuildPartDetails                   (HasGetValueTypeHash)

void UBP_BuildMenuOverlay_C::ExecuteUbergraph_BP_BuildMenuOverlay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBP_PlayerBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildMenuOverlay_C", "ExecuteUbergraph_BP_BuildMenuOverlay");

	Params::UBP_BuildMenuOverlay_C_ExecuteUbergraph_BP_BuildMenuOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartFound = CallFunc_SGK_BuildPartDetails_BuildPartFound;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartDetails = CallFunc_SGK_BuildPartDetails_BuildPartDetails;

	UObject::ProcessEvent(Func, &Parms);

}

}


