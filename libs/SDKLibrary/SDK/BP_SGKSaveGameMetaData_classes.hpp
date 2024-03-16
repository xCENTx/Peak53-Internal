#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass BP_SGKSaveGameMetaData.BP_SGKSaveGameMetaData_C
class UBP_SGKSaveGameMetaData_C : public USaveGame
{
public:
	TArray<struct FS_SaveMetaData>               SaveGameMetaData;                                  // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_SGKSaveGameMetaData_C* GetDefaultObj();

};

}


