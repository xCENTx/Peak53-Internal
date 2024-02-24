#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15C (0x3D4 - 0x278)
// WidgetBlueprintGeneratedClass Minimap.Minimap_C
class UMinimap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_Backgrounds;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_IconsAboveFog;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_IconsBelowFog;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_OpaqueBackground;                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Fogs;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Minimap;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_MapActive;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimapInternal_BackgroundMouseCapture_C* Widget_BackgroundMouseCapture;                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimapInternal_Camera_C*             Widget_Camera;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapViewComponent*                     MapViewComp;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMapTrackerComponent*                  MapTrackerComp;                                    // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             InitialMapGeo;                                     // 0x2D8(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             InitialMapSize;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMapViewSearchOption              AutoLocateMapView;                                 // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsCircular;                                       // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDrawCamera;                                       // 0x32A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3B34[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FloorDistance;                                     // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMapClicked;                                      // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             InitialViewExtent;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMinimapInternal_Icon_C*>       Icons;                                             // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMinimapInternal_Background_C*> Backgrounds;                                       // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMinimapInternal_Fog_C*>        Fogs;                                              // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnViewChanged;                                     // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       IconScale;                                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBoxSelected;                                     // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bEnableBoxSelect;                                  // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3B35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BoxSelectColor;                                    // 0x3C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimap_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ReinitBoxSelect(const TArray<class AMapFog*>& ExistingMapFogs, const TArray<class AMapBackground*>& ExistingMapBackgrounds, const TArray<class UMapIconComponent*>& ExistingMapIcons);
	void ProcessBoxSelect(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect, bool InIsLMB, const struct FVector2D& InUV, bool CallFunc_IsValid_ReturnValue, TArray<class UMapIconComponent*>& CallFunc_BoxSelectInView_ReturnValue);
	void ProcessBackgroundClick(const struct FVector2D& UV, bool IsLeftMouseButton, bool InIsLMB, const struct FVector2D& InUV, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_DeprojectViewToWorld_WorldPos, bool CallFunc_DetectIsInView_ReturnValue, float CallFunc_DeprojectViewToWorld_U_ImplicitCast, float CallFunc_DeprojectViewToWorld_V_ImplicitCast);
	void ReinitShape();
	void SetMapView(class UMapViewComponent* NewMapView, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void InitMap(const struct FGeometry& Geom, const TArray<class AMapFog*>& ExistingMapFogs, const TArray<class AMapBackground*>& ExistingMapBackgrounds, const TArray<class UMapIconComponent*>& ExistingMapIcons, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AMapBackground* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UMapIconComponent* CallFunc_Array_Get_Item_1, class AMapFog* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMapTrackerComponent* CallFunc_GetMapTracker_ReturnValue, TArray<class AMapFog*>& CallFunc_GetMapFogs_ReturnValue, TArray<class AMapBackground*>& CallFunc_GetMapBackgrounds_ReturnValue, TArray<class UMapIconComponent*>& CallFunc_GetMapIcons_ReturnValue);
	void ForgetDestroyedIcons(const TArray<int32>& IconsPendingKill, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UMinimapInternal_Icon_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void BroadcastMapView(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMinimapInternal_Fog_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMinimapInternal_Background_C* CallFunc_Array_Get_Item_1, class UMinimapInternal_Icon_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
	void AddMapFog(class AMapFog* MapFog, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMinimapInternal_Fog_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AutoFindMapView(bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMapViewComponent* CallFunc_FindMapView_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitFillBackground();
	void InitDrawFrustum(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void InitZoom(float CallFunc_GetViewExtent_ViewExtentX, float CallFunc_GetViewExtent_ViewExtentY, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void ChangeZoom(double Delta, float CallFunc_GetZoomScale_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetZoomScale_NewZoomScale_ImplicitCast);
	void AddMapBackground(class AMapBackground* MapBackground, const struct FMargin& K2Node_MakeStruct_Margin, const struct FAnchors& K2Node_MakeStruct_Anchors, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMinimapInternal_Background_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitShape();
	void EnforceAspectRatio(const struct FVector2D& NewMapSize, const struct FVector2D& MapScale, const struct FVector2D& CandidateMapSize, double ViewAspectRatio, double MapAspectRatio, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_GetViewAspectRatio_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast);
	void AddMapIcon(class UMapIconComponent* MapIconComp, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMinimapInternal_Icon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetupListeners();
	void CleanupListeners();
	void OnMapIconRegistered(class UMapIconComponent* MapIcon);
	void OnMapBackgroundUnregistered_Event_0(class AMapBackground* MapBackground);
	void OnMapFogRegistered_Event_0(class AMapFog* MapFog);
	void SetupViewListener();
	void OnViewDestroyed_Event_0(class UMapViewComponent* MapView);
	void OnMapIconWidgetCreated(class UMinimapInternal_Icon_C* MapIconWidget);
	void CustomEvent_1(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RetryAutoFind();
	void RetryMapSize();
	void Construct();
	void OnMouseClick_Event_0(const struct FVector2D& UV, bool IsLeftMouseButton);
	void CustomEvent_0(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void ExecuteUbergraph_Minimap(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UMapIconComponent* K2Node_CustomEvent_MapIcon, bool CallFunc_IsValid_ReturnValue, class AMapBackground* K2Node_CustomEvent_MapBackground, bool CallFunc_IsValid_ReturnValue_1, class AMapFog* K2Node_CustomEvent_MapFog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UMapViewComponent* K2Node_CustomEvent_MapView, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMinimapInternal_Icon_C* K2Node_CustomEvent_MapIconWidget, const struct FVector2D& K2Node_CustomEvent_StartUV_1, const struct FVector2D& K2Node_CustomEvent_EndUV_1, bool K2Node_CustomEvent_IsLeftMouseButton_2, bool K2Node_CustomEvent_IsShiftSelect_1, bool K2Node_CustomEvent_IsCtrlSelect_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& K2Node_CustomEvent_UV, bool K2Node_CustomEvent_IsLeftMouseButton_1, const struct FVector2D& K2Node_CustomEvent_StartUV, const struct FVector2D& K2Node_CustomEvent_EndUV, bool K2Node_CustomEvent_IsLeftMouseButton, bool K2Node_CustomEvent_IsShiftSelect, bool K2Node_CustomEvent_IsCtrlSelect);
	void OnBoxSelected__DelegateSignature(TArray<class UMapIconComponent*>& MapIcons, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect);
	void OnViewChanged__DelegateSignature(class UMapViewComponent* MapViewComp);
	void OnMapClicked__DelegateSignature(const struct FVector& WorldLocation, bool IsLeftMouseButton);
};

}


