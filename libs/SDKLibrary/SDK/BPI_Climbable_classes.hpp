#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Climbable.BPI_Climbable_C
class IBPI_Climbable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Climbable_C* GetDefaultObj();

	void SetLadder(class ABP_DynamicLadder_C* LadderRef);
};

}


