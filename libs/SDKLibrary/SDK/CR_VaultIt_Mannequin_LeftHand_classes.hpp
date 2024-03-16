#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x578 - 0x560)
// ControlRigBlueprintGeneratedClass CR_VaultIt_Mannequin_LeftHand.CR_VaultIt_Mannequin_LeftHand_C
class UCR_VaultIt_Mannequin_LeftHand_C : public UControlRig
{
public:
	struct FVector                               LeftHandLocation;                                  // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_VaultIt_Mannequin_LeftHand_C* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_VaultIt_Mannequin_LeftHand.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	class FName                                  RigVMModel___PBIK_Root__Const;                     // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__Const;                // 0x30(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_Item__Const;   // 0x40(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_GetTransform_1_Space__Const;  // 0x4C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_GetTransform_1_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x4D(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_21E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_318D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_BoneSettings__Const;             // 0x50(0x10)(Edit, EditConst, NonTransactional)
	TArray<class FName>                          RigVMModel___PBIK_ExcludedBones__Const;            // 0x60(0x10)(Edit, EditConst, NonTransactional)
	struct FPBIKSolverSettings                   RigVMModel___PBIK_Settings__Const;                 // 0x70(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FPBIKDebug                            RigVMModel___PBIK_Debug__Const;                    // 0x80(0x8)(Edit, EditConst, NonTransactional, NoDestructor)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_VaultIt_Mannequin_LeftHand.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0x60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___ToRigSpace_Location_Global;           // 0xD0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__IO;                   // 0xE8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_EffectorSolverIndices;           // 0xF8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_BoneSettingToSolverBoneIndex;    // 0x108(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_SolverBoneToElementIndex;        // 0x118(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_Solver;                          // 0x128(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___PBIK_bNeedsInit;                      // 0x138(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


