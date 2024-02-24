#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2BC - 0x278)
// WidgetBlueprintGeneratedClass PlayerFeedMessageWidget.PlayerFeedMessageWidget_C
class UPlayerFeedMessageWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            MessageFeed;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Message;                                           // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         NewVar;                                            // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           In_Color_and_Opacity;                              // 0x2A4(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        In_Font_Info_Size;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerFeedMessageWidget_C* GetDefaultObj();

	void RemoveActorEventSeq(class UTextBlock* MessageFeed);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RemoveActor();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PlayerFeedMessageWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UTextBlock* K2Node_CustomEvent_MessageFeed, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
};

}


