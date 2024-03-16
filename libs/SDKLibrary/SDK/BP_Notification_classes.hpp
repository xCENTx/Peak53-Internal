#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2E8 - 0x278)
// WidgetBlueprintGeneratedClass BP_Notification.BP_Notification_C
class UBP_Notification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut;                                           // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_NotificationDetails                NotificationDetails;                               // 0x298(0x38)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       NotificationTime;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextSize;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FadeOutSpeed;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Notification_C* GetDefaultObj();

	void SetupNotification(const struct FSlateFontInfo& FontL, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void ExecuteUbergraph_BP_Notification(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1);
};

}


