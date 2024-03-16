#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimapInternal_Fog.MinimapInternal_Fog_C
// (None)

class UClass* UMinimapInternal_Fog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapInternal_Fog_C");

	return Clss;
}


// MinimapInternal_Fog_C MinimapInternal_Fog.Default__MinimapInternal_Fog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapInternal_Fog_C* UMinimapInternal_Fog_C::GetDefaultObj()
{
	static class UMinimapInternal_Fog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapInternal_Fog_C*>(UMinimapInternal_Fog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.TickFog
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   V1                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   V2                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           ViewCornersUV                                                    (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_GetDestinationFogRenderTarget_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector2D>           CallFunc_GetMapViewCornerUVs_CornerUVs                           (ReferenceParm)
// bool                               CallFunc_GetMapViewCornerUVs_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::TickFog(const struct FVector2D& V1, const struct FVector2D& V2, const TArray<struct FVector2D>& ViewCornersUV, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_GetDestinationFogRenderTarget_ReturnValue, TArray<struct FVector2D>& CallFunc_GetMapViewCornerUVs_CornerUVs, bool CallFunc_GetMapViewCornerUVs_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Array_Get_Item, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Array_Get_Item_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Array_Get_Item_3, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "TickFog");

	Params::UMinimapInternal_Fog_C_TickFog_Params Parms{};

	Parms.V1 = V1;
	Parms.V2 = V2;
	Parms.ViewCornersUV = ViewCornersUV;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDestinationFogRenderTarget_ReturnValue = CallFunc_GetDestinationFogRenderTarget_ReturnValue;
	Parms.CallFunc_GetMapViewCornerUVs_CornerUVs = CallFunc_GetMapViewCornerUVs_CornerUVs;
	Parms.CallFunc_GetMapViewCornerUVs_ReturnValue = CallFunc_GetMapViewCornerUVs_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast_1 = K2Node_MakeStruct_R_ImplicitCast_1;
	Parms.K2Node_MakeStruct_G_ImplicitCast_1 = K2Node_MakeStruct_G_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.UpdateMaterial
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ObscuredTexture                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    BackgroundTexture                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetFogMaterialForUMG_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::UpdateMaterial(class UTexture2D* ObscuredTexture, class UTexture* BackgroundTexture, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetFogMaterialForUMG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "UpdateMaterial");

	Params::UMinimapInternal_Fog_C_UpdateMaterial_Params Parms{};

	Parms.ObscuredTexture = ObscuredTexture;
	Parms.BackgroundTexture = BackgroundTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFogMaterialForUMG_ReturnValue = CallFunc_GetFogMaterialForUMG_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "Tick");

	Params::UMinimapInternal_Fog_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Fog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Fog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "OnEndPlay");

	Params::UMinimapInternal_Fog_C_OnEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.OnMapFogMaterialChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMapFog*                     MapFog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::OnMapFogMaterialChanged_Event_0(class AMapFog* MapFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "OnMapFogMaterialChanged_Event_0");

	Params::UMinimapInternal_Fog_C_OnMapFogMaterialChanged_Event_0_Params Parms{};

	Parms.MapFog = MapFog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Fog.MinimapInternal_Fog_C.ExecuteUbergraph_MinimapInternal_Fog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_CustomEvent_EndPlayReason                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMapFog*                     K2Node_CustomEvent_MapFog                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Fog_C::ExecuteUbergraph_MinimapInternal_Fog(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AMapFog* K2Node_CustomEvent_MapFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Fog_C", "ExecuteUbergraph_MinimapInternal_Fog");

	Params::UMinimapInternal_Fog_C_ExecuteUbergraph_MinimapInternal_Fog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_EndPlayReason = K2Node_CustomEvent_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_MapFog = K2Node_CustomEvent_MapFog;

	UObject::ProcessEvent(Func, &Parms);

}

}


