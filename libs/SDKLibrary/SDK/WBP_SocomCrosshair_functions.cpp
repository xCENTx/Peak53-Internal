#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SocomCrosshair.WBP_SocomCrosshair_C
// (None)

class UClass* UWBP_SocomCrosshair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SocomCrosshair_C");

	return Clss;
}


// WBP_SocomCrosshair_C WBP_SocomCrosshair.Default__WBP_SocomCrosshair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SocomCrosshair_C* UWBP_SocomCrosshair_C::GetDefaultObj()
{
	static class UWBP_SocomCrosshair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SocomCrosshair_C*>(UWBP_SocomCrosshair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.SetSpread
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentSpread                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::SetSpread(double CurrentSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "SetSpread");

	Params::UWBP_SocomCrosshair_C_SetSpread_Params Parms{};

	Parms.CurrentSpread = CurrentSpread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.PaintCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairType         CrosshairColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::PaintCrosshair(enum class E_CrosshairType CrosshairColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "PaintCrosshair");

	Params::UWBP_SocomCrosshair_C_PaintCrosshair_Params Parms{};

	Parms.CrosshairColor = CrosshairColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.HitMarkerSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SocomCrosshair_C::HitMarkerSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "HitMarkerSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.HitIndicatorSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SocomCrosshair_C::HitIndicatorSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "HitIndicatorSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SocomCrosshair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.SetCrosshairType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SocomCrosshair_C::SetCrosshairType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "SetCrosshairType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.SetSpreadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::SetSpreadTexture(class UImage* Target, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "SetSpreadTexture");

	Params::UWBP_SocomCrosshair_C_SetSpreadTexture_Params Parms{};

	Parms.Target = Target;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.SetAllSpreadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TOP                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Bottom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::SetAllSpreadTexture(class UTexture2D* TOP, class UTexture2D* Bottom, class UTexture2D* Right, class UTexture2D* Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "SetAllSpreadTexture");

	Params::UWBP_SocomCrosshair_C_SetAllSpreadTexture_Params Parms{};

	Parms.TOP = TOP;
	Parms.Bottom = Bottom;
	Parms.Right = Right;
	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "PreConstruct");

	Params::UWBP_SocomCrosshair_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.SetArrowSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             In_Size_X                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             In_Size_Y                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::SetArrowSize(double In_Size_X, double In_Size_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "SetArrowSize");

	Params::UWBP_SocomCrosshair_C_SetArrowSize_Params Parms{};

	Parms.In_Size_X = In_Size_X;
	Parms.In_Size_Y = In_Size_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SocomCrosshair.WBP_SocomCrosshair_C.ExecuteUbergraph_WBP_SocomCrosshair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CurrentSpread                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairType         K2Node_CustomEvent_CrosshairColor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitMarker_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_5                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    CallFunc_GetAnchors_ReturnValue                                  (NoDestructor)
// class UHitIndicatorWidget_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetAlignment_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Texture                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Top                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Bottom                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Right                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Left                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_6                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_7                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairType         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_8                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_9                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_10                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_11                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_12                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_In_Size_X                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_In_Size_Y                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_13                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_14                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_14                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_15                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_15                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_16                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_16                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_17                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_18                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_17                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_19                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SocomCrosshair_C::ExecuteUbergraph_WBP_SocomCrosshair(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_CustomEvent_CurrentSpread, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_1, enum class E_CrosshairType K2Node_CustomEvent_CrosshairColor, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, class UHitMarker_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, class UHitIndicatorWidget_C* CallFunc_Create_ReturnValue_1, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UImage* K2Node_CustomEvent_Target, class UTexture2D* K2Node_CustomEvent_Texture, class UTexture2D* K2Node_CustomEvent_Top, class UTexture2D* K2Node_CustomEvent_Bottom, class UTexture2D* K2Node_CustomEvent_Right, class UTexture2D* K2Node_CustomEvent_Left, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_8, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_6, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7, double CallFunc_Subtract_DoubleDouble_ReturnValue_7, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_10, const struct FLinearColor& Temp_struct_Variable, double CallFunc_Add_DoubleDouble_ReturnValue_11, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, enum class E_CrosshairType Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_12, double CallFunc_Subtract_DoubleDouble_ReturnValue_8, double CallFunc_Subtract_DoubleDouble_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_13, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, double CallFunc_Subtract_DoubleDouble_ReturnValue_10, double CallFunc_Subtract_DoubleDouble_ReturnValue_11, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_7, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_11, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_12, double K2Node_CustomEvent_In_Size_X, double K2Node_CustomEvent_In_Size_Y, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_13, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_8, double CallFunc_Subtract_DoubleDouble_ReturnValue_12, double CallFunc_Subtract_DoubleDouble_ReturnValue_13, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_14, double CallFunc_Subtract_DoubleDouble_ReturnValue_14, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_14, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_15, double CallFunc_Add_DoubleDouble_ReturnValue_15, double CallFunc_Add_DoubleDouble_ReturnValue_16, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_15, double CallFunc_Subtract_DoubleDouble_ReturnValue_16, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_10, double CallFunc_Subtract_DoubleDouble_ReturnValue_17, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_16, double CallFunc_Subtract_DoubleDouble_ReturnValue_18, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_11, double CallFunc_Add_DoubleDouble_ReturnValue_17, double CallFunc_Add_DoubleDouble_ReturnValue_18, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_17, double CallFunc_Add_DoubleDouble_ReturnValue_19, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_19, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SocomCrosshair_C", "ExecuteUbergraph_WBP_SocomCrosshair");

	Params::UWBP_SocomCrosshair_C_ExecuteUbergraph_WBP_SocomCrosshair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentSpread = K2Node_CustomEvent_CurrentSpread;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = CallFunc_SlotAsCanvasSlot_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = CallFunc_SlotAsCanvasSlot_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_CrosshairColor = K2Node_CustomEvent_CrosshairColor;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3 = CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4 = CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_4 = CallFunc_SlotAsCanvasSlot_ReturnValue_4;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_5 = CallFunc_SlotAsCanvasSlot_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetAnchors_ReturnValue = CallFunc_GetAnchors_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetAlignment_ReturnValue = CallFunc_GetAlignment_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CustomEvent_Top = K2Node_CustomEvent_Top;
	Parms.K2Node_CustomEvent_Bottom = K2Node_CustomEvent_Bottom;
	Parms.K2Node_CustomEvent_Right = K2Node_CustomEvent_Right;
	Parms.K2Node_CustomEvent_Left = K2Node_CustomEvent_Left;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_7 = CallFunc_Add_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_6 = CallFunc_SlotAsCanvasSlot_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_8 = CallFunc_Add_DoubleDouble_ReturnValue_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_5 = CallFunc_Subtract_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_6 = CallFunc_Subtract_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_7 = CallFunc_SlotAsCanvasSlot_ReturnValue_7;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_7 = CallFunc_Subtract_DoubleDouble_ReturnValue_7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_9 = CallFunc_Add_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_10 = CallFunc_Add_DoubleDouble_ReturnValue_10;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_11 = CallFunc_Add_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_MakeVector2D_ReturnValue_5 = CallFunc_MakeVector2D_ReturnValue_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_8 = CallFunc_SlotAsCanvasSlot_ReturnValue_8;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_9 = CallFunc_SlotAsCanvasSlot_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_12 = CallFunc_Add_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_8 = CallFunc_Subtract_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_9 = CallFunc_Subtract_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_13 = CallFunc_Add_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_MakeVector2D_ReturnValue_6 = CallFunc_MakeVector2D_ReturnValue_6;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_10 = CallFunc_Subtract_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_11 = CallFunc_Subtract_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_MakeVector2D_ReturnValue_7 = CallFunc_MakeVector2D_ReturnValue_7;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_10 = CallFunc_SlotAsCanvasSlot_ReturnValue_10;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_11 = CallFunc_SlotAsCanvasSlot_ReturnValue_11;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_12 = CallFunc_SlotAsCanvasSlot_ReturnValue_12;
	Parms.K2Node_CustomEvent_In_Size_X = K2Node_CustomEvent_In_Size_X;
	Parms.K2Node_CustomEvent_In_Size_Y = K2Node_CustomEvent_In_Size_Y;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_13 = CallFunc_SlotAsCanvasSlot_ReturnValue_13;
	Parms.CallFunc_MakeVector2D_ReturnValue_8 = CallFunc_MakeVector2D_ReturnValue_8;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_12 = CallFunc_Subtract_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_13 = CallFunc_Subtract_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_14 = CallFunc_SlotAsCanvasSlot_ReturnValue_14;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_14 = CallFunc_Subtract_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_MakeVector2D_ReturnValue_9 = CallFunc_MakeVector2D_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_14 = CallFunc_Add_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_15 = CallFunc_SlotAsCanvasSlot_ReturnValue_15;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_15 = CallFunc_Add_DoubleDouble_ReturnValue_15;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_16 = CallFunc_Add_DoubleDouble_ReturnValue_16;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_15 = CallFunc_Subtract_DoubleDouble_ReturnValue_15;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_16 = CallFunc_Subtract_DoubleDouble_ReturnValue_16;
	Parms.CallFunc_MakeVector2D_ReturnValue_10 = CallFunc_MakeVector2D_ReturnValue_10;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_17 = CallFunc_Subtract_DoubleDouble_ReturnValue_17;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_16 = CallFunc_SlotAsCanvasSlot_ReturnValue_16;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_18 = CallFunc_Subtract_DoubleDouble_ReturnValue_18;
	Parms.CallFunc_MakeVector2D_ReturnValue_11 = CallFunc_MakeVector2D_ReturnValue_11;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_17 = CallFunc_Add_DoubleDouble_ReturnValue_17;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_18 = CallFunc_Add_DoubleDouble_ReturnValue_18;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_17 = CallFunc_SlotAsCanvasSlot_ReturnValue_17;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_19 = CallFunc_Add_DoubleDouble_ReturnValue_19;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_19 = CallFunc_Subtract_DoubleDouble_ReturnValue_19;
	Parms.CallFunc_MakeVector2D_ReturnValue_12 = CallFunc_MakeVector2D_ReturnValue_12;

	UObject::ProcessEvent(Func, &Parms);

}

}


