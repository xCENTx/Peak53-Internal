#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CraftingQueueListing.BP_CraftingQueueListing_C
// (None)

class UClass* UBP_CraftingQueueListing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingQueueListing_C");

	return Clss;
}


// BP_CraftingQueueListing_C BP_CraftingQueueListing.Default__BP_CraftingQueueListing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CraftingQueueListing_C* UBP_CraftingQueueListing_C::GetDefaultObj()
{
	static class UBP_CraftingQueueListing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CraftingQueueListing_C*>(UBP_CraftingQueueListing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.UpdateListingIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingRecipe           RecipeL                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::UpdateListingIcon(const struct FS_CraftingRecipe& RecipeL, const struct FS_CraftingCost& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "UpdateListingIcon");

	Params::UBP_CraftingQueueListing_C_UpdateListingIcon_Params Parms{};

	Parms.RecipeL = RecipeL;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.ResumeListing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::ResumeListing(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "ResumeListing");

	Params::UBP_CraftingQueueListing_C_ResumeListing_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.PauseListing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CraftingQueueListing_C::PauseListing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "PauseListing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.UpdateCraftingListing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            QueueListing                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "UpdateCraftingListing");

	Params::UBP_CraftingQueueListing_C_UpdateCraftingListing_Params Parms{};

	Parms.QueueListing = QueueListing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.UpdateCraftingTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::UpdateCraftingTimer(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "UpdateCraftingTimer");

	Params::UBP_CraftingQueueListing_C_UpdateCraftingTimer_Params Parms{};

	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.UpdateCraftingAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBP_CraftingQueueListing_C::UpdateCraftingAmount(class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "UpdateCraftingAmount");

	Params::UBP_CraftingQueueListing_C_UpdateCraftingAmount_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.InitializeQueueListing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingQueue            NewQueueListing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RecipeDetails_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_SGK_RecipeDetails_CraftingRecipe                        (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             K2Node_VariableSet_Timer_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::InitializeQueueListing(const struct FS_CraftingQueue& NewQueueListing, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double K2Node_VariableSet_Timer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "InitializeQueueListing");

	Params::UBP_CraftingQueueListing_C_InitializeQueueListing_Params Parms{};

	Parms.NewQueueListing = NewQueueListing;
	Parms.CallFunc_SGK_RecipeDetails_ReturnValue = CallFunc_SGK_RecipeDetails_ReturnValue;
	Parms.CallFunc_SGK_RecipeDetails_CraftingRecipe = CallFunc_SGK_RecipeDetails_CraftingRecipe;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_VariableSet_Timer_ImplicitCast = K2Node_VariableSet_Timer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CraftingQueueListing_C::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "StartTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CraftingQueueListing_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CraftingQueueListing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CraftingQueueListing_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingQueueListing.BP_CraftingQueueListing_C.ExecuteUbergraph_BP_CraftingQueueListing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CraftingQueueListing_C::ExecuteUbergraph_BP_CraftingQueueListing(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingQueueListing_C", "ExecuteUbergraph_BP_CraftingQueueListing");

	Params::UBP_CraftingQueueListing_C_ExecuteUbergraph_BP_CraftingQueueListing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


