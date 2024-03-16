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

// 0x3C (0x3C - 0x0)
// UserDefinedStruct S_ConsumableDetails.S_ConsumableDetails
struct FS_ConsumableDetails
{
public:
	bool                                         CanConsume_1_F33B573C44E7F10E734CE98A8F8B397B;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_235F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Health_4_58F2B2E648683BE1B8D783B5F9DE5F26;         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hunger_9_0D90519F43945DD23F8A98A10994E8C6;         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Thirst_10_D9ED71A24C1DAC5DFF4104823F0A5337;        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stamina_12_C4F7061C4ECC1EC288DC08B8F0EB32DD;       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopBleeding_34_8697A21F49FD77710EEA589D8104FE58;  // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUseAmount_52_D5C2AD8E4B9EB866F11B6BAF17E2BBE7;  // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2363[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseAmount_37_EEA30736400AC5BC1B86B5BBEAD734FA;     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReplaceEmptyItem_40_1468F178488538AC9E98EE8AE08C4032; // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2366[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ReplaceItem_43_AF78880646937D734522D7AC866EE5D3;   // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        ReplaceItemAmount_46_580B910E42142D14991177A8702E502F; // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsKey_48_E7DE5B664CDFC391D25DA781C5D8536A;         // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotRemoveAfterEmpty_50_255E7E2F46E0FCCB8B75A4AC46B6E3DF; // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseStartingUseAmount_55_289685BA4BBFB2F9ECEB6DB7760CA01F; // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2369[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartingUseAmount_58_B6A8E00D4E045E15B34E368ABC6FD6DF; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


