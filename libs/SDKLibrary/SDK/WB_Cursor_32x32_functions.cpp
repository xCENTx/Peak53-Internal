#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Cursor_32x32.WB_Cursor_32x32_C
// (None)

class UClass* UWB_Cursor_32x32_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Cursor_32x32_C");

	return Clss;
}


// WB_Cursor_32x32_C WB_Cursor_32x32.Default__WB_Cursor_32x32_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Cursor_32x32_C* UWB_Cursor_32x32_C::GetDefaultObj()
{
	static class UWB_Cursor_32x32_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Cursor_32x32_C*>(UWB_Cursor_32x32_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Cursor_32x32.WB_Cursor_32x32_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Cursor_32x32_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Cursor_32x32_C", "PreConstruct");

	Params::UWB_Cursor_32x32_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Cursor_32x32.WB_Cursor_32x32_C.ExecuteUbergraph_WB_Cursor_32x32
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_Overall_Color_Tone_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_Overall_Color_Tone_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_Overall_Color_Contrast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_Overall_Color_Font                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_Overall_Color_Font_Contrast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColors_OverallColor_White                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Cursor_32x32_C::ExecuteUbergraph_WB_Cursor_32x32(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Tone_1, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Tone_2, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Contrast, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Font, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Font_Contrast, const struct FLinearColor& CallFunc_GetGlobalColors_OverallColor_White)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Cursor_32x32_C", "ExecuteUbergraph_WB_Cursor_32x32");

	Params::UWB_Cursor_32x32_C_ExecuteUbergraph_WB_Cursor_32x32_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGlobalColors_Overall_Color_Tone_1 = CallFunc_GetGlobalColors_Overall_Color_Tone_1;
	Parms.CallFunc_GetGlobalColors_Overall_Color_Tone_2 = CallFunc_GetGlobalColors_Overall_Color_Tone_2;
	Parms.CallFunc_GetGlobalColors_Overall_Color_Contrast = CallFunc_GetGlobalColors_Overall_Color_Contrast;
	Parms.CallFunc_GetGlobalColors_Overall_Color_Font = CallFunc_GetGlobalColors_Overall_Color_Font;
	Parms.CallFunc_GetGlobalColors_Overall_Color_Font_Contrast = CallFunc_GetGlobalColors_Overall_Color_Font_Contrast;
	Parms.CallFunc_GetGlobalColors_OverallColor_White = CallFunc_GetGlobalColors_OverallColor_White;

	UObject::ProcessEvent(Func, &Parms);

}

}


