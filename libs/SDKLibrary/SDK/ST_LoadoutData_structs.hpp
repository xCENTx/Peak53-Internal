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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct ST_LoadoutData.ST_LoadoutData
struct FST_LoadoutData
{
public:
	uint8                                        SaveVersion_55_593C721344B4EE04DEB3CAAB97EBA7A5;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LoadoutName_2_6AFDAC9840B43226F21F37A1FFAB8B5A;    // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             DateCreated_48_45A46972475053BE8814538CE472122F;   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	int32                                        Camo_59_DB34BB994F628A3461D8E98B264FEA31;          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EquipmentIDs_64_C38D728B47EBF15BEE20658BC0CC77E7;  // 0x20(0x10)(Edit, BlueprintVisible, SaveGame)
};

}


