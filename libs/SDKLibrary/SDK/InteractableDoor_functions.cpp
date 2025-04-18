#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractableDoor

#include "Basic.hpp"

#include "InteractableDoor_classes.hpp"
#include "InteractableDoor_parameters.hpp"


namespace SDK
{

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AInteractableDoor_C::BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractableDoor_C::BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableDoor.InteractableDoor_C.ExecuteUbergraph_InteractableDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractableDoor_C::ExecuteUbergraph_InteractableDoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "ExecuteUbergraph_InteractableDoor");

	Params::InteractableDoor_C_ExecuteUbergraph_InteractableDoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableDoor.InteractableDoor_C.OnRep_bDoorOpen?
// (BlueprintCallable, BlueprintEvent)

void AInteractableDoor_C::OnRep_bDoorOpen_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "OnRep_bDoorOpen?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableDoor.InteractableDoor_C.PulseEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AInteractableDoor_C::PulseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "PulseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableDoor.InteractableDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInteractableDoor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableDoor.InteractableDoor_C.SetDoorRotationMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractableDoor_C::SetDoorRotationMulticast(bool bOpen_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "SetDoorRotationMulticast");

	Params::InteractableDoor_C_SetDoorRotationMulticast Parms{};

	Parms.bOpen_ = bOpen_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractableDoor.InteractableDoor_C.SetDoorRotationServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AInteractableDoor_C::SetDoorRotationServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "SetDoorRotationServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableDoor.InteractableDoor_C.Timeline__FinishedFunc
// (BlueprintEvent)

void AInteractableDoor_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractableDoor.InteractableDoor_C.Timeline__UpdateFunc
// (BlueprintEvent)

void AInteractableDoor_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractableDoor_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

