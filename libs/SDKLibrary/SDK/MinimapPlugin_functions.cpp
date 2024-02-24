#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MinimapPlugin.MapAreaPrimitiveComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMapAreaPrimitiveComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapAreaPrimitiveComponent");

	return Clss;
}


// MapAreaPrimitiveComponent MinimapPlugin.Default__MapAreaPrimitiveComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapAreaPrimitiveComponent* UMapAreaPrimitiveComponent::GetDefaultObj()
{
	static class UMapAreaPrimitiveComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapAreaPrimitiveComponent*>(UMapAreaPrimitiveComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MinimapPlugin.MapAreaBase
// (Actor)

class UClass* AMapAreaBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapAreaBase");

	return Clss;
}


// MapAreaBase MinimapPlugin.Default__MapAreaBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AMapAreaBase* AMapAreaBase::GetDefaultObj()
{
	static class AMapAreaBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapAreaBase*>(AMapAreaBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMapViewComponent*           MapView                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           CornerUVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMapAreaBase::GetMapViewCornerUVs(class UMapViewComponent* MapView, TArray<struct FVector2D>* CornerUVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapAreaBase", "GetMapViewCornerUVs");

	Params::AMapAreaBase_GetMapViewCornerUVs_Params Parms{};

	Parms.MapView = MapView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CornerUVs != nullptr)
		*CornerUVs = std::move(Parms.CornerUVs);

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapAreaBase.GetMapView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMapViewComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMapViewComponent* AMapAreaBase::GetMapView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapAreaBase", "GetMapView");

	Params::AMapAreaBase_GetMapView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapAreaBase.GetMapAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AMapAreaBase::GetMapAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapAreaBase", "GetMapAspectRatio");

	Params::AMapAreaBase_GetMapAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapAreaBase.GetLevelAtHeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              WorldZ                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AMapAreaBase::GetLevelAtHeight(float WorldZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapAreaBase", "GetLevelAtHeight");

	Params::AMapAreaBase_GetLevelAtHeight_Params Parms{};

	Parms.WorldZ = WorldZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapAreaBase.GetAreaBounds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* AMapAreaBase::GetAreaBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapAreaBase", "GetAreaBounds");

	Params::AMapAreaBase_GetAreaBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapBackground
// (Actor)

class UClass* AMapBackground::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapBackground");

	return Clss;
}


// MapBackground MinimapPlugin.Default__MapBackground
// (Public, ClassDefaultObject, ArchetypeObject)

class AMapBackground* AMapBackground::GetDefaultObj()
{
	static class AMapBackground* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapBackground*>(AMapBackground::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapBackground.SetBackgroundZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewBackgroundZOrder                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundZOrder(int32 NewBackgroundZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundZOrder");

	Params::AMapBackground_SetBackgroundZOrder_Params Parms{};

	Parms.NewBackgroundZOrder = NewBackgroundZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewVisible                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundVisible(bool bNewVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundVisible");

	Params::AMapBackground_SetBackgroundVisible_Params Parms{};

	Parms.bNewVisible = bNewVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Level                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  NewBackgroundTexture                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundTexture(int32 Level, class UTexture2D* NewBackgroundTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundTexture");

	Params::AMapBackground_SetBackgroundTexture_Params Parms{};

	Parms.Level = Level;
	Parms.NewBackgroundTexture = NewBackgroundTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewBackgroundPriority                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundPriority(int32 NewBackgroundPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundPriority");

	Params::AMapBackground_SetBackgroundPriority_Params Parms{};

	Parms.NewBackgroundPriority = NewBackgroundPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Level                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      NewBackgroundOverlay                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundOverlay(int32 Level, class UTextureRenderTarget2D* NewBackgroundOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundOverlay");

	Params::AMapBackground_SetBackgroundOverlay_Params Parms{};

	Parms.Level = Level;
	Parms.NewBackgroundOverlay = NewBackgroundOverlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundMaterialForUMG");

	Params::AMapBackground_SetBackgroundMaterialForUMG_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapBackground::SetBackgroundMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "SetBackgroundMaterialForCanvas");

	Params::AMapBackground_SetBackgroundMaterialForCanvas_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.RerenderBackground
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AMapBackground::RerenderBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "RerenderBackground");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapBackground.IsMultiLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMapBackground::IsMultiLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "IsMultiLevel");

	Params::AMapBackground_IsMultiLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.IsBackgroundVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMapBackground::IsBackgroundVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "IsBackgroundVisible");

	Params::AMapBackground_IsBackgroundVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AMapBackground::GetBackgroundZOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundZOrder");

	Params::AMapBackground_GetBackgroundZOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              WorldZ                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* AMapBackground::GetBackgroundTextureAtHeight(float WorldZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundTextureAtHeight");

	Params::AMapBackground_GetBackgroundTextureAtHeight_Params Parms{};

	Parms.WorldZ = WorldZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Level                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* AMapBackground::GetBackgroundTexture(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundTexture");

	Params::AMapBackground_GetBackgroundTexture_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AMapBackground::GetBackgroundPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundPriority");

	Params::AMapBackground_GetBackgroundPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Level                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* AMapBackground::GetBackgroundOverlay(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundOverlay");

	Params::AMapBackground_GetBackgroundOverlay_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMapRendererComponent*       Renderer                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AMapBackground::GetBackgroundMaterialInstanceForCanvas(class UMapRendererComponent* Renderer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundMaterialInstanceForCanvas");

	Params::AMapBackground_GetBackgroundMaterialInstanceForCanvas_Params Parms{};

	Parms.Renderer = Renderer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* AMapBackground::GetBackgroundMaterialForUMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapBackground", "GetBackgroundMaterialForUMG");

	Params::AMapBackground_GetBackgroundMaterialForUMG_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapFog
// (Actor)

class UClass* AMapFog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapFog");

	return Clss;
}


// MapFog MinimapPlugin.Default__MapFog
// (Public, ClassDefaultObject, ArchetypeObject)

class AMapFog* AMapFog::GetDefaultObj()
{
	static class AMapFog* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapFog*>(AMapFog::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapFog.SetFogMaterialForUMG
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapFog::SetFogMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "SetFogMaterialForUMG");

	Params::AMapFog_SetFogMaterialForUMG_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapFog.SetFogMaterialForCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapFog::SetFogMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "SetFogMaterialForCanvas");

	Params::AMapFog_SetFogMaterialForCanvas_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapFog.OnMapRevealerUnregistered
// (Final, Native, Private)
// Parameters:
// class UMapRevealerComponent*       MapRevealer                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapFog::OnMapRevealerUnregistered(class UMapRevealerComponent* MapRevealer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "OnMapRevealerUnregistered");

	Params::AMapFog_OnMapRevealerUnregistered_Params Parms{};

	Parms.MapRevealer = MapRevealer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapFog.OnMapRevealerRegistered
// (Final, Native, Private)
// Parameters:
// class UMapRevealerComponent*       MapRevealer                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMapFog::OnMapRevealerRegistered(class UMapRevealerComponent* MapRevealer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "OnMapRevealerRegistered");

	Params::AMapFog_OnMapRevealerRegistered_Params Parms{};

	Parms.MapRevealer = MapRevealer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapFog.GetWorldToPixelRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AMapFog::GetWorldToPixelRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetWorldToPixelRatio");

	Params::AMapFog_GetWorldToPixelRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFog.GetSourceFogRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* AMapFog::GetSourceFogRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetSourceFogRenderTarget");

	Params::AMapFog_GetSourceFogRenderTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMapRendererComponent*       Renderer                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AMapFog::GetFogMaterialInstanceForCanvas(class UMapRendererComponent* Renderer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetFogMaterialInstanceForCanvas");

	Params::AMapFog_GetFogMaterialInstanceForCanvas_Params Parms{};

	Parms.Renderer = Renderer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFog.GetFogMaterialForUMG
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* AMapFog::GetFogMaterialForUMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetFogMaterialForUMG");

	Params::AMapFog_GetFogMaterialForUMG_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFog.GetFogAtLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireCurrentlyRevealing                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RevealFactor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMapFog::GetFogAtLocation(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, float* RevealFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetFogAtLocation");

	Params::AMapFog_GetFogAtLocation_Params Parms{};

	Parms.WorldLocation = WorldLocation;
	Parms.bRequireCurrentlyRevealing = bRequireCurrentlyRevealing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RevealFactor != nullptr)
		*RevealFactor = Parms.RevealFactor;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* AMapFog::GetDestinationFogRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFog", "GetDestinationFogRenderTarget");

	Params::AMapFog_GetDestinationFogRenderTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapFunctionLibrary
// (None)

class UClass* UMapFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapFunctionLibrary");

	return Clss;
}


// MapFunctionLibrary MinimapPlugin.Default__MapFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapFunctionLibrary* UMapFunctionLibrary::GetDefaultObj()
{
	static class UMapFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapFunctionLibrary*>(UMapFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapFunctionLibrary.GetMapTracker
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMapTrackerComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMapTrackerComponent* UMapFunctionLibrary::GetMapTracker(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "GetMapTracker");

	Params::UMapFunctionLibrary_GetMapTracker_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMapBackground*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AMapBackground* UMapFunctionLibrary::GetFirstMapBackground(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "GetFirstMapBackground");

	Params::UMapFunctionLibrary_GetFirstMapBackground_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.FindMapView
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMapViewSearchOption    MapViewSearchOption                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMapViewComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMapViewComponent* UMapFunctionLibrary::FindMapView(class UObject* WorldContextObject, enum class EMapViewSearchOption MapViewSearchOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "FindMapView");

	Params::UMapFunctionLibrary_FindMapView_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapViewSearchOption = MapViewSearchOption;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.DetectIsInView
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   UV                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OuterRadiusUV                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCircular                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapFunctionLibrary::DetectIsInView(struct FVector2D& UV, struct FVector2D& OuterRadiusUV, bool bIsCircular)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "DetectIsInView");

	Params::UMapFunctionLibrary_DetectIsInView_Params Parms{};

	Parms.UV = UV;
	Parms.OuterRadiusUV = OuterRadiusUV;
	Parms.bIsCircular = bIsCircular;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMapViewComponent*           MapView                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCircular                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           CornerUVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              FloorDistance                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapFunctionLibrary::ComputeViewFrustum(class UObject* WorldContextObject, class UMapViewComponent* MapView, bool bIsCircular, TArray<struct FVector2D>* CornerUVs, float FloorDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "ComputeViewFrustum");

	Params::UMapFunctionLibrary_ComputeViewFrustum_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapView = MapView;
	Parms.bIsCircular = bIsCircular;
	Parms.FloorDistance = FloorDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CornerUVs != nullptr)
		*CornerUVs = std::move(Parms.CornerUVs);

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.ClampIntoView
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   UV                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OuterRadiusUV                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCircular                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UMapFunctionLibrary::ClampIntoView(struct FVector2D& UV, float OuterRadiusUV, bool bIsCircular)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "ClampIntoView");

	Params::UMapFunctionLibrary_ClampIntoView_Params Parms{};

	Parms.UV = UV;
	Parms.OuterRadiusUV = OuterRadiusUV;
	Parms.bIsCircular = bIsCircular;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   StartUV                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   EndUV                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMapViewComponent*           MapView                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsCircular                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMapIconComponent*>   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMapIconComponent*> UMapFunctionLibrary::BoxSelectInView(struct FVector2D& StartUV, struct FVector2D& EndUV, class UMapViewComponent* MapView, bool bIsCircular)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapFunctionLibrary", "BoxSelectInView");

	Params::UMapFunctionLibrary_BoxSelectInView_Params Parms{};

	Parms.StartUV = StartUV;
	Parms.EndUV = EndUV;
	Parms.MapView = MapView;
	Parms.bIsCircular = bIsCircular;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapIconComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMapIconComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapIconComponent");

	return Clss;
}


// MapIconComponent MinimapPlugin.Default__MapIconComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapIconComponent* UMapIconComponent::GetDefaultObj()
{
	static class UMapIconComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapIconComponent*>(UMapIconComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewTexture                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetObjectiveArrowTexture(class UTexture2D* NewTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetObjectiveArrowTexture");

	Params::UMapIconComponent_SetObjectiveArrowTexture_Params Parms{};

	Parms.NewTexture = NewTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewObjectiveArrowSize                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetObjectiveArrowSize(float NewObjectiveArrowSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetObjectiveArrowSize");

	Params::UMapIconComponent_SetObjectiveArrowSize_Params Parms{};

	Parms.NewObjectiveArrowSize = NewObjectiveArrowSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewRotates                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetObjectiveArrowRotates(bool bNewRotates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetObjectiveArrowRotates");

	Params::UMapIconComponent_SetObjectiveArrowRotates_Params Parms{};

	Parms.bNewRotates = bNewRotates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewObjectiveArrowEnabled                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetObjectiveArrowEnabled(bool bNewObjectiveArrowEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetObjectiveArrowEnabled");

	Params::UMapIconComponent_SetObjectiveArrowEnabled_Params Parms{};

	Parms.bNewObjectiveArrowEnabled = bNewObjectiveArrowEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewZOrder                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconZOrder(int32 NewZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconZOrder");

	Params::UMapIconComponent_SetIconZOrder_Params Parms{};

	Parms.NewZOrder = NewZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewVisible                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconVisible(bool bNewVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconVisible");

	Params::UMapIconComponent_SetIconVisible_Params Parms{};

	Parms.bNewVisible = bNewVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconTooltipText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewIconName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconTooltipText(class FName NewIconName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconTooltipText");

	Params::UMapIconComponent_SetIconTooltipText_Params Parms{};

	Parms.NewIconName = NewIconName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewIcon                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconTexture(class UTexture2D* NewIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconTexture");

	Params::UMapIconComponent_SetIconTexture_Params Parms{};

	Parms.NewIcon = NewIcon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewIconSize                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EIconSizeUnit           NewIconSizeUnit                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconSize(float NewIconSize, enum class EIconSizeUnit NewIconSizeUnit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconSize");

	Params::UMapIconComponent_SetIconSize_Params Parms{};

	Parms.NewIconSize = NewIconSize;
	Parms.NewIconSizeUnit = NewIconSizeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconRotates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewRotates                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconRotates(bool bNewRotates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconRotates");

	Params::UMapIconComponent_SetIconRotates_Params Parms{};

	Parms.bNewRotates = bNewRotates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconMaterialForUMG");

	Params::UMapIconComponent_SetIconMaterialForUMG_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconMaterialForCanvas");

	Params::UMapIconComponent_SetIconMaterialForCanvas_Params Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconInteractable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewInteractable                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconInteractable(bool bNewInteractable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconInteractable");

	Params::UMapIconComponent_SetIconInteractable_Params Parms{};

	Parms.bNewInteractable = bNewInteractable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFogRevealThreshold                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconFogRevealThreshold(float NewFogRevealThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconFogRevealThreshold");

	Params::UMapIconComponent_SetIconFogRevealThreshold_Params Parms{};

	Parms.NewFogRevealThreshold = NewFogRevealThreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconFogInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EIconFogInteraction     NewFogInteraction                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconFogInteraction(enum class EIconFogInteraction NewFogInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconFogInteraction");

	Params::UMapIconComponent_SetIconFogInteraction_Params Parms{};

	Parms.NewFogInteraction = NewFogInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconDrawColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewDrawColor                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconDrawColor(struct FLinearColor& NewDrawColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconDrawColor");

	Params::UMapIconComponent_SetIconDrawColor_Params Parms{};

	Parms.NewDrawColor = NewDrawColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EIconBackgroundInteractionNewBackgroundInteraction                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::SetIconBackgroundInteraction(enum class EIconBackgroundInteraction NewBackgroundInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "SetIconBackgroundInteraction");

	Params::UMapIconComponent_SetIconBackgroundInteraction_Params Parms{};

	Parms.NewBackgroundInteraction = NewBackgroundInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForUMG
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapIconComponent::ResetIconMaterialForUMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "ResetIconMaterialForUMG");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapIconComponent::ResetIconMaterialForCanvas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "ResetIconMaterialForCanvas");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 IconWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    MatInst                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::RegisterMaterialInstanceFromUMG(class UUserWidget* IconWidget, class UMaterialInstanceDynamic* MatInst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "RegisterMaterialInstanceFromUMG");

	Params::UMapIconComponent_RegisterMaterialInstanceFromUMG_Params Parms{};

	Parms.IconWidget = IconWidget;
	Parms.MatInst = MatInst;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.ReceiveHoverStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapIconComponent::ReceiveHoverStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "ReceiveHoverStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.ReceiveHoverEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapIconComponent::ReceiveHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "ReceiveHoverEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.ReceiveClicked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsLeftMouseButton                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapIconComponent::ReceiveClicked(bool bIsLeftMouseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "ReceiveClicked");

	Params::UMapIconComponent_ReceiveClicked_Params Parms{};

	Parms.bIsLeftMouseButton = bIsLeftMouseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapIconComponent.MarkRenderedInView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMapViewComponent*           View                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewIsRendered                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "MarkRenderedInView");

	Params::UMapIconComponent_MarkRenderedInView_Params Parms{};

	Parms.View = View;
	Parms.bNewIsRendered = bNewIsRendered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.IsRenderedInView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMapViewComponent*           View                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::IsRenderedInView(class UMapViewComponent* View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "IsRenderedInView");

	Params::UMapIconComponent_IsRenderedInView_Params Parms{};

	Parms.View = View;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::IsObjectiveArrowEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "IsObjectiveArrowEnabled");

	Params::UMapIconComponent_IsObjectiveArrowEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.IsIconVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::IsIconVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "IsIconVisible");

	Params::UMapIconComponent_IsIconVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.IsIconInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::IsIconInteractable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "IsIconInteractable");

	Params::UMapIconComponent_IsIconInteractable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UMapIconComponent::GetObjectiveArrowTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetObjectiveArrowTexture");

	Params::UMapIconComponent_GetObjectiveArrowTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapIconComponent::GetObjectiveArrowSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetObjectiveArrowSize");

	Params::UMapIconComponent_GetObjectiveArrowSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForUMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetObjectiveArrowMaterialForUMG");

	Params::UMapIconComponent_GetObjectiveArrowMaterialForUMG_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForCanvas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetObjectiveArrowMaterialForCanvas");

	Params::UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMapIconComponent::GetIconZOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconZOrder");

	Params::UMapIconComponent_GetIconZOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconTooltipText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UMapIconComponent::GetIconTooltipText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconTooltipText");

	Params::UMapIconComponent_GetIconTooltipText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UMapIconComponent::GetIconTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconTexture");

	Params::UMapIconComponent_GetIconTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconSizeUnit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EIconSizeUnit           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EIconSizeUnit UMapIconComponent::GetIconSizeUnit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconSizeUnit");

	Params::UMapIconComponent_GetIconSizeUnit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapIconComponent::GetIconSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconSize");

	Params::UMapIconComponent_GetIconSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>MaterialInstances                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMapIconComponent::GetIconMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconMaterialInstancesForUMG");

	Params::UMapIconComponent_GetIconMaterialInstancesForUMG_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialInstances != nullptr)
		*MaterialInstances = std::move(Parms.MaterialInstances);

}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>MaterialInstances                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMapIconComponent::GetIconMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconMaterialInstancesForCanvas");

	Params::UMapIconComponent_GetIconMaterialInstancesForCanvas_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialInstances != nullptr)
		*MaterialInstances = std::move(Parms.MaterialInstances);

}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMapIconComponent::GetIconMaterialForUMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconMaterialForUMG");

	Params::UMapIconComponent_GetIconMaterialForUMG_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UMapIconComponent::GetIconMaterialForCanvas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconMaterialForCanvas");

	Params::UMapIconComponent_GetIconMaterialForCanvas_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapIconComponent::GetIconFogRevealThreshold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconFogRevealThreshold");

	Params::UMapIconComponent_GetIconFogRevealThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconFogInteraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EIconFogInteraction     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EIconFogInteraction UMapIconComponent::GetIconFogInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconFogInteraction");

	Params::UMapIconComponent_GetIconFogInteraction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconDrawColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UMapIconComponent::GetIconDrawColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconDrawColor");

	Params::UMapIconComponent_GetIconDrawColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EIconBackgroundInteractionReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EIconBackgroundInteraction UMapIconComponent::GetIconBackgroundInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "GetIconBackgroundInteraction");

	Params::UMapIconComponent_GetIconBackgroundInteraction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::DoesObjectiveArrowRotate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "DoesObjectiveArrowRotate");

	Params::UMapIconComponent_DoesObjectiveArrowRotate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapIconComponent.DoesIconRotate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapIconComponent::DoesIconRotate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapIconComponent", "DoesIconRotate");

	Params::UMapIconComponent_DoesIconRotate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapRendererComponent
// (None)

class UClass* UMapRendererComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapRendererComponent");

	return Clss;
}


// MapRendererComponent MinimapPlugin.Default__MapRendererComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapRendererComponent* UMapRendererComponent::GetDefaultObj()
{
	static class UMapRendererComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapRendererComponent*>(UMapRendererComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetVerticalAlignment");

	Params::UMapRendererComponent_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetSize(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetSize");

	Params::UMapRendererComponent_SetSize_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetMargin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Left                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TOP                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Right                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bottom                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetMargin(int32 Left, int32 TOP, int32 Right, int32 Bottom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetMargin");

	Params::UMapRendererComponent_SetMargin_Params Parms{};

	Parms.Left = Left;
	Parms.TOP = TOP;
	Parms.Right = Right;
	Parms.Bottom = Bottom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetMapView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMapViewComponent*           InMapView                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetMapView(class UMapViewComponent* InMapView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetMapView");

	Params::UMapRendererComponent_SetMapView_Params Parms{};

	Parms.InMapView = InMapView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetIsRendered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsRendered                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetIsRendered(bool bNewIsRendered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetIsRendered");

	Params::UMapRendererComponent_SetIsRendered_Params Parms{};

	Parms.bNewIsRendered = bNewIsRendered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetIsCircular
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewIsCircular                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetIsCircular(bool bNewIsCircular)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetIsCircular");

	Params::UMapRendererComponent_SetIsCircular_Params Parms{};

	Parms.bNewIsCircular = bNewIsCircular;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetHorizontalAlignment");

	Params::UMapRendererComponent_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFrustumFloorDistance                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetFrustumFloorDistance(float NewFrustumFloorDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetFrustumFloorDistance");

	Params::UMapRendererComponent_SetFrustumFloorDistance_Params Parms{};

	Parms.NewFrustumFloorDistance = NewFrustumFloorDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetDrawFrustum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewDrawFrustum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetDrawFrustum(bool bNewDrawFrustum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetDrawFrustum");

	Params::UMapRendererComponent_SetDrawFrustum_Params Parms{};

	Parms.bNewDrawFrustum = bNewDrawFrustum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewBackgroundFillColor                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetBackgroundFillColor(struct FLinearColor& NewBackgroundFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetBackgroundFillColor");

	Params::UMapRendererComponent_SetBackgroundFillColor_Params Parms{};

	Parms.NewBackgroundFillColor = NewBackgroundFillColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMapViewSearchOption    InAutoLocateMapView                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRendererComponent::SetAutoLocateMapView(enum class EMapViewSearchOption InAutoLocateMapView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "SetAutoLocateMapView");

	Params::UMapRendererComponent_SetAutoLocateMapView_Params Parms{};

	Parms.InAutoLocateMapView = InAutoLocateMapView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRendererComponent.IsRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapRendererComponent::IsRendered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "IsRendered");

	Params::UMapRendererComponent_IsRendered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapRendererComponent.IsCircular
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapRendererComponent::IsCircular()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "IsCircular");

	Params::UMapRendererComponent_IsCircular_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapRendererComponent::GetFrustumFloorDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "GetFrustumFloorDistance");

	Params::UMapRendererComponent_GetFrustumFloorDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapRendererComponent.GetDrawFrustum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapRendererComponent::GetDrawFrustum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "GetDrawFrustum");

	Params::UMapRendererComponent_GetDrawFrustum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UMapRendererComponent::GetBackgroundFillColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRendererComponent", "GetBackgroundFillColor");

	Params::UMapRendererComponent_GetBackgroundFillColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapRevealerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMapRevealerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapRevealerComponent");

	return Clss;
}


// MapRevealerComponent MinimapPlugin.Default__MapRevealerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapRevealerComponent* UMapRevealerComponent::GetDefaultObj()
{
	static class UMapRevealerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapRevealerComponent*>(UMapRevealerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapRevealerComponent.SetRevealMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMapFogRevealMode       NewRevealMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRevealerComponent::SetRevealMode(enum class EMapFogRevealMode NewRevealMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "SetRevealMode");

	Params::UMapRevealerComponent_SetRevealMode_Params Parms{};

	Parms.NewRevealMode = NewRevealMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRevealerComponent.SetRevealExtent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRevealExtentX                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewRevealExtentY                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRevealerComponent::SetRevealExtent(float NewRevealExtentX, float NewRevealExtentY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "SetRevealExtent");

	Params::UMapRevealerComponent_SetRevealExtent_Params Parms{};

	Parms.NewRevealExtentX = NewRevealExtentX;
	Parms.NewRevealExtentY = NewRevealExtentY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRevealDropOffDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRevealerComponent::SetRevealDropOffDistance(float NewRevealDropOffDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "SetRevealDropOffDistance");

	Params::UMapRevealerComponent_SetRevealDropOffDistance_Params Parms{};

	Parms.NewRevealDropOffDistance = NewRevealDropOffDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapRevealerComponent.GetRevealMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMapFogRevealMode       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMapFogRevealMode UMapRevealerComponent::GetRevealMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "GetRevealMode");

	Params::UMapRevealerComponent_GetRevealMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapRevealerComponent.GetRevealExtent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RevealExtentX                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RevealExtentY                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapRevealerComponent::GetRevealExtent(float* RevealExtentX, float* RevealExtentY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "GetRevealExtent");

	Params::UMapRevealerComponent_GetRevealExtent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RevealExtentX != nullptr)
		*RevealExtentX = Parms.RevealExtentX;

	if (RevealExtentY != nullptr)
		*RevealExtentY = Parms.RevealExtentY;

}


// Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapRevealerComponent::GetRevealDropOffDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapRevealerComponent", "GetRevealDropOffDistance");

	Params::UMapRevealerComponent_GetRevealDropOffDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapTrackerComponent
// (None)

class UClass* UMapTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapTrackerComponent");

	return Clss;
}


// MapTrackerComponent MinimapPlugin.Default__MapTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapTrackerComponent* UMapTrackerComponent::GetDefaultObj()
{
	static class UMapTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapTrackerComponent*>(UMapTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapTrackerComponent.HasMapFog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapTrackerComponent::HasMapFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "HasMapFog");

	Params::UMapTrackerComponent_HasMapFog_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapTrackerComponent.GetMapRevealers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMapRevealerComponent*>ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMapRevealerComponent*> UMapTrackerComponent::GetMapRevealers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "GetMapRevealers");

	Params::UMapTrackerComponent_GetMapRevealers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapTrackerComponent.GetMapIcons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMapIconComponent*>   ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMapIconComponent*> UMapTrackerComponent::GetMapIcons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "GetMapIcons");

	Params::UMapTrackerComponent_GetMapIcons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapTrackerComponent.GetMapFogs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMapFog*>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class AMapFog*> UMapTrackerComponent::GetMapFogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "GetMapFogs");

	Params::UMapTrackerComponent_GetMapFogs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMapBackground*>      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class AMapBackground*> UMapTrackerComponent::GetMapBackgrounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "GetMapBackgrounds");

	Params::UMapTrackerComponent_GetMapBackgrounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireCurrentlyRevealing                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInsideFogVolume                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapTrackerComponent::GetFogRevealedFactor(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, bool* bIsInsideFogVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapTrackerComponent", "GetFogRevealedFactor");

	Params::UMapTrackerComponent_GetFogRevealedFactor_Params Parms{};

	Parms.WorldLocation = WorldLocation;
	Parms.bRequireCurrentlyRevealing = bRequireCurrentlyRevealing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsInsideFogVolume != nullptr)
		*bIsInsideFogVolume = Parms.bIsInsideFogVolume;

	return Parms.ReturnValue;

}


// Class MinimapPlugin.MapViewComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMapViewComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapViewComponent");

	return Clss;
}


// MapViewComponent MinimapPlugin.Default__MapViewComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapViewComponent* UMapViewComponent::GetDefaultObj()
{
	static class UMapViewComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapViewComponent*>(UMapViewComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapPlugin.MapViewComponent.ViewContains
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     WorldPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WorldRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapViewComponent::ViewContains(struct FVector& WorldPos, float WorldRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "ViewContains");

	Params::UMapViewComponent_ViewContains_Params Parms{};

	Parms.WorldPos = WorldPos;
	Parms.WorldRadius = WorldRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground
// (Final, Native, Private)
// Parameters:
// class AMapBackground*              MapBackground                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::UnregisterMultiLevelMapBackground(class AMapBackground* MapBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "UnregisterMultiLevelMapBackground");

	Params::UMapViewComponent_UnregisterMultiLevelMapBackground_Params Parms{};

	Parms.MapBackground = MapBackground;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapViewComponent.SetZoomScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewZoomScale                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::SetZoomScale(float NewZoomScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "SetZoomScale");

	Params::UMapViewComponent_SetZoomScale_Params Parms{};

	Parms.NewZoomScale = NewZoomScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapViewComponent.SetViewExtent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewViewExtentX                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewViewExtentY                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::SetViewExtent(float NewViewExtentX, float NewViewExtentY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "SetViewExtent");

	Params::UMapViewComponent_SetViewExtent_Params Parms{};

	Parms.NewViewExtentX = NewViewExtentX;
	Parms.NewViewExtentY = NewViewExtentY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        IconCategory                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewVisible                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::SetIconCategoryVisible(class FName IconCategory, bool bNewVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "SetIconCategoryVisible");

	Params::UMapViewComponent_SetIconCategoryVisible_Params Parms{};

	Parms.IconCategory = IconCategory;
	Parms.bNewVisible = bNewVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground
// (Final, Native, Private)
// Parameters:
// class AMapBackground*              MapBackground                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::RegisterMultiLevelMapBackground(class AMapBackground* MapBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "RegisterMultiLevelMapBackground");

	Params::UMapViewComponent_RegisterMultiLevelMapBackground_Params Parms{};

	Parms.MapBackground = MapBackground;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMapIconComponent*           MapIcon                                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapViewComponent::IsSameBackgroundLevel(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "IsSameBackgroundLevel");

	Params::UMapViewComponent_IsSameBackgroundLevel_Params Parms{};

	Parms.MapIcon = MapIcon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        IconCategory                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapViewComponent::IsIconCategoryVisible(class FName IconCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "IsIconCategoryVisible");

	Params::UMapViewComponent_IsIconCategoryVisible_Params Parms{};

	Parms.IconCategory = IconCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetZoomScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapViewComponent::GetZoomScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetZoomScale");

	Params::UMapViewComponent_GetZoomScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetWorldCorners
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UMapViewComponent::GetWorldCorners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetWorldCorners");

	Params::UMapViewComponent_GetWorldCorners_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetViewYaw
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              WorldYaw                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::GetViewYaw(float WorldYaw, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetViewYaw");

	Params::UMapViewComponent_GetViewYaw_Params Parms{};

	Parms.WorldYaw = WorldYaw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

}


// Function MinimapPlugin.MapViewComponent.GetViewExtent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ViewExtentX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ViewExtentY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::GetViewExtent(float* ViewExtentX, float* ViewExtentY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetViewExtent");

	Params::UMapViewComponent_GetViewExtent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ViewExtentX != nullptr)
		*ViewExtentX = Parms.ViewExtentX;

	if (ViewExtentY != nullptr)
		*ViewExtentY = Parms.ViewExtentY;

}


// Function MinimapPlugin.MapViewComponent.GetViewCoordinates
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRectangular                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              U                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              V                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapViewComponent::GetViewCoordinates(struct FVector& WorldPos, bool bForceRectangular, float* U, float* V)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetViewCoordinates");

	Params::UMapViewComponent_GetViewCoordinates_Params Parms{};

	Parms.WorldPos = WorldPos;
	Parms.bForceRectangular = bForceRectangular;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (U != nullptr)
		*U = Parms.U;

	if (V != nullptr)
		*V = Parms.V;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetViewAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapViewComponent::GetViewAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetViewAspectRatio");

	Params::UMapViewComponent_GetViewAspectRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               IsInsideAnyBackground                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMapViewComponent::GetActiveBackgroundPriority(bool* IsInsideAnyBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetActiveBackgroundPriority");

	Params::UMapViewComponent_GetActiveBackgroundPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsInsideAnyBackground != nullptr)
		*IsInsideAnyBackground = Parms.IsInsideAnyBackground;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMapBackground*              MapBackground                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMapViewComponent::GetActiveBackgroundLevel(class AMapBackground* MapBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "GetActiveBackgroundLevel");

	Params::UMapViewComponent_GetActiveBackgroundLevel_Params Parms{};

	Parms.MapBackground = MapBackground;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              U                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              V                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldPos                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapViewComponent::DeprojectViewToWorld(float U, float V, struct FVector* WorldPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapViewComponent", "DeprojectViewToWorld");

	Params::UMapViewComponent_DeprojectViewToWorld_Params Parms{};

	Parms.U = U;
	Parms.V = V;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldPos != nullptr)
		*WorldPos = std::move(Parms.WorldPos);

}

}


