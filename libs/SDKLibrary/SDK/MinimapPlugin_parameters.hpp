#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs
struct AMapAreaBase_GetMapViewCornerUVs_Params
{
public:
	class UMapViewComponent*                     MapView;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     CornerUVs;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1870[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapAreaBase.GetMapView
struct AMapAreaBase_GetMapView_Params
{
public:
	class UMapViewComponent*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapAreaBase.GetMapAspectRatio
struct AMapAreaBase_GetMapAspectRatio_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapAreaBase.GetLevelAtHeight
struct AMapAreaBase_GetLevelAtHeight_Params
{
public:
	float                                        WorldZ;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapAreaBase.GetAreaBounds
struct AMapAreaBase_GetAreaBounds_Params
{
public:
	class UBoxComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundZOrder
struct AMapBackground_SetBackgroundZOrder_Params
{
public:
	int32                                        NewBackgroundZOrder;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundVisible
struct AMapBackground_SetBackgroundVisible_Params
{
public:
	bool                                         bNewVisible;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundTexture
struct AMapBackground_SetBackgroundTexture_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1897[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            NewBackgroundTexture;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundPriority
struct AMapBackground_SetBackgroundPriority_Params
{
public:
	int32                                        NewBackgroundPriority;                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundOverlay
struct AMapBackground_SetBackgroundOverlay_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                NewBackgroundOverlay;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG
struct AMapBackground_SetBackgroundMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas
struct AMapBackground_SetBackgroundMaterialForCanvas_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapBackground.IsMultiLevel
struct AMapBackground_IsMultiLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapBackground.IsBackgroundVisible
struct AMapBackground_IsBackgroundVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundZOrder
struct AMapBackground_GetBackgroundZOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight
struct AMapBackground_GetBackgroundTextureAtHeight_Params
{
public:
	float                                        WorldZ;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundTexture
struct AMapBackground_GetBackgroundTexture_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundPriority
struct AMapBackground_GetBackgroundPriority_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundOverlay
struct AMapBackground_GetBackgroundOverlay_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas
struct AMapBackground_GetBackgroundMaterialInstanceForCanvas_Params
{
public:
	class UMapRendererComponent*                 Renderer;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG
struct AMapBackground_GetBackgroundMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.SetFogMaterialForUMG
struct AMapFog_SetFogMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.SetFogMaterialForCanvas
struct AMapFog_SetFogMaterialForCanvas_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.OnMapRevealerUnregistered
struct AMapFog_OnMapRevealerUnregistered_Params
{
public:
	class UMapRevealerComponent*                 MapRevealer;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.OnMapRevealerRegistered
struct AMapFog_OnMapRevealerRegistered_Params
{
public:
	class UMapRevealerComponent*                 MapRevealer;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapFog.GetWorldToPixelRatio
struct AMapFog_GetWorldToPixelRatio_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.GetSourceFogRenderTarget
struct AMapFog_GetSourceFogRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas
struct AMapFog_GetFogMaterialInstanceForCanvas_Params
{
public:
	class UMapRendererComponent*                 Renderer;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.GetFogMaterialForUMG
struct AMapFog_GetFogMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MinimapPlugin.MapFog.GetFogAtLocation
struct AMapFog_GetFogAtLocation_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentlyRevealing;                        // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RevealFactor;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget
struct AMapFog_GetDestinationFogRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.GetMapTracker
struct UMapFunctionLibrary_GetMapTracker_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapTrackerComponent*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground
struct UMapFunctionLibrary_GetFirstMapBackground_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMapBackground*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.FindMapView
struct UMapFunctionLibrary_FindMapView_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMapViewSearchOption              MapViewSearchOption;                               // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1914[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapViewComponent*                     ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.DetectIsInView
struct UMapFunctionLibrary_DetectIsInView_Params
{
public:
	struct FVector2D                             UV;                                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OuterRadiusUV;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCircular;                                       // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum
struct UMapFunctionLibrary_ComputeViewFrustum_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapViewComponent*                     MapView;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCircular;                                       // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1924[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     CornerUVs;                                         // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FloorDistance;                                     // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1926[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.ClampIntoView
struct UMapFunctionLibrary_ClampIntoView_Params
{
public:
	struct FVector2D                             UV;                                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterRadiusUV;                                     // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCircular;                                       // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView
struct UMapFunctionLibrary_BoxSelectInView_Params
{
public:
	struct FVector2D                             StartUV;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EndUV;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapViewComponent*                     MapView;                                           // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCircular;                                       // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1936[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapIconComponent*>             ReturnValue;                                       // 0x30(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture
struct UMapIconComponent_SetObjectiveArrowTexture_Params
{
public:
	class UTexture2D*                            NewTexture;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize
struct UMapIconComponent_SetObjectiveArrowSize_Params
{
public:
	float                                        NewObjectiveArrowSize;                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates
struct UMapIconComponent_SetObjectiveArrowRotates_Params
{
public:
	bool                                         bNewRotates;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled
struct UMapIconComponent_SetObjectiveArrowEnabled_Params
{
public:
	bool                                         bNewObjectiveArrowEnabled;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconZOrder
struct UMapIconComponent_SetIconZOrder_Params
{
public:
	int32                                        NewZOrder;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconVisible
struct UMapIconComponent_SetIconVisible_Params
{
public:
	bool                                         bNewVisible;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconTooltipText
struct UMapIconComponent_SetIconTooltipText_Params
{
public:
	class FName                                  NewIconName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconTexture
struct UMapIconComponent_SetIconTexture_Params
{
public:
	class UTexture2D*                            NewIcon;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconSize
struct UMapIconComponent_SetIconSize_Params
{
public:
	float                                        NewIconSize;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIconSizeUnit                     NewIconSizeUnit;                                   // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconRotates
struct UMapIconComponent_SetIconRotates_Params
{
public:
	bool                                         bNewRotates;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG
struct UMapIconComponent_SetIconMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas
struct UMapIconComponent_SetIconMaterialForCanvas_Params
{
public:
	class UMaterialInterface*                    NewMaterial;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconInteractable
struct UMapIconComponent_SetIconInteractable_Params
{
public:
	bool                                         bNewInteractable;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold
struct UMapIconComponent_SetIconFogRevealThreshold_Params
{
public:
	float                                        NewFogRevealThreshold;                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconFogInteraction
struct UMapIconComponent_SetIconFogInteraction_Params
{
public:
	enum class EIconFogInteraction               NewFogInteraction;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconDrawColor
struct UMapIconComponent_SetIconDrawColor_Params
{
public:
	struct FLinearColor                          NewDrawColor;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction
struct UMapIconComponent_SetIconBackgroundInteraction_Params
{
public:
	enum class EIconBackgroundInteraction        NewBackgroundInteraction;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG
struct UMapIconComponent_RegisterMaterialInstanceFromUMG_Params
{
public:
	class UUserWidget*                           IconWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MatInst;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.ReceiveClicked
struct UMapIconComponent_ReceiveClicked_Params
{
public:
	bool                                         bIsLeftMouseButton;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.MarkRenderedInView
struct UMapIconComponent_MarkRenderedInView_Params
{
public:
	class UMapViewComponent*                     View;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewIsRendered;                                    // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1979[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.IsRenderedInView
struct UMapIconComponent_IsRenderedInView_Params
{
public:
	class UMapViewComponent*                     View;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled
struct UMapIconComponent_IsObjectiveArrowEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.IsIconVisible
struct UMapIconComponent_IsIconVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.IsIconInteractable
struct UMapIconComponent_IsIconInteractable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture
struct UMapIconComponent_GetObjectiveArrowTexture_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize
struct UMapIconComponent_GetObjectiveArrowSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG
struct UMapIconComponent_GetObjectiveArrowMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas
struct UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconZOrder
struct UMapIconComponent_GetIconZOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconTooltipText
struct UMapIconComponent_GetIconTooltipText_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconTexture
struct UMapIconComponent_GetIconTexture_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconSizeUnit
struct UMapIconComponent_GetIconSizeUnit_Params
{
public:
	enum class EIconSizeUnit                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconSize
struct UMapIconComponent_GetIconSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG
struct UMapIconComponent_GetIconMaterialInstancesForUMG_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      MaterialInstances;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas
struct UMapIconComponent_GetIconMaterialInstancesForCanvas_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      MaterialInstances;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG
struct UMapIconComponent_GetIconMaterialForUMG_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas
struct UMapIconComponent_GetIconMaterialForCanvas_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold
struct UMapIconComponent_GetIconFogRevealThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconFogInteraction
struct UMapIconComponent_GetIconFogInteraction_Params
{
public:
	enum class EIconFogInteraction               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconDrawColor
struct UMapIconComponent_GetIconDrawColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction
struct UMapIconComponent_GetIconBackgroundInteraction_Params
{
public:
	enum class EIconBackgroundInteraction        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate
struct UMapIconComponent_DoesObjectiveArrowRotate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapIconComponent.DoesIconRotate
struct UMapIconComponent_DoesIconRotate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment
struct UMapRendererComponent_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetSize
struct UMapRendererComponent_SetSize_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetMargin
struct UMapRendererComponent_SetMargin_Params
{
public:
	int32                                        Left;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TOP;                                               // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bottom;                                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetMapView
struct UMapRendererComponent_SetMapView_Params
{
public:
	class UMapViewComponent*                     InMapView;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetIsRendered
struct UMapRendererComponent_SetIsRendered_Params
{
public:
	bool                                         bNewIsRendered;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetIsCircular
struct UMapRendererComponent_SetIsCircular_Params
{
public:
	bool                                         bNewIsCircular;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment
struct UMapRendererComponent_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance
struct UMapRendererComponent_SetFrustumFloorDistance_Params
{
public:
	float                                        NewFrustumFloorDistance;                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetDrawFrustum
struct UMapRendererComponent_SetDrawFrustum_Params
{
public:
	bool                                         bNewDrawFrustum;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor
struct UMapRendererComponent_SetBackgroundFillColor_Params
{
public:
	struct FLinearColor                          NewBackgroundFillColor;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView
struct UMapRendererComponent_SetAutoLocateMapView_Params
{
public:
	enum class EMapViewSearchOption              InAutoLocateMapView;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.IsRendered
struct UMapRendererComponent_IsRendered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.IsCircular
struct UMapRendererComponent_IsCircular_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance
struct UMapRendererComponent_GetFrustumFloorDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRendererComponent.GetDrawFrustum
struct UMapRendererComponent_GetDrawFrustum_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor
struct UMapRendererComponent_GetBackgroundFillColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.SetRevealMode
struct UMapRevealerComponent_SetRevealMode_Params
{
public:
	enum class EMapFogRevealMode                 NewRevealMode;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.SetRevealExtent
struct UMapRevealerComponent_SetRevealExtent_Params
{
public:
	float                                        NewRevealExtentX;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewRevealExtentY;                                  // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance
struct UMapRevealerComponent_SetRevealDropOffDistance_Params
{
public:
	float                                        NewRevealDropOffDistance;                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.GetRevealMode
struct UMapRevealerComponent_GetRevealMode_Params
{
public:
	enum class EMapFogRevealMode                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.GetRevealExtent
struct UMapRevealerComponent_GetRevealExtent_Params
{
public:
	float                                        RevealExtentX;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RevealExtentY;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance
struct UMapRevealerComponent_GetRevealDropOffDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.HasMapFog
struct UMapTrackerComponent_HasMapFog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.GetMapRevealers
struct UMapTrackerComponent_GetMapRevealers_Params
{
public:
	TArray<class UMapRevealerComponent*>         ReturnValue;                                       // 0x0(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.GetMapIcons
struct UMapTrackerComponent_GetMapIcons_Params
{
public:
	TArray<class UMapIconComponent*>             ReturnValue;                                       // 0x0(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.GetMapFogs
struct UMapTrackerComponent_GetMapFogs_Params
{
public:
	TArray<class AMapFog*>                       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds
struct UMapTrackerComponent_GetMapBackgrounds_Params
{
public:
	TArray<class AMapBackground*>                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor
struct UMapTrackerComponent_GetFogRevealedFactor_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentlyRevealing;                        // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInsideFogVolume;                                // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MinimapPlugin.MapViewComponent.ViewContains
struct UMapViewComponent_ViewContains_Params
{
public:
	struct FVector                               WorldPos;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldRadius;                                       // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A13[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground
struct UMapViewComponent_UnregisterMultiLevelMapBackground_Params
{
public:
	class AMapBackground*                        MapBackground;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapViewComponent.SetZoomScale
struct UMapViewComponent_SetZoomScale_Params
{
public:
	float                                        NewZoomScale;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.SetViewExtent
struct UMapViewComponent_SetViewExtent_Params
{
public:
	float                                        NewViewExtentX;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewViewExtentY;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible
struct UMapViewComponent_SetIconCategoryVisible_Params
{
public:
	class FName                                  IconCategory;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewVisible;                                       // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A19[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground
struct UMapViewComponent_RegisterMultiLevelMapBackground_Params
{
public:
	class AMapBackground*                        MapBackground;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel
struct UMapViewComponent_IsSameBackgroundLevel_Params
{
public:
	class UMapIconComponent*                     MapIcon;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible
struct UMapViewComponent_IsIconCategoryVisible_Params
{
public:
	class FName                                  IconCategory;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A21[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetZoomScale
struct UMapViewComponent_GetZoomScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetWorldCorners
struct UMapViewComponent_GetWorldCorners_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetViewYaw
struct UMapViewComponent_GetViewYaw_Params
{
public:
	float                                        WorldYaw;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetViewExtent
struct UMapViewComponent_GetViewExtent_Params
{
public:
	float                                        ViewExtentX;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewExtentY;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetViewCoordinates
struct UMapViewComponent_GetViewCoordinates_Params
{
public:
	struct FVector                               WorldPos;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRectangular;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        U;                                                 // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        V;                                                 // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetViewAspectRatio
struct UMapViewComponent_GetViewAspectRatio_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority
struct UMapViewComponent_GetActiveBackgroundPriority_Params
{
public:
	bool                                         IsInsideAnyBackground;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel
struct UMapViewComponent_GetActiveBackgroundLevel_Params
{
public:
	class AMapBackground*                        MapBackground;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A33[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld
struct UMapViewComponent_DeprojectViewToWorld_Params
{
public:
	float                                        U;                                                 // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        V;                                                 // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldPos;                                          // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


