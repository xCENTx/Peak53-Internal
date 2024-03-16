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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct S_MasterItemSave.S_MasterItemSave
struct FS_MasterItemSave
{
public:
	struct FVector                               Location_4_D81F62E44793ADA21665B6948C0FF42C;       // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation_7_EBD0EA774DAD6C797716C0B18D312EB4;       // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_ItemSave                           Item_30_2B57FA3A4E144E0D30E393AA15434CC5;          // 0x30(0x1C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3927[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_OtherInvSaves>              OtherInventories_16_320E2CD848EBA6C2D475A1AF036C36D4; // 0x50(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_AttachmentSaveSlot>         Attachments_19_F8BDB6F84CFD3E76472713845D52784C;   // 0x60(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_InvSaveSlot>                Inventory_22_F2C8F82C481B70B0B95EECBDBDD6548D;     // 0x70(0x10)(Edit, BlueprintVisible)
	float                                        Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144;        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount_29_7FA33BB54CF30BE0DE4DE08C8ACBF08D;     // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Code_33_926134BF4B3D17FC39EDA1967BFFA90E;          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


