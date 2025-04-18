#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_StartingEquipmentItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_EquipmentType_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_StartingEquipmentItem.S_StartingEquipmentItem
// 0x0018 (0x0018 - 0x0000)
struct FS_StartingEquipmentItem final
{
public:
	struct FDataTableRowHandle                    Item_2_75DA1F3645FDA366094190A853658F2B;           // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	E_EquipmentType                               EquipmentType_8_9BB6E2444CD3AA340121BA986DA11205;  // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_StartingEquipmentItem) == 0x000008, "Wrong alignment on FS_StartingEquipmentItem");
static_assert(sizeof(FS_StartingEquipmentItem) == 0x000018, "Wrong size on FS_StartingEquipmentItem");
static_assert(offsetof(FS_StartingEquipmentItem, Item_2_75DA1F3645FDA366094190A853658F2B) == 0x000000, "Member 'FS_StartingEquipmentItem::Item_2_75DA1F3645FDA366094190A853658F2B' has a wrong offset!");
static_assert(offsetof(FS_StartingEquipmentItem, EquipmentType_8_9BB6E2444CD3AA340121BA986DA11205) == 0x000010, "Member 'FS_StartingEquipmentItem::EquipmentType_8_9BB6E2444CD3AA340121BA986DA11205' has a wrong offset!");

}

