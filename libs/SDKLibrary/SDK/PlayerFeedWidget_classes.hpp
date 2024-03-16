#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass PlayerFeedWidget.PlayerFeedWidget_C
class UPlayerFeedWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_53;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MessageCarrier;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerFeedWidget_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SendPlayerFeedMessage(class FText MessageFeedVar, enum class ETextJustify Justification, const struct FSlateColor& In_Color_and_Opacity, int32 In_Font_Info_Size);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_PlayerFeedWidget(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UPlayerFeedMessageWidget_C* CallFunc_Create_ReturnValue, class APeak53GameState_C* K2Node_DynamicCast_AsPeak_53Game_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_MessageFeedVar, enum class ETextJustify K2Node_CustomEvent_Justification, const struct FSlateColor& K2Node_CustomEvent_In_Color_and_Opacity, int32 K2Node_CustomEvent_In_Font_Info_Size, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
};

}


