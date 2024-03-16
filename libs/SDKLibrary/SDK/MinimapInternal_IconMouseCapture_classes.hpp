#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0x324 - 0x278)
// WidgetBlueprintGeneratedClass MinimapInternal_IconMouseCapture.MinimapInternal_IconMouseCapture_C
class UMinimapInternal_IconMouseCapture_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnMouseClick;                                      // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         MouseDownStarted;                                  // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDragStarted;                                  // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3990[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MouseDownPos;                                      // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MouseDownTime;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MouseMoveThreshold;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             MapGeo;                                            // 0x2B8(0x40)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            OnBoxSelect;                                       // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCanvasPanelSlot*                      ParentCanvasSlot;                                  // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown_IsLeft;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown_IsShift;                                 // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown_IsCtrl;                                  // 0x312(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableBoxSelect;                                  // 0x313(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BoxSelectColor;                                    // 0x314(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimapInternal_IconMouseCapture_C* GetDefaultObj();

	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FGeometry& InGeo, const struct FPointerEvent& InEvent, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FPointerEvent& InEvent, double CallFunc_GetRealTimeSeconds_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FPointerEvent& InEvent, const struct FEventReply& OutHandled, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, double CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Start_Drag(const struct FGeometry& MapGeo, const struct FVector2D& StartPos, const struct FVector2D& StartOffset, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void OnBoxSelect_Event_0(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void ExecuteUbergraph_MinimapInternal_IconMouseCapture(int32 EntryPoint, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FGeometry& K2Node_CustomEvent_MapGeo, const struct FVector2D& K2Node_CustomEvent_StartPos, const struct FVector2D& K2Node_CustomEvent_StartOffset, bool K2Node_CustomEvent_IsLeftMouseButton_1, bool K2Node_CustomEvent_IsShiftSelect_1, bool K2Node_CustomEvent_IsCtrlSelect_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMinimapInternal_BoxSelect_C* CallFunc_Create_ReturnValue, const struct FVector2D& K2Node_CustomEvent_StartUV, const struct FVector2D& K2Node_CustomEvent_EndUV, bool K2Node_CustomEvent_IsLeftMouseButton, bool K2Node_CustomEvent_IsShiftSelect, bool K2Node_CustomEvent_IsCtrlSelect);
	void OnBoxSelect__DelegateSignature(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void OnMouseClick__DelegateSignature(bool IsLeftMouseButton);
};

}


