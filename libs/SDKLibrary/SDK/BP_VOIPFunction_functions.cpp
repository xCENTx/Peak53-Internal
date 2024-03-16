#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VOIPFunction.BP_VOIPFunction_C
// (None)

class UClass* UBP_VOIPFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VOIPFunction_C");

	return Clss;
}


// BP_VOIPFunction_C BP_VOIPFunction.Default__BP_VOIPFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VOIPFunction_C* UBP_VOIPFunction_C::GetDefaultObj()
{
	static class UBP_VOIPFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VOIPFunction_C*>(UBP_VOIPFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VOIPFunction.BP_VOIPFunction_C.SendSetAttenuationOnTeam_ByActorRef
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InSameTeam_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  ToPlayerRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  FromPlayerRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::SendSetAttenuationOnTeam_ByActorRef(bool InSameTeam_, class ACharacter* ToPlayerRef, class ACharacter* FromPlayerRef, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "SendSetAttenuationOnTeam_ByActorRef");

	Params::UBP_VOIPFunction_C_SendSetAttenuationOnTeam_ByActorRef_Params Parms{};

	Parms.InSameTeam_ = InSameTeam_;
	Parms.ToPlayerRef = ToPlayerRef;
	Parms.FromPlayerRef = FromPlayerRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.JoinTeam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NewTeamID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::JoinTeam(class AActor* OwnerRef, int32 NewTeamID, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "JoinTeam");

	Params::UBP_VOIPFunction_C_JoinTeam_Params Parms{};

	Parms.OwnerRef = OwnerRef;
	Parms.NewTeamID = NewTeamID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.SetIsMuted_ByIndex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::SetIsMuted_ByIndex(class AActor* OwnerRef, int32 PlayerIndex, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "SetIsMuted_ByIndex");

	Params::UBP_VOIPFunction_C_SetIsMuted_ByIndex_Params Parms{};

	Parms.OwnerRef = OwnerRef;
	Parms.PlayerIndex = PlayerIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.SetIsMuted_ByActorRef
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Mute_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InMyTeam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::SetIsMuted_ByActorRef(class AActor* ActorRef, bool Mute_, bool InMyTeam, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "SetIsMuted_ByActorRef");

	Params::UBP_VOIPFunction_C_SetIsMuted_ByActorRef_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.Mute_ = Mute_;
	Parms.InMyTeam = InMyTeam;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.GetTeamID_ByActorRef
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              TeamID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::GetTeamID_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, int32* TeamID, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "GetTeamID_ByActorRef");

	Params::UBP_VOIPFunction_C_GetTeamID_ByActorRef_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TeamID != nullptr)
		*TeamID = Parms.TeamID;

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.GetIsMuted_ByActorRef
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsMuted_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::GetIsMuted_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, bool* IsMuted_, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "GetIsMuted_ByActorRef");

	Params::UBP_VOIPFunction_C_GetIsMuted_ByActorRef_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMuted_ != nullptr)
		*IsMuted_ = Parms.IsMuted_;

}


// Function BP_VOIPFunction.BP_VOIPFunction_C.GetIsVOIPActivated_ByActorRef
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsVOIPActivated_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AntizeVOIPComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VOIPFunction_C::GetIsVOIPActivated_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, bool* IsVOIPActivated_, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VOIPFunction_C", "GetIsVOIPActivated_ByActorRef");

	Params::UBP_VOIPFunction_C_GetIsVOIPActivated_ByActorRef_Params Parms{};

	Parms.ActorRef = ActorRef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVOIPActivated_ != nullptr)
		*IsVOIPActivated_ = Parms.IsVOIPActivated_;

}

}


