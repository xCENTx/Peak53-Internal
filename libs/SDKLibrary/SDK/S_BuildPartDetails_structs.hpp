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

// 0xE1 (0xE1 - 0x0)
// UserDefinedStruct S_BuildPartDetails.S_BuildPartDetails
struct FS_BuildPartDetails
{
public:
	class FText                                  Name_3_7D79CDB04F46AA8C4B79BD91206C7297;           // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_5_CF0948154051EFF5968711AE11E698B1;    // 0x18(0x18)(Edit, BlueprintVisible)
	enum class E_BuildType                       Type_11_4EE18B2442F9B2B20D5F0485F097A7F7;          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTakeDamage_14_BE5F52BD4902DA0CE110CCA7B973FF05; // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequireGrid_30_E1F262404F36ADA5028BADBD969D8355;   // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreFloorCollision_32_B243F91D423B2B008B4220B70A999FC7; // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanRotate_16_4B239A6B41669D707B55F8819643DADD;     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRotationArrow_34_9EDAA177450511281CEA4DA8EAE30FAA; // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotateIncrements_19_FE1BD0674DB8103AA8FC27B0DA40B5D9; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BlueprintClass_22_1951355C4FF993F29BAC2F961692DC31; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>               ItemCost_28_C373B2154051569661AC2EA07F2DD819;      // 0x48(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_CraftingCost>               OverrideItemCost_77_961E47DE4243F097ED67238E8332A534; // 0x58(0x10)(Edit, BlueprintVisible)
	class UTexture2D*                            BuildMenuIcon_37_70CC149546F20A75CD552D8338915F23; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowRepair_57_CA324BB04A470CF20B5614A9CFFF0FCD;   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               RepairCost_41_DADCB5AF467FD14FC1EFA0B7D18CF337;    // 0x78(0x10)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   UpgradeBuildPart_44_4AAB528748EF706B3A8977A5FF50C463; // 0x88(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         AllowPickupBuildPart_54_69C2B6064F3E0532A41451A86BACDBB4; // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               PickupItems_58_6CC027644D41F5913E5320B8715BDF8C;   // 0xA0(0x10)(Edit, BlueprintVisible)
	enum class E_Hitbox                          HitboxType_61_14410F4D4B85F56ADA8FC9AF40A40924;    // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanAdjustHeight_67_57B6566144B4AD42B3B30BA12EF39995; // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3952[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightAdjustIncrements_66_B360B55F4FF4EE335451CAA34A2F3B2F; // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinHeightAdjust_70_9356EB604FEEECFB88DC78BF54AAFAF0; // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHeightAdjust_71_AF03C1C7462AE34DC41C298F65DA5A81; // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNamePanel_79_346D714A4E7A56B2563EB8B1A3CB6D9D; // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHitSurfaceRotation_81_6E5E6C5548D0C2207C6B1F939950168B; // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3955[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              HitSurfaceRotationOffset_84_31438CDD4D23D6F8B5BC15ACCF6244C5; // 0xC8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IgnoreOwnership_86_924D87FD4A6502CE3DED4B9CF0FF0DE8; // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


