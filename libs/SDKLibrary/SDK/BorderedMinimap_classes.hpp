#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x30C - 0x278)
// WidgetBlueprintGeneratedClass BorderedMinimap.BorderedMinimap_C
class UBorderedMinimap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_ZoomInC;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ZoomInR;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ZoomOutC;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ZoomOutR;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_310;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CircleBorder;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_RectBorder;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimap_C*                            Minimap;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_Border;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMapViewSearchOption              AutoLocateMapView;                                 // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsCircular;                                       // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDrawCamera;                                       // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C11[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FloorDistance;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       IconScale;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       NorthYaw;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bEnableBoxSelect;                                  // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BoxSelectColor;                                    // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBorderedMinimap_C* GetDefaultObj();

	void InitButtons(bool bShowButtons, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void InitBorder(int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void TickBorder(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetViewYaw_Yaw, float CallFunc_GetViewYaw_WorldYaw_ImplicitCast);
	void CopyOptionsToMapWidget();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_186_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_205_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_233_OnButtonReleasedEvent__DelegateSignature();
	void TickZoom(double DeltaSeconds);
	void OnViewChanged_Event_0(class UMapViewComponent* MapViewComp);
	void BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_327_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_345_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_364_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_384_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BorderedMinimap(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_DeltaSeconds, bool Temp_bool_IsClosed_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, class UMapViewComponent* K2Node_CustomEvent_MapViewComp, double CallFunc_TickZoom_DeltaSeconds_ImplicitCast);
};

}


