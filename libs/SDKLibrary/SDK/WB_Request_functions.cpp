#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Request.WB_Request_C
// (None)

class UClass* UWB_Request_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Request_C");

	return Clss;
}


// WB_Request_C WB_Request.Default__WB_Request_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Request_C* UWB_Request_C::GetDefaultObj()
{
	static class UWB_Request_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Request_C*>(UWB_Request_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Request.WB_Request_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWB_Request_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "OnPreviewKeyDown");

	Params::UWB_Request_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Request.WB_Request_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Request_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "BP_OnHandleBackAction");

	Params::UWB_Request_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Request.WB_Request_C.FindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        TextOverride                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionDataBase  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWB_Request_C::FindText(class FText TextOverride, struct FDataTableRowHandle& DataTableRowHandle, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, const struct FCommonInputActionDataBase& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "FindText");

	Params::UWB_Request_C_FindText_Params Parms{};

	Parms.TextOverride = TextOverride;
	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Request.WB_Request_C.Anim_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::Anim_Fade(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "Anim_Fade");

	Params::UWB_Request_C_Anim_Fade_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Forward = Forward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Request.WB_Request_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Request_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Request.WB_Request_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWB_Request_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Request.WB_Request_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Request_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Request.WB_Request_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Request_C::SetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "SetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Request.WB_Request_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "PreConstruct");

	Params::UWB_Request_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Request.WB_Request_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::OnButtonClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "OnButtonClicked");

	Params::UWB_Request_C_OnButtonClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Request.WB_Request_C.OnUserReaction_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::OnUserReaction_Event(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "OnUserReaction_Event");

	Params::UWB_Request_C_OnUserReaction_Event_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RequestOptions           CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FText                        CallFunc_FindText_ReturnValue                                    (None)
// bool                               CallFunc_ValidateDataTableRow_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColorByType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateDataTableRow_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Quick_Button_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddToHorizontalBox_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FS_RequestOptions           K2Node_MakeStruct_S_RequestOptions                               (HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RequestOptions           K2Node_MakeStruct_S_RequestOptions_1                             (HasGetValueTypeHash)
// TArray<struct FS_RequestOptions>   K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FS_RequestOptions>   K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FS_RequestOptions>   K2Node_Select_Default_1                                          (ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::ExecuteUbergraph_WB_Request(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_RequestOptions& CallFunc_Array_Get_Item, class FText CallFunc_FindText_ReturnValue, bool CallFunc_ValidateDataTableRow_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_ValidateDataTableRow_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Select_Default, bool K2Node_CustomEvent_Confirmed, double CallFunc_MakeLiteralDouble_ReturnValue, bool Temp_bool_Variable_2, const struct FMargin& K2Node_MakeStruct_Margin, class UWB_Quick_Button_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddToHorizontalBox_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool Temp_bool_IsClosed_Variable_1, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions_1, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array_1, TArray<struct FS_RequestOptions>& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "ExecuteUbergraph_WB_Request");

	Params::UWB_Request_C_ExecuteUbergraph_WB_Request_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FindText_ReturnValue = CallFunc_FindText_ReturnValue;
	Parms.CallFunc_ValidateDataTableRow_ReturnValue = CallFunc_ValidateDataTableRow_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGlobalColorByType_ReturnValue = CallFunc_GetGlobalColorByType_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_ValidateDataTableRow_ReturnValue_1 = CallFunc_ValidateDataTableRow_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddToHorizontalBox_ReturnValue = CallFunc_AddToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_S_RequestOptions = K2Node_MakeStruct_S_RequestOptions;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_MakeStruct_S_RequestOptions_1 = K2Node_MakeStruct_S_RequestOptions_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Request.WB_Request_C.OnUserReaction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Request_C::OnUserReaction__DelegateSignature(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Request_C", "OnUserReaction__DelegateSignature");

	Params::UWB_Request_C_OnUserReaction__DelegateSignature_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}

}


