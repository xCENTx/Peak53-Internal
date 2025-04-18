#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VendorListing

#include "Basic.hpp"

#include "BP_VendorListing_classes.hpp"
#include "BP_VendorListing_parameters.hpp"


namespace SDK
{

// Function BP_VendorListing.BP_VendorListing_C.BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorListing_C::BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	Params::BP_VendorListing_C_BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_VendorListing_C::BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	Params::BP_VendorListing_C_BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_VendorListing_C::BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VendorListing.BP_VendorListing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_VendorListing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VendorListing.BP_VendorListing_C.ExecuteUbergraph_BP_VendorListing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorListing_C::ExecuteUbergraph_BP_VendorListing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "ExecuteUbergraph_BP_VendorListing");

	Params::BP_VendorListing_C_ExecuteUbergraph_BP_VendorListing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.InitializeVenderBuyListing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorBuy                     VenderListing                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_VendorListing_C::InitializeVenderBuyListing(const struct FS_VendorBuy& VenderListing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "InitializeVenderBuyListing");

	Params::BP_VendorListing_C_InitializeVenderBuyListing Parms{};

	Parms.VenderListing = std::move(VenderListing);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.InitializeVenderSellListing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_VendorSell                    Param_VenderSellListing                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_VendorListing_C::InitializeVenderSellListing(const struct FS_VendorSell& Param_VenderSellListing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "InitializeVenderSellListing");

	Params::BP_VendorListing_C_InitializeVenderSellListing Parms{};

	Parms.Param_VenderSellListing = std::move(Param_VenderSellListing);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_VendorListing_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "OnMouseEnter");

	Params::BP_VendorListing_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_VendorListing_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "OnMouseLeave");

	Params::BP_VendorListing_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VendorListing.BP_VendorListing_C.ToggleTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OpenTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VendorListing_C::ToggleTooltip(bool OpenTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VendorListing_C", "ToggleTooltip");

	Params::BP_VendorListing_C_ToggleTooltip Parms{};

	Parms.OpenTooltip = OpenTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

}

