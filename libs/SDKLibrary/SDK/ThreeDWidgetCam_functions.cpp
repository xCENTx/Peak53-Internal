#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreeDWidgetCam

#include "Basic.hpp"

#include "ThreeDWidgetCam_classes.hpp"
#include "ThreeDWidgetCam_parameters.hpp"


namespace SDK
{

// Function 3DWidgetCam.3DWidgetCam_C.ExecuteUbergraph_3DWidgetCam
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreeDWidgetCam_C::ExecuteUbergraph_3DWidgetCam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("3DWidgetCam_C", "ExecuteUbergraph_3DWidgetCam");

	Params::ThreeDWidgetCam_C_ExecuteUbergraph_3DWidgetCam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 3DWidgetCam.3DWidgetCam_C.3DCameraCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MenuCameras                           MenuCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CameraActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AThreeDWidgetCam_C::ThreeDCameraCommand(E_MenuCameras MenuCamera, class AActor* CameraActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("3DWidgetCam_C", "3DCameraCommand");

	Params::ThreeDWidgetCam_C_ThreeDCameraCommand Parms{};

	Parms.MenuCamera = MenuCamera;
	Parms.CameraActor = CameraActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

