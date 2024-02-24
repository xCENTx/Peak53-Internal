#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Fade_01_01.W_Fade_01_01_C
// (None)

class UClass* UW_Fade_01_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Fade_01_01_C");

	return Clss;
}


// W_Fade_01_01_C W_Fade_01_01.Default__W_Fade_01_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Fade_01_01_C* UW_Fade_01_01_C::GetDefaultObj()
{
	static class UW_Fade_01_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Fade_01_01_C*>(UW_Fade_01_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Fade_01_01.W_Fade_01_01_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Fade_01_01_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Fade_01_01_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Fade_01_01.W_Fade_01_01_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Fade_01_01_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Fade_01_01_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Fade_01_01.W_Fade_01_01_C.ExecuteUbergraph_W_Fade_01_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Fade_01_01_C::ExecuteUbergraph_W_Fade_01_01(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Fade_01_01_C", "ExecuteUbergraph_W_Fade_01_01");

	Params::UW_Fade_01_01_C_ExecuteUbergraph_W_Fade_01_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


