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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct S_DecayDetails.S_DecayDetails
struct FS_DecayDetails
{
public:
	bool                                         UseItemDecay_1_12FBBE5940F95B2CAFEB29B32812EBC0;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DecayTimeMinutes_9_4A49A8CE42FC7C78BF0718847F3F858C; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyOnDecay_5_6D147CB247BC631892F003AE614B8A5C; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ReplacementItem_8_29EAE32547957C641D561A99857A2984; // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor)
};

}


