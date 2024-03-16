#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_NotificationPanel.BP_NotificationPanel_C
// (None)

class UClass* UBP_NotificationPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NotificationPanel_C");

	return Clss;
}


// BP_NotificationPanel_C BP_NotificationPanel.Default__BP_NotificationPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NotificationPanel_C* UBP_NotificationPanel_C::GetDefaultObj()
{
	static class UBP_NotificationPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NotificationPanel_C*>(UBP_NotificationPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NotificationPanel.BP_NotificationPanel_C.CreateNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_NotificationDetails      NotificationDetails                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               EnableSounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Notification_C*          NewWidgetL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_Notification_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_NotificationPanel_C::CreateNotification(const struct FS_NotificationDetails& NotificationDetails, bool EnableSounds, class UBP_Notification_C* NewWidgetL, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UBP_Notification_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationPanel_C", "CreateNotification");

	Params::UBP_NotificationPanel_C_CreateNotification_Params Parms{};

	Parms.NotificationDetails = NotificationDetails;
	Parms.EnableSounds = EnableSounds;
	Parms.NewWidgetL = NewWidgetL;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}


