#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x7FC - 0x7E0)
// BlueprintGeneratedClass BP_Smoke_Grenade.BP_Smoke_Grenade_C
class ABP_Smoke_Grenade_C : public ABP_MasterExplosiveThrowable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SmokeTimeFrame_NewTrack_0_C1ADBC694AF107AD602076B2C777B532; // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SmokeTimeFrame__Direction_C1ADBC694AF107AD602076B2C777B532; // 0x7EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SmokeTimeFrame;                                    // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        SmokeTimer;                                        // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Smoke_Grenade_C* GetDefaultObj();

	void SmokeTimeFrame__FinishedFunc();
	void SmokeTimeFrame__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Smoke_Grenade(int32 EntryPoint);
};

}


