#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass CR_VaultIt_Mannequin_RightHand.CR_VaultIt_Mannequin_RightHand_C
// (None)

class UClass* UCR_VaultIt_Mannequin_RightHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CR_VaultIt_Mannequin_RightHand_C");

	return Clss;
}


// CR_VaultIt_Mannequin_RightHand_C CR_VaultIt_Mannequin_RightHand.Default__CR_VaultIt_Mannequin_RightHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCR_VaultIt_Mannequin_RightHand_C* UCR_VaultIt_Mannequin_RightHand_C::GetDefaultObj()
{
	static class UCR_VaultIt_Mannequin_RightHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCR_VaultIt_Mannequin_RightHand_C*>(UCR_VaultIt_Mannequin_RightHand_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_VaultIt_Mannequin_RightHand.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal CR_VaultIt_Mannequin_RightHand.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_VaultIt_Mannequin_RightHand.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work CR_VaultIt_Mannequin_RightHand.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}


