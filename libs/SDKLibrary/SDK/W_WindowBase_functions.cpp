#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WindowBase.W_WindowBase_C
// (None)

class UClass* UW_WindowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WindowBase_C");

	return Clss;
}


// W_WindowBase_C W_WindowBase.Default__W_WindowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WindowBase_C* UW_WindowBase_C::GetDefaultObj()
{
	static class UW_WindowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WindowBase_C*>(UW_WindowBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WindowBase.W_WindowBase_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MenuCameras           MenuCamera                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WindowBase_C::ButtonClicked__DelegateSignature(enum class E_MenuCameras MenuCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WindowBase_C", "ButtonClicked__DelegateSignature");

	Params::UW_WindowBase_C_ButtonClicked__DelegateSignature_Params Parms{};

	Parms.MenuCamera = MenuCamera;

	UObject::ProcessEvent(Func, &Parms);

}

}


