#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipmentSlot

#include "Basic.hpp"

#include "BP_EquipmentSlot_classes.hpp"
#include "BP_EquipmentSlot_parameters.hpp"


namespace SDK
{

// Function BP_EquipmentSlot.BP_EquipmentSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_EquipmentSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.ExecuteUbergraph_BP_EquipmentSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentSlot_C::ExecuteUbergraph_BP_EquipmentSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "ExecuteUbergraph_BP_EquipmentSlot");

	Params::BP_EquipmentSlot_C_ExecuteUbergraph_BP_EquipmentSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_EquipmentSlot_C::GetItemName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "GetItemName");

	Params::BP_EquipmentSlot_C_GetItemName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.HideOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlot_C::HideOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "HideOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.IsItemValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ItemValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentSlot_C::IsItemValid(bool* ItemValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "IsItemValid");

	Params::BP_EquipmentSlot_C_IsItemValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemValid != nullptr)
		*ItemValid = Parms.ItemValid;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.LoadGameSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlot_C::LoadGameSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "LoadGameSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnDragDetected");

	Params::BP_EquipmentSlot_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_EquipmentSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnDrop");

	Params::BP_EquipmentSlot_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_EquipmentSlot_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnMouseButtonDoubleClick");

	Params::BP_EquipmentSlot_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_EquipmentSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnMouseButtonDown");

	Params::BP_EquipmentSlot_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_EquipmentSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnMouseEnter");

	Params::BP_EquipmentSlot_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_EquipmentSlot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "OnMouseLeave");

	Params::BP_EquipmentSlot_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipmentSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "PreConstruct");

	Params::BP_EquipmentSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.ShowGreenOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlot_C::ShowGreenOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "ShowGreenOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.ShowRedOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlot_C::ShowRedOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "ShowRedOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipmentSlot.BP_EquipmentSlot_C.UpdateEquipmentItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_EquipmentSlot                 Param_EquipmentSlot                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_EquipmentSlot_C::UpdateEquipmentItem(const struct FS_EquipmentSlot& Param_EquipmentSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipmentSlot_C", "UpdateEquipmentItem");

	Params::BP_EquipmentSlot_C_UpdateEquipmentItem Parms{};

	Parms.Param_EquipmentSlot = std::move(Param_EquipmentSlot);

	UObject::ProcessEvent(Func, &Parms);
}

}

