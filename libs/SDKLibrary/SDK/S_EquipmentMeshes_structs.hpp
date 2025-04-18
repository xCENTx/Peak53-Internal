#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EquipmentMeshes

#include "Basic.hpp"

#include "S_SocketAttachments_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_EquipmentMeshes.S_EquipmentMeshes
// 0x0020 (0x0020 - 0x0000)
struct FS_EquipmentMeshes final
{
public:
	TArray<class USkeletalMesh*>                  SkeletalMeshes_6_026A5B7B4DF0F70BE8B4418F0C1FC90A; // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FS_SocketAttachments>           StaticMeshes_7_410922E64B39E06876B30A9603426495;   // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_EquipmentMeshes) == 0x000008, "Wrong alignment on FS_EquipmentMeshes");
static_assert(sizeof(FS_EquipmentMeshes) == 0x000020, "Wrong size on FS_EquipmentMeshes");
static_assert(offsetof(FS_EquipmentMeshes, SkeletalMeshes_6_026A5B7B4DF0F70BE8B4418F0C1FC90A) == 0x000000, "Member 'FS_EquipmentMeshes::SkeletalMeshes_6_026A5B7B4DF0F70BE8B4418F0C1FC90A' has a wrong offset!");
static_assert(offsetof(FS_EquipmentMeshes, StaticMeshes_7_410922E64B39E06876B30A9603426495) == 0x000010, "Member 'FS_EquipmentMeshes::StaticMeshes_7_410922E64B39E06876B30A9603426495' has a wrong offset!");

}

