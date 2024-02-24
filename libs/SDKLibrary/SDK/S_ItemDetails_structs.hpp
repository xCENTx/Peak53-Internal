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

// 0x878 (0x878 - 0x0)
// UserDefinedStruct S_ItemDetails.S_ItemDetails
struct FS_ItemDetails
{
public:
	class FText                                  Name_26_D03100674B3BD75EEF9FD9A1E4F9CC34;          // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  ShortName_53_3FDED9954C8DBFC313F77D9D147163D6;     // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_27_39047AE74BB18D53DE9D998ABDC7090D;   // 0x30(0x18)(Edit, BlueprintVisible)
	float                                        Weight_7_794436A247BB7BC85C7BF3BC8B1D13BA;         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Width_12_AF2CA71343924568731BA285FA9ABEA0;         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Height_10_E54E86E64E73A3ACD86E358532FC6061;        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowStacking_48_02CFD0D74B05709E8E432E824709C714; // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowQuickBind_65_ABE4ABEB4EC0B8EC89B4A9A18E208874; // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowDroppingItem_67_10BDCFBC4E21AD7EE24CE79692B3342C; // 0x56(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxStack_18_C57243124FFDE0AB28797AA6F2C1E5F5;      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InventoryAction>            InventoryActions_112_685EE89C49954FBB235025AD602B3208; // 0x60(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_WorldAction>                WorldActions_116_B4CAF39A421B065A46DEACBC5DBD40EE; // 0x70(0x10)(Edit, BlueprintVisible)
	enum class E_InventoryActions                QuickUseAction_74_8B10470848EA26CF6644E1BB82F4B516; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh_30_DB8565E8487831578F6D18823B88B876;    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         SkeletalMesh_98_983FF1EB4798AEEFCA843F981AEC9BF6;  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                WorldClass_45_6718387F4F5D57BE9909639A237E57A3;    // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PickupAnimation_119_0B5E9F0B4C814F6522050FB1A71E95A6; // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IconBackroundColor_50_40C7AE2A48A835A274DB4CB563DFA34C; // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UIDetails                          UIDetails_63_DCA69CE34B9042F4D9EA6C862C26A705;     // 0xB8(0x40)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentDetails                   EquipmentDetails_56_1E20C13B455D79552E44429F0E68CA79; // 0xF8(0x170)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_ContainerDetails                   ContainerDetails_59_DA2434FE4D9CB983040BE3B6CDDD8852; // 0x268(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_HoldableDetails                    HoldableDetails_71_199B05A6441AA3B385D577B58EE4A1DB; // 0x2D8(0x149)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_31FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  ConsumableDetails_77_3E970B0D497E2A71D3B074A210E6F3F1; // 0x428(0x3C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  AttachmentDetails_80_218697824814D06EE30E6BA8584BAA18; // 0x468(0x2A0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_AmmoDetails                        AmmoDetails_83_41493C4144BBB33F238D1CA11921F0E9;   // 0x708(0x1D)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_31FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  DurabilityDetails_90_B75E4B1C4EDEECACC047149CE7D922F6; // 0x728(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_RecipeDetails                      RecipeDetails_106_D99355E845F52FD673BFE9A15047FDFF; // 0x778(0x11)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_31FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   BuildPartDetails_111_17D3336D4A6E6601AF1D7495EDA5B60B; // 0x790(0x10)(Edit, BlueprintVisible, NoDestructor)
	float                                        FuelTime_87_FA2864E1445BEDCA473E40A9E167C9B5;      // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3200[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ItemOffsets_94_00D968744A67B380EF0ADAB62D803A4C;   // 0x7B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class E_Sounds, class USoundBase*> ItemSounds_103_4BD8E03A4D601B11AF665B946B56EEFA;   // 0x810(0x50)(Edit, BlueprintVisible)
	struct FS_CraftingCost                       BurntFuelItem_122_493C2AD746BE583A20B6C3B181A28639; // 0x860(0x14)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3201[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


