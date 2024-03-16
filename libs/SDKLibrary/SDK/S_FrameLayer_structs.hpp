#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// UserDefinedStruct S_FrameLayer.S_FrameLayer
struct FS_FrameLayer
{
public:
	double                                       FrameThickness_5_34256EDA4E7068433EE4E986E9C30E25; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameColor_2_5FD1A6C94B28C4DB390D35BADC286350;     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGlobalColor_22_97D326DE4ADBBEC1668281BD9A97F28C; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGlobalColors                     GlobalColorType_25_D40FF2C349A6CB207D47DC8DBF0226F5; // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrameAlignment                   FrameAlignment_8_7D30603C47505BEE129586AAE66E0FF9; // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AB8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Frame_Textures                     FrameTextures_17_10455BEC49226B7C813C0CBF22909433; // 0x20(0x40)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      FrameTransform_20_080458D644FBBB81E0E81D978E737E4A; // 0x60(0x38)(Edit, BlueprintVisible, NoDestructor)
};

}


