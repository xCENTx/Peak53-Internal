#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C
// (None)

class UClass* UBP_BuildingMenuPageOne_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildingMenuPageOne_C");

	return Clss;
}


// BP_BuildingMenuPageOne_C BP_BuildingMenuPageOne.Default__BP_BuildingMenuPageOne_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildingMenuPageOne_C* UBP_BuildingMenuPageOne_C::GetDefaultObj()
{
	static class UBP_BuildingMenuPageOne_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildingMenuPageOne_C*>(UBP_BuildingMenuPageOne_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.SetCentreInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BuildPartDetails         BuildPartDetailsL                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_BuildPartDetails_BuildPartFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_SGK_BuildPartDetails_BuildPartDetails                   (HasGetValueTypeHash)

void UBP_BuildingMenuPageOne_C::SetCentreInformation(const struct FS_BuildPartDetails& BuildPartDetailsL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingMenuPageOne_C", "SetCentreInformation");

	Params::UBP_BuildingMenuPageOne_C_SetCentreInformation_Params Parms{};

	Parms.BuildPartDetailsL = BuildPartDetailsL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartFound = CallFunc_SGK_BuildPartDetails_BuildPartFound;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartDetails = CallFunc_SGK_BuildPartDetails_BuildPartDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.PopulateCostInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingCost             ArrayElementL                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         BuildPartDetailsL                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildMenuCostPanel_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_BuildPartDetails_BuildPartFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_SGK_BuildPartDetails_BuildPartDetails                   (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildingMenuPageOne_C::PopulateCostInformation(const struct FS_CraftingCost& ArrayElementL, const struct FS_BuildPartDetails& BuildPartDetailsL, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UBP_BuildMenuCostPanel_C* CallFunc_Create_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingMenuPageOne_C", "PopulateCostInformation");

	Params::UBP_BuildingMenuPageOne_C_PopulateCostInformation_Params Parms{};

	Parms.ArrayElementL = ArrayElementL;
	Parms.BuildPartDetailsL = BuildPartDetailsL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartFound = CallFunc_SGK_BuildPartDetails_BuildPartFound;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartDetails = CallFunc_SGK_BuildPartDetails_BuildPartDetails;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.GetMouseOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BuildingMenuPageOne_C::GetMouseOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingMenuPageOne_C", "GetMouseOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildingMenuPageOne.BP_BuildingMenuPageOne_C.ExecuteUbergraph_BP_BuildingMenuPageOne
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildingMenuPageOne_C::ExecuteUbergraph_BP_BuildingMenuPageOne(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingMenuPageOne_C", "ExecuteUbergraph_BP_BuildingMenuPageOne");

	Params::UBP_BuildingMenuPageOne_C_ExecuteUbergraph_BP_BuildingMenuPageOne_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


