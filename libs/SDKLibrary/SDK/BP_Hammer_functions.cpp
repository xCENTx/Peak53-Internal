#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hammer.BP_Hammer_C
// (Actor)

class UClass* ABP_Hammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hammer_C");

	return Clss;
}


// BP_Hammer_C BP_Hammer.Default__BP_Hammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Hammer_C* ABP_Hammer_C::GetDefaultObj()
{
	static class ABP_Hammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Hammer_C*>(ABP_Hammer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Hammer.BP_Hammer_C.ToggleBuildMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerBuildingComponent_C*PlayerBuildingComponentL                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerBuildingComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::ToggleBuildMenu(bool Open, class UBP_PlayerBuildingComponent_C* PlayerBuildingComponentL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UBP_PlayerBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ToggleBuildMenu");

	Params::ABP_Hammer_C_ToggleBuildMenu_Params Parms{};

	Parms.Open = Open;
	Parms.PlayerBuildingComponentL = PlayerBuildingComponentL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_SGK_HoldableMesh_Mesh                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK HoldableMesh");

	Params::ABP_Hammer_C_SGK_HoldableMesh_Params Parms{};

	Parms.CallFunc_SGK_HoldableMesh_Mesh = CallFunc_SGK_HoldableMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_Hammer.BP_Hammer_C.SGK ClientPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::SGK_ClientPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK ClientPrimaryAction");

	Params::ABP_Hammer_C_SGK_ClientPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.SGK ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hammer_C::SGK_ResetHoldable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK ResetHoldable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hammer.BP_Hammer_C.SGK ClientSecondaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::SGK_ClientSecondaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK ClientSecondaryAction");

	Params::ABP_Hammer_C_SGK_ClientSecondaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.ClientAddOverlayWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hammer_C::ClientAddOverlayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ClientAddOverlayWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hammer.BP_Hammer_C.ClientRemoveOverlayWidget
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hammer_C::ClientRemoveOverlayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ClientRemoveOverlayWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hammer.BP_Hammer_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Hammer_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Hammer.BP_Hammer_C.SGK NewHeld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::SGK_NewHeld(bool Held)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK NewHeld");

	Params::ABP_Hammer_C_SGK_NewHeld_Params Parms{};

	Parms.Held = Held;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.SGK ServerPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "SGK ServerPrimaryAction");

	Params::ABP_Hammer_C_SGK_ServerPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.ServerBlockSwing
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::ServerBlockSwing(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ServerBlockSwing");

	Params::ABP_Hammer_C_ServerBlockSwing_Params Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hammer.BP_Hammer_C.ExecuteUbergraph_BP_Hammer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HammerOverlay_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BuildingMode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BuildingMode          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BuildingMode          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Held                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Block                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hammer_C::ExecuteUbergraph_BP_Hammer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UBP_HammerOverlay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, enum class E_BuildingMode Temp_byte_Variable, enum class E_BuildingMode Temp_byte_Variable_1, bool K2Node_Event_KeyDown_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Event_KeyDown_1, enum class E_BuildingMode K2Node_Select_Default, bool K2Node_Event_Held, bool K2Node_Event_KeyDown, bool K2Node_CustomEvent_Block)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hammer_C", "ExecuteUbergraph_BP_Hammer");

	Params::ABP_Hammer_C_ExecuteUbergraph_BP_Hammer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_KeyDown_2 = K2Node_Event_KeyDown_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_KeyDown_1 = K2Node_Event_KeyDown_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_Held = K2Node_Event_Held;
	Parms.K2Node_Event_KeyDown = K2Node_Event_KeyDown;
	Parms.K2Node_CustomEvent_Block = K2Node_CustomEvent_Block;

	UObject::ProcessEvent(Func, &Parms);

}

}


