#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKCharacterInterface.BP_SGKCharacterInterface_C
class IBP_SGKCharacterInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKCharacterInterface_C* GetDefaultObj();

	void Peak_GetTeam(enum class EPeak53Teams* CharacterTeam);
	void SGK_LeanValues(double* Lean_Alpha, double* TargetCamera);
	void SGK_LeanRight(bool Lean, double CameraLean, double ThirdPersonCameraOffset);
	void SGK_LeanLeft(bool Lean, double CameraLean, double ThirdPersonCameraOffset);
	void SGK_LookAtRotation(struct FVector2D* LookAtRotation);
	void SGK_CharacterSockets(enum class E_Sockets Sockets, class USceneComponent** Component);
	void SGK_CharacterCamera(enum class E_CameraType CameraType, class UCameraComponent** CurrentCamera, class USpringArmComponent** CurrentSpringArm);
	void SGK_HideComponents(TArray<class UPrimitiveComponent*>& Components);
	void SGK_GetMesh(enum class E_BodyMesh MeshType, class UPrimitiveComponent** Mesh);
};

}


