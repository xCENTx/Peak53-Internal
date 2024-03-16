#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x460 - 0x3C8)
// WidgetBlueprintGeneratedClass WB_Request.WB_Request_C
class UWB_Request_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      BodyText;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Buttons;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeadText;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Content;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Raster;                                            // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           ContentWidgetObject;                               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConfirmOnly;                                     // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_RequestOptions>             InputOptions;                                      // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Head;                                         // 0x420(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Text_Body;                                         // 0x438(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnUserReaction;                                    // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Request_C* GetDefaultObj();

	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	bool BP_OnHandleBackAction();
	class FText FindText(class FText TextOverride, struct FDataTableRowHandle& DataTableRowHandle, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, const struct FCommonInputActionDataBase& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText K2Node_Select_Default);
	void Anim_Fade(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Deactivate();
	void SetData();
	void PreConstruct(bool IsDesignTime);
	void OnButtonClicked(class UCommonButtonBase* Button);
	void OnUserReaction_Event(bool Confirmed);
	void ExecuteUbergraph_WB_Request(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_RequestOptions& CallFunc_Array_Get_Item, class FText CallFunc_FindText_ReturnValue, bool CallFunc_ValidateDataTableRow_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_ValidateDataTableRow_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Select_Default, bool K2Node_CustomEvent_Confirmed, double CallFunc_MakeLiteralDouble_ReturnValue, bool Temp_bool_Variable_2, const struct FMargin& K2Node_MakeStruct_Margin, class UWB_Quick_Button_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddToHorizontalBox_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool Temp_bool_IsClosed_Variable_1, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions_1, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array_1, TArray<struct FS_RequestOptions>& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast);
	void OnUserReaction__DelegateSignature(bool Confirmed);
};

}


