#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// WidgetBlueprintGeneratedClass BP_NotificationPanel.BP_NotificationPanel_C
class UBP_NotificationPanel_C : public UUserWidget
{
public:
	class UVerticalBox*                          VerticalGrid;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_NotificationPanel_C* GetDefaultObj();

	void CreateNotification(const struct FS_NotificationDetails& NotificationDetails, bool EnableSounds, class UBP_Notification_C* NewWidgetL, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UBP_Notification_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
};

}


