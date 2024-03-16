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

// 0xD0 (0xD0 - 0x0)
// UserDefinedStruct S_LevelSaveData.S_LevelSaveData
struct FS_LevelSaveData
{
public:
	class FString                                LevelName_3_3FE921104DBA8FD329B884835573895B;      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_MasterItemSave>             ItemSaveData_7_6460E1FE4FF0E17AB447C0B300AE4BF8;   // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_ItemSpawnerSave>            ItemSpawnerSaveData_15_AAF651684CAE2CAFD67D328F44570D5C; // 0x20(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_BuildPartSave>              BuildPartData_20_F3C38A474A91C45CB40B8A9DEE29A803; // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_LockSave>                   LockSaveData_19_0366B27D423557BAA62DE297DB7AC9AF;  // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_StorageSave>                StorageSaveData_24_FDA24E9744FF3CB47A7F92A5FC4748AB; // 0x50(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_CookingSave>                CookingSaveData_29_5364EA004F05A4E74C342C9F26892359; // 0x60(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_CraftingSave>               CraftingSaveData_33_9BA66DF14AD94C2467DD0AA717B0F06A; // 0x70(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_VendorSave>                 VenderSaveData_37_0922F123428B3A6617FFBC9C7923F8E2; // 0x80(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_EquipmentInvSave>           EquipmentSaveData_41_085DF2AE4C1BD5B6049F7588FBF925C5; // 0x90(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_ResourcesSaves>             ResourceData_47_089C9F32407506C54F34049544DCC94E;  // 0xA0(0x10)(Edit, BlueprintVisible)
	TArray<class FText>                          RespawnNames_51_E75621404988AF4001E8E3AEEB1385F4;  // 0xB0(0x10)(Edit, BlueprintVisible)
	TArray<bool>                                 BuildPartOn_62_4F013DA542EC9676C923168A8F94484B;   // 0xC0(0x10)(Edit, BlueprintVisible)
};

}


