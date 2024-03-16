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

// 0x78 (0x78 - 0x0)
// UserDefinedStruct S_CookingRecipe.S_CookingRecipe
struct FS_CookingRecipe
{
public:
	struct FDataTableRowHandle                   StartingItem_4_3D162DE74BCEEDB231B953B9BDE94D2F;   // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        StartItemingAmount_10_D5EAE3104B8DFEEE9F778D9BF96B7FFD; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CookingTime_19_7E86F408455596762BB5F0A0A8BA418C;   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_CraftingCost>               ReturnItems_18_85F00B674C1EB84455639380084002F0;   // 0x18(0x10)(Edit, BlueprintVisible)
	TSet<enum class E_CookingType>               CookingType_23_EDC994D84D5A7BF1235DE3A60854943C;   // 0x28(0x50)(Edit, BlueprintVisible)
};

}


