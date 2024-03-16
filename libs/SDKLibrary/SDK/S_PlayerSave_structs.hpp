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

// 0x140 (0x140 - 0x0)
// UserDefinedStruct S_PlayerSave.S_PlayerSave
struct FS_PlayerSave
{
public:
	class FText                                  Name_7_840382AF42E3FEEB857A569E1725A821;           // 0x0(0x18)(Edit, BlueprintVisible)
	uint8                                        Pad_3B15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSave                      EquipmentSave_22_5DDA6D314B8E0EFEA5EAC280E49BCDFD; // 0x20(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Health_10_2151F84548785A37F724A2AE7CDA9B10;        // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hunger_16_FF58932045F381E520BF3C8FEB9C8D48;        // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Thirst_17_9B044EEA4D744C2F562AB09D11A847C3;        // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemCount_25_BE9DEC9740744B667432109C9C3D70CD;     // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C;        // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location_34_21D0211042F02DCE8E41AA9846246C43;      // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation_33_5B6A61524883011ECE061EA74F30CF17;      // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FName>                          Recipes_38_88EA9C334CE363FE1A4C31BEEA09F22F;       // 0x108(0x10)(Edit, BlueprintVisible)
	class FText                                  RespawnPoint_42_528828944079C817DC32DE9FC1494A6D;  // 0x118(0x18)(Edit, BlueprintVisible)
	class FString                                LastLevel_45_0EBBBE6448586E28022C8591845E511B;     // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


