#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x240 - 0xA0)
// Class DragonIKPlugin.DragonIKFootStepsComponent
class UDragonIKFootStepsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCharacterFootStep;                               // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF7[0x164];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Read_this;                                         // 0x214(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Foot_socket;                                       // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Foot_enter_height;                                 // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_exit_height;                                  // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIKFootStepsComponent* GetDefaultObj();

	void CallFootSteps(class FName bone_name, const struct FTransform& Foot_transform, float Height_difference, const struct FHitResult& Hit_info);
};

// 0x350 (0x3F0 - 0xA0)
// Class DragonIKPlugin.DragonIKPhysicsComponent
class UDragonIKPhysicsComponent : public UActorComponent
{
public:
	uint8                                        Pad_1D16[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Physanim_tag_index;                                // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Custom_Root_Bone;                                  // 0xC4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Individual_bone_selection;                         // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1A[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Influence_Stopping_Bones;                          // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;               // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1E[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Linear_Strength;                                   // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Strength;                                  // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Linear_Damp;                                       // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Damp;                                      // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Interpolation_Speed;                               // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Parent_child_ragdoll_state;                        // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               Parent_Child_Connection_Array;                     // 0x168(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Use_auto_blending_logic;                           // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Autoblendalpha;                                    // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D25[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Modify_physics_states;                             // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D26[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hit_Enable_Speed;                                  // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hit_Disable_Speed;                                 // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hit_delay_time;                                    // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D28[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Physanim_Enter_Curve;                              // 0x1D8(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         blend_to_zero;                                     // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D29[0x18F];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIKPhysicsComponent* GetDefaultObj();

	void UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
	void SetInterpolation(int32 Inter_value);
	void ReleaseAllHandles(bool Go_ragdoll);
	void ReGrabAllHandles(bool Exit_ragdoll);
	void PerformActiveRagdoll(float Pelvis_mass_override);
	void OnHitCallback(struct FHitResult& Hit, class FName Optional_Override_Hit_Bone_Name, struct FVector* Hit_location, struct FVector* Hit_impulse_direction, class FName* Hit_bone_name);
	void Modify_Reset_Bone_Info(const TArray<class FName>& bone_list);
	void FirstTimeInitialization(class USkeletalMeshComponent* Skeleton_input);
	void Control_Bone_Handle(class FName bone_name, const struct FTransform& Override_transform, bool Enable);
	void CacheSimulationStates();
};

// 0x18 (0x2A8 - 0x290)
// Class DragonIKPlugin.DragonIKPhysicsHolder
class ADragonIKPhysicsHolder : public AActor
{
public:
	uint8                                        Pad_1D33[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Connected_actor;                                   // 0x2A0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADragonIKPhysicsHolder* GetDefaultObj();

};

// 0x440 (0x4E0 - 0xA0)
// Class DragonIKPlugin.DragonIKWeaponPhysicsComponent
class UDragonIKWeaponPhysicsComponent : public UActorComponent
{
public:
	uint8                                        Pad_1D5D[0x398];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Read_this;                                         // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Arm_Length_Percent;                            // 0x440(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Physanim_tag_index;                                // 0x444(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Linear_Strength;                                   // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Strength;                                  // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Linear_Damp;                                       // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Damp;                                      // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Interpolation_Speed;                               // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Unfreeze_speed;                                    // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_grabbing;                                       // 0x460(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D61[0x7F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIKWeaponPhysicsComponent* GetDefaultObj();

	void Weapon_Transform_Override(const struct FTransform& Weapon_Transform, bool bShould_Override_Weapon_Transform);
	void Unfreeze_Elbows_Function(class FName Hand_bone);
	void Release_Weapon(bool Should_simulatephysics, bool Use_gravity, bool bKeep_Attachment);
	void Release_Hand_Plus_Override(class FName Hand_bone, const struct FTransform& Hand_transform, bool Override_hand_location, bool Override_Hand_Rotation);
	void Release_Hand_Only(class FName Hand_bone);
	void Grab_Weapon(class UPrimitiveComponent* Weapon_mesh_input, class FName Grabbed_bone, bool Simulate_physics, bool Use_gravity);
	void Freeze_Elbows_Function(class FName Hand_bone);
	void FirstTimeInitialization(class USkeletalMeshComponent* Skeleton_input);
	void Attach_Hand_Only(class FName Hand_bone, bool Arm_position_recalibrate);
};

// 0x8 (0x30 - 0x28)
// Class DragonIKPlugin.DragonIK_Library
class UDragonIK_Library : public UObject
{
public:
	uint8                                        Pad_1D74[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIK_Library* GetDefaultObj();

	struct FTransform QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget);
	struct FRotator LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& LookAt, const struct FVector& UpDirection);
	struct FRotator LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& UpVector);
	struct FRotator CustomLookRotation(const struct FVector& LookAt, const struct FVector& UpDirection);
};

}


