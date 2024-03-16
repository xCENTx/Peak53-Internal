#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x2A1 - 0x290)
// BlueprintGeneratedClass BP_NoDamageZone.BP_NoDamageZone_C
class ABP_NoDamageZone_C : public AActor
{
public:
	class UBoxComponent*                         NoDamageZone;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOutline;                                       // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NoDamageZone_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_Not_PreBool_ReturnValue);
};

}


