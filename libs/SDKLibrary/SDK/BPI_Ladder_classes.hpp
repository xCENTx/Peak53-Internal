#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Ladder.BPI_Ladder_C
class IBPI_Ladder_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Ladder_C* GetDefaultObj();

	void SetLadderRef(class ABP_MasterLadder_C* LadderRef);
};

}


