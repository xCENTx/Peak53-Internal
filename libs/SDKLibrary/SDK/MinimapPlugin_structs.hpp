#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIconSizeUnit : uint8
{
	ScreenSpace                    = 0,
	WorldSpace                     = 1,
	EIconSizeUnit_MAX              = 2,
};

enum class EMapFogRevealMode : uint8
{
	Off                            = 0,
	Temporary                      = 1,
	Permanent                      = 2,
	EMapFogRevealMode_MAX          = 3,
};

enum class EIconFogInteraction : uint8
{
	OnlyRenderWhenRevealing        = 0,
	OnlyRenderWhenExplored         = 1,
	AlwaysRenderUnderFog           = 2,
	AlwaysRenderAboveFog           = 3,
	EIconFogInteraction_MAX        = 4,
};

enum class EIconBackgroundInteraction : uint8
{
	AlwaysRender                   = 0,
	OnlyRenderInSameVolume         = 1,
	OnlyRenderOnSameFloor          = 2,
	OnlyRenderInPriorityVolume     = 3,
	OnlyRenderOnPriorityFloor      = 4,
	EIconBackgroundInteraction_MAX = 5,
};

enum class EMapViewSearchOption : uint8
{
	Any                            = 0,
	OnPlayer                       = 1,
	OnMapBackground                = 2,
	OnMapFog                       = 3,
	Disabled                       = 4,
	EMapViewSearchOption_MAX       = 5,
};

enum class EFogPostProcessVolumeOption : uint8
{
	AutoLocate                     = 0,
	AutoLocateOrCreate             = 1,
	Manual                         = 2,
	EFogPostProcessVolumeOption_MAX = 3,
};

enum class EMapViewRotationMode : uint8
{
	UseFixedRotation               = 0,
	InheritYaw                     = 1,
	EMapViewRotationMode_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct MinimapPlugin.MapBackgroundLevel
struct FMapBackgroundLevel
{
public:
	class UTexture2D*                            BackgroundTexture;                                 // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                Overlay;                                           // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LevelHeight;                                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SamplingResolution;                                // 0x20(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


