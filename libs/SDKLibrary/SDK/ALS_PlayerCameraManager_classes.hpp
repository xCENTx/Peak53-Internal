#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3450 - 0x3450)
// BlueprintGeneratedClass ALS_PlayerCameraManager.ALS_PlayerCameraManager_C
class AALS_PlayerCameraManager_C : public AALSPlayerCameraManager
{
public:

	static class UClass* StaticClass();
	static class AALS_PlayerCameraManager_C* GetDefaultObj();

	void DrawDebugTargets(const struct FVector& PivotTargetLocation, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2);
};

}


