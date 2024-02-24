#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x488 - 0x3C8)
// WidgetBlueprintGeneratedClass WB_Request_Timer.WB_Request_Timer_C
class UWB_Request_Timer_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TimerPush;                                         // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Fade;                                              // 0x3D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      BodyText;                                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Buttons;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeadText;                                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_170;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Content;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Raster;                                            // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Timer_Text;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           ContentWidgetObject;                               // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConfirmOnly;                                     // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_46EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_RequestOptions>             InputOptions;                                      // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Head;                                         // 0x438(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Text_Body;                                         // 0x450(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        TimerTime;                                         // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          InTimer;                                           // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUserReactionTimer;                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWB_Request_Timer_C* GetDefaultObj();

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
	void Time();
	void OnUserReactionTimer_Event(bool Confirmed);
	void ExecuteUbergraph_WB_Request_Timer(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWB_Quick_Button_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int64 CallFunc_Conv_IntToInt64_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_RequestOptions& CallFunc_Array_Get_Item, class FText CallFunc_FindText_ReturnValue, bool CallFunc_ValidateDataTableRow_ReturnValue, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UCommonButtonBase* K2Node_CustomEvent_Button, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_ValidateDataTableRow_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Confirmed, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UHorizontalBoxSlot* CallFunc_AddToHorizontalBox_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EUMGSequencePlayMode K2Node_Select_Default_2, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FS_RequestOptions& K2Node_MakeStruct_S_RequestOptions_1, bool Temp_bool_IsClosed_Variable_1, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array_1, TArray<struct FS_RequestOptions>& K2Node_MakeArray_Array_2, TArray<struct FS_RequestOptions>& K2Node_Select_Default_3, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast);
	void OnUserReactionTimer__DelegateSignature(bool Confirmed);
};

}


