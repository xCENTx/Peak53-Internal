#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Options-Graphics-Item.Options-Graphics-Item_C
// (None)

class UClass* UOptionsMinusGraphicsMinusItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Options-Graphics-Item_C");

	return Clss;
}


// Options-Graphics-Item_C Options-Graphics-Item.Default__Options-Graphics-Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMinusGraphicsMinusItem_C* UOptionsMinusGraphicsMinusItem_C::GetDefaultObj()
{
	static class UOptionsMinusGraphicsMinusItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMinusGraphicsMinusItem_C*>(UOptionsMinusGraphicsMinusItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Options-Graphics-Item.Options-Graphics-Item_C.ForceItemIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::ForceItemIndex(int32 CurrentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "ForceItemIndex");

	Params::UOptionsMinusGraphicsMinusItem_C_ForceItemIndex_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.SetPreviousItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentItemByIndex_Succeded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::SetPreviousItem(bool* Succeded, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "SetPreviousItem");

	Params::UOptionsMinusGraphicsMinusItem_C_SetPreviousItem_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SetCurrentItemByIndex_Succeded = CallFunc_SetCurrentItemByIndex_Succeded;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeded != nullptr)
		*Succeded = Parms.Succeded;

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.SetNextItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Succeded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentItemByIndex_Succeded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::SetNextItem(bool* Succeded, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "SetNextItem");

	Params::UOptionsMinusGraphicsMinusItem_C_SetNextItem_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_SetCurrentItemByIndex_Succeded = CallFunc_SetCurrentItemByIndex_Succeded;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeded != nullptr)
		*Succeded = Parms.Succeded;

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.SetCurrentItemByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseNotify                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Succeded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::SetCurrentItemByIndex(int32 Index, bool UseNotify, bool* Succeded, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "SetCurrentItemByIndex");

	Params::UOptionsMinusGraphicsMinusItem_C_SetCurrentItemByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.UseNotify = UseNotify;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeded != nullptr)
		*Succeded = Parms.Succeded;

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.Get Item Label by Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (Parm, OutParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::Get_Item_Label_by_Index(int32 Index, class FText* Label, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "Get Item Label by Index");

	Params::UOptionsMinusGraphicsMinusItem_C_Get_Item_Label_by_Index_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.SetItemLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Item_Label                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphicsMinusItem_C::SetItemLabel(class FText Item_Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "SetItemLabel");

	Params::UOptionsMinusGraphicsMinusItem_C_SetItemLabel_Params Parms{};

	Parms.Item_Label = Item_Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.UpdateItemDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Get_Item_Label_by_Index_Label                           (None)

void UOptionsMinusGraphicsMinusItem_C::UpdateItemDisplay(class FText CallFunc_Get_Item_Label_by_Index_Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "UpdateItemDisplay");

	Params::UOptionsMinusGraphicsMinusItem_C_UpdateItemDisplay_Params Parms{};

	Parms.CallFunc_Get_Item_Label_by_Index_Label = CallFunc_Get_Item_Label_by_Index_Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "PreConstruct");

	Params::UOptionsMinusGraphicsMinusItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.BndEvt__Options-Graphics-Item_PreviousItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusGraphicsMinusItem_C::BndEvt__OptionsMinusGraphicsMinusItem_PreviousItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "BndEvt__Options-Graphics-Item_PreviousItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.BndEvt__Options-Graphics-Item_NextItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusGraphicsMinusItem_C::BndEvt__OptionsMinusGraphicsMinusItem_NextItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "BndEvt__Options-Graphics-Item_NextItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphicsMinusItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.ExecuteUbergraph_Options-Graphics-Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetNextItem_Succeded                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPreviousItem_Succeded                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphicsMinusItem_C::ExecuteUbergraph_OptionsMinusGraphicsMinusItem(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_SetNextItem_Succeded, bool CallFunc_SetPreviousItem_Succeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "ExecuteUbergraph_Options-Graphics-Item");

	Params::UOptionsMinusGraphicsMinusItem_C_ExecuteUbergraph_OptionsMinusGraphicsMinusItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetNextItem_Succeded = CallFunc_SetNextItem_Succeded;
	Parms.CallFunc_SetPreviousItem_Succeded = CallFunc_SetPreviousItem_Succeded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics-Item.Options-Graphics-Item_C.OnItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphicsMinusItem_C::OnItemChanged__DelegateSignature(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics-Item_C", "OnItemChanged__DelegateSignature");

	Params::UOptionsMinusGraphicsMinusItem_C_OnItemChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}

}


