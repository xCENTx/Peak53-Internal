#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BombsiteInteractionWidget.BombsiteInteractionWidget_C
// (None)

class UClass* UBombsiteInteractionWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BombsiteInteractionWidget_C");

	return Clss;
}


// BombsiteInteractionWidget_C BombsiteInteractionWidget.Default__BombsiteInteractionWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBombsiteInteractionWidget_C* UBombsiteInteractionWidget_C::GetDefaultObj()
{
	static class UBombsiteInteractionWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBombsiteInteractionWidget_C*>(UBombsiteInteractionWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


