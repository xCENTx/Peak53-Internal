#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x358 - 0x278)
// WidgetBlueprintGeneratedClass BP_MasterSegment.BP_MasterSegment_C
class UBP_MasterSegment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Backround;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DisabledBackround;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SegmentType                     SegmentType;                                       // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   BuildPart;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         UseCustomIcon;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           UnselectedTint;                                    // 0x2B4(0x14)(Edit, BlueprintVisible)
	struct FMargin                               IconOffset;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             IconSize;                                          // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SelectedTint;                                      // 0x2E8(0x14)(Edit, BlueprintVisible)
	uint8                                        Pad_4FD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CustomIcon;                                        // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Hover_Sound;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Selected_Backround;                                // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Unselected_Backround;                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Icon_Rotation;                                     // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  SegmentName;                                       // 0x328(0x18)(Edit, BlueprintVisible)
	class FText                                  SegmentDescription;                                // 0x340(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_MasterSegment_C* GetDefaultObj();

	void IconSetup(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails, class UObject* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void EnableSegment(bool Enabled);
	void PreConstruct(bool IsDesignTime);
	void SegmentSelected(bool Selected);
	void ExecuteUbergraph_BP_MasterSegment(int32 EntryPoint, bool K2Node_CustomEvent_Selected, bool Temp_bool_IsClosed_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime);
};

}


