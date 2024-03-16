#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_OverlayKey.BP_OverlayKey_C
// (None)

class UClass* UBP_OverlayKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OverlayKey_C");

	return Clss;
}


// BP_OverlayKey_C BP_OverlayKey.Default__BP_OverlayKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OverlayKey_C* UBP_OverlayKey_C::GetDefaultObj()
{
	static class UBP_OverlayKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OverlayKey_C*>(UBP_OverlayKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OverlayKey.BP_OverlayKey_C.GetKeyIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayKey_C::GetKeyIcon(class UTexture2D** Icon, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Map_Contains_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayKey_C", "GetKeyIcon");

	Params::UBP_OverlayKey_C_GetKeyIcon_Params Parms{};

	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_OverlayKey.BP_OverlayKey_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayKey_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayKey_C", "PreConstruct");

	Params::UBP_OverlayKey_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayKey.BP_OverlayKey_C.ExecuteUbergraph_BP_OverlayKey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetKeyIcon_Icon                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayKey_C::ExecuteUbergraph_BP_OverlayKey(int32 EntryPoint, class UTexture2D* CallFunc_GetKeyIcon_Icon, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayKey_C", "ExecuteUbergraph_BP_OverlayKey");

	Params::UBP_OverlayKey_C_ExecuteUbergraph_BP_OverlayKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetKeyIcon_Icon = CallFunc_GetKeyIcon_Icon;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


