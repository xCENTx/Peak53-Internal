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

// 0x2A0 (0x2A0 - 0x0)
// UserDefinedStruct S_AttachmentDetails.S_AttachmentDetails
struct FS_AttachmentDetails
{
public:
	bool                                         IsAttachment_1_A91179EE4BECAB29FB8567BCACB0A40B;   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Attachment_5_5E2781EB424C556B72DFCA9355FDCE88;     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            AttachmentIcon_8_94B9953445C57C8C722C6280704A6517; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMesh*, class UAnimMontage*> AttachAnimation_35_A9738B9E48AE87A1404B64B8323722B1; // 0x18(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> DetachAnimation_38_C714988A42AAAF9BB08F1E9E2FA245CB; // 0x68(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> SwapDetachAnimation_41_CEE295B54B0573FD44860CA61A6C2B80; // 0xB8(0x50)(Edit, BlueprintVisible)
	bool                                         CanOnlyRemoveAddWhenWeaponHeld_32_12E17DD34C3A3D3BE1CC8582E8084884; // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class USkeletalMesh*, class UAnimSequenceBase*> AttachWeaponAnimations_26_12DEDB2948C830197E46D4A15DB968A7; // 0x110(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimSequenceBase*> DetachWeaponAnimations_28_A7F5C39140551BE54C75EE87F5874F6C; // 0x160(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> FPAttachAnimations_57_90877AF0479B33F85E11819A49064345; // 0x1B0(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> FPDetachAnimations_58_B8C316C14399934143040EA8D836A11D; // 0x200(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> FPSwapDetachAnimations_59_540BC86043189F6A8BDA0E9E9DA0F85B; // 0x250(0x50)(Edit, BlueprintVisible)
};

}


