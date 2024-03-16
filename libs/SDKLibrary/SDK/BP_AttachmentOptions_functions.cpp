#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_AttachmentOptions.BP_AttachmentOptions_C
// (None)

class UClass* UBP_AttachmentOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttachmentOptions_C");

	return Clss;
}


// BP_AttachmentOptions_C BP_AttachmentOptions.Default__BP_AttachmentOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AttachmentOptions_C* UBP_AttachmentOptions_C::GetDefaultObj()
{
	static class UBP_AttachmentOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AttachmentOptions_C*>(UBP_AttachmentOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UBP_AttachmentOptions_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "OnMouseButtonDown");

	Params::UBP_AttachmentOptions_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AttachmentOptions_C::BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AttachmentOptions_C::BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AttachmentOptions_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_AttachmentOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentOptions.BP_AttachmentOptions_C.ExecuteUbergraph_BP_AttachmentOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlotID         K2Node_MakeStruct_S_AttachmentSlotID                             (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_AttachmentSlotID         K2Node_MakeStruct_S_AttachmentSlotID_1                           (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails           (ContainsInstancedReference, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentOptions_C::ExecuteUbergraph_BP_AttachmentOptions(int32 EntryPoint, const struct FS_AttachmentSlotID& K2Node_MakeStruct_S_AttachmentSlotID, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, const struct FS_AttachmentSlotID& K2Node_MakeStruct_S_AttachmentSlotID_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentOptions_C", "ExecuteUbergraph_BP_AttachmentOptions");

	Params::UBP_AttachmentOptions_C_ExecuteUbergraph_BP_AttachmentOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_S_AttachmentSlotID = K2Node_MakeStruct_S_AttachmentSlotID;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;
	Parms.K2Node_MakeStruct_S_AttachmentSlotID_1 = K2Node_MakeStruct_S_AttachmentSlotID_1;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound = CallFunc_SGK_ItemContainerDetails_ItemFound;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


