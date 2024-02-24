#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC68 (0x2158 - 0x14F0)
// WidgetBlueprintGeneratedClass WB_Promo_Button.WB_Promo_Button_C
class UWB_Promo_Button_C : public UWB_Base_Button_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnClicked;                                         // 0x14F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHovered;                                         // 0x1500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              AnimContainer_Clicked;                             // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              AnimContainer_Clicked2;                            // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         B_ClickedAnim;                                     // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Background;                                        // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Background_ScaleBox;                               // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      ClickedAnim_ColorBlend_U;                          // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      ClickedAnim_FX1;                                   // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      ClickedAnim_FX2;                                   // 0x1540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Content;                                           // 0x1548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Content_Scalebox;                                  // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      DisabledImg;                                       // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Frame_C*                           Frame;                                             // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      HoveredShine;                                      // 0x1568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x1570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Disabled;                                       // 0x1578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Shine;                                             // 0x1580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Body;                                         // 0x1588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Head;                                         // 0x1590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_SubHead;                                      // 0x1598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText_Head;                                       // 0x15A0(0x18)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 TextInfo_Head;                                     // 0x15B8(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FText                                  InText_SubHead;                                    // 0x16A8(0x18)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 TextInfo_SubHead;                                  // 0x16C0(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FText                                  InText_Body;                                       // 0x17B0(0x18)(Edit, BlueprintVisible)
	struct FS_ButtonTextInfo_PMM                 TextInfo_Body;                                     // 0x17C8(0xF0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4634[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Content_Image;                                     // 0x18C0(0xD0)(Edit, BlueprintVisible)
	struct FS_ScaleBoxInfo_PMM                   Content_Image_ScaleBoxInfo;                        // 0x1990(0x11)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetTransform                      Content_Image_Transform;                           // 0x19A8(0x38)(Edit, BlueprintVisible, NoDestructor)
	struct FS_ButtonImageInfo                    Content_Image_States;                              // 0x19E0(0x120)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           Background_Image;                                  // 0x1B00(0xD0)(Edit, BlueprintVisible)
	struct FS_ScaleBoxInfo_PMM                   Background_Image_ScaleBoxInfo;                     // 0x1BD0(0x11)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetTransform                      Background_Image_Transform;                        // 0x1BE8(0x38)(Edit, BlueprintVisible, NoDestructor)
	struct FS_ButtonImageInfo                    Background_Image_States;                           // 0x1C20(0x120)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSize;                                        // 0x1D40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ButtonFrameLayer                   ButtonFrame;                                       // 0x1D50(0x390)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       Clicked_InterpValue;                               // 0x20E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseClickedAnim;                                    // 0x20E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4637[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClickedAnim_Color;                                 // 0x20EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClickedAnim_UseGlobalColor;                        // 0x20FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGlobalColors                     ClickedAnim_GlobalColorType;                       // 0x20FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4638[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DisabledIcon_Size;                                 // 0x2100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              DisabledIcon;                                      // 0x2108(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DisabledIcon_Color;                                // 0x2110(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      DisabledIcon_Transform;                            // 0x2120(0x38)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UWB_Promo_Button_C* GetDefaultObj();

	float GetAnimContainerValue_Clicked(float CallFunc_GetRenderOpacity_ReturnValue);
	void SetFrameButtonState(enum class ECommonButtonState State, enum class ECommonButtonState Temp_byte_Variable, const struct FS_FrameLayer& K2Node_Select_Default);
	void SetImageBrushInfo(struct FSlateBrush& SlateBrush, class UCommonLazyImage* InputPin, const struct FSlateBrush& CallFunc_FindSlateBrushInfo_ReturnValue);
	void SetBackgroundImage_ButtonState(struct FS_ImageInfo_PMM& Info, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_ContentMaterial_SetSaturation_Saturation_ImplicitCast, float CallFunc_ContentMaterial_SetMaskIntensity_MaskIntensity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void SetButtonState(enum class ECommonButtonState InState);
	void SetContentImage_ButtonState(struct FS_ImageInfo_PMM& Info, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_ContentMaterial_SetSaturation_Saturation_ImplicitCast, float CallFunc_ContentMaterial_SetMaskIntensity_MaskIntensity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void SetImageButtonState(enum class ECommonButtonState InState, enum class ECommonButtonState Temp_byte_Variable, enum class ECommonButtonState Temp_byte_Variable_1, const struct FS_ImageInfo_PMM& K2Node_Select_Default, const struct FS_ImageInfo_PMM& K2Node_Select_Default_1);
	struct FSlateBrush FindSlateBrushInfo(struct FSlateBrush& SlateBrush, class UImage* Target, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void ContentMaterial_SetSaturation(class UImage* Target, float Saturation, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ContentMaterial_SetMaskIntensity(class UImage* Target, float MaskIntensity, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ContentMaterial_SetMask(class UImage* Image, class UTexture2D* Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ContentMaterial_SetImage(class UImage* Image, class UTexture2D* InBrushImage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetImageBrush(class UImage* Image, struct FSlateBrush& InBrush, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetScaleBoxInfo(class UScaleBox* ScaleBox, const struct FS_ScaleBoxInfo_PMM& Info, float CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast);
	void FindTextInfoByButtonState(enum class ECommonButtonState State, struct FS_ButtonTextInfo_PMM& In, struct FS_TextInfo_PMM* Out, enum class ECommonButtonState Temp_byte_Variable, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_1, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_2, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_3, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_4, const struct FS_TextInfo_PMM& CallFunc_TextInfo_HandleColorOverride_Out_5, const struct FS_TextInfo_PMM& K2Node_Select_Default);
	void SetTextButtonState(enum class ECommonButtonState InState, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_Out, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_Out_1, const struct FS_TextInfo_PMM& CallFunc_FindTextInfoByButtonState_Out_2);
	void SetTextInfo(class UCommonTextBlock* InText, struct FS_TextInfo_PMM& S_TextInfo_PMM, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_HasColorChanged_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetOpacity_InOpacity_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void BP_OnHovered();
	void BP_OnEnabled();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnClicked();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Promo_Button(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_3, float Temp_real_Variable_2, float Temp_real_Variable_3, bool CallFunc_GetIsEnabled_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_4, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, bool Temp_bool_Variable_5, bool K2Node_Event_IsDesignTime, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_5, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_6, enum class ECommonButtonState Temp_byte_Variable_6, bool Temp_bool_Variable_7, enum class ECommonButtonState Temp_byte_Variable_7, class FText CallFunc_GetText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsHovered_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, const struct FLinearColor& K2Node_Select_Default_4, bool Temp_bool_Variable_8, bool CallFunc_GetIsEnabled_ReturnValue_1, int32 Temp_int_Variable_1, enum class ECommonButtonState K2Node_Select_Default_5, double CallFunc_GetSize_Width, double CallFunc_GetSize_Height, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_8, float CallFunc_GetRenderOpacity_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_1, int32 Temp_int_Variable_2, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_GetAnimContainerValue_Clicked_ReturnValue, enum class EUMGSequencePlayMode Temp_byte_Variable_9, double CallFunc_Finterpolate_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default_6, bool Temp_bool_Variable_9, int32 K2Node_Select_Default_7, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Select_Default_8, bool CallFunc_IsValid_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, int32 Temp_int_Variable_3, int32 K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_Finterpolate_Target_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
};

}


