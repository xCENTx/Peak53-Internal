#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VOIPInterface.BP_VOIPInterface_C
// (None)

class UClass* IBP_VOIPInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VOIPInterface_C");

	return Clss;
}


// BP_VOIPInterface_C BP_VOIPInterface.Default__BP_VOIPInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_VOIPInterface_C* IBP_VOIPInterface_C::GetDefaultObj()
{
	static class IBP_VOIPInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_VOIPInterface_C*>(IBP_VOIPInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetVOIPComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AntizeVOIPComponent_C*   VOIPComponentRef                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_VOIPInterface_C::MSG_AVP_GetVOIPComponent(class UBP_AntizeVOIPComponent_C** VOIPComponentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPInterface_C", "MSG_AVP_GetVOIPComponent");

	Params::IBP_VOIPInterface_C_MSG_AVP_GetVOIPComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VOIPComponentRef != nullptr)
		*VOIPComponentRef = Parms.VOIPComponentRef;

}


// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetWidgetVoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            WidgetVoiceRef                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_VOIPInterface_C::MSG_AVP_GetWidgetVoice(class UWidgetComponent** WidgetVoiceRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPInterface_C", "MSG_AVP_GetWidgetVoice");

	Params::IBP_VOIPInterface_C_MSG_AVP_GetWidgetVoice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WidgetVoiceRef != nullptr)
		*WidgetVoiceRef = Parms.WidgetVoiceRef;

}


// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetPlayerUsername
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        UserName                                                         (Parm, OutParm)

void IBP_VOIPInterface_C::MSG_AVP_GetPlayerUsername(bool* Success_, class FText* UserName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPInterface_C", "MSG_AVP_GetPlayerUsername");

	Params::IBP_VOIPInterface_C_MSG_AVP_GetPlayerUsername_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

	if (UserName != nullptr)
		*UserName = Parms.UserName;

}

}


