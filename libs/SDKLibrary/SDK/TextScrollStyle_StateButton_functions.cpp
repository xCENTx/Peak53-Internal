#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextScrollStyle_StateButton.TextScrollStyle_StateButton_C
// (None)

class UClass* UTextScrollStyle_StateButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextScrollStyle_StateButton_C");

	return Clss;
}


// TextScrollStyle_StateButton_C TextScrollStyle_StateButton.Default__TextScrollStyle_StateButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextScrollStyle_StateButton_C* UTextScrollStyle_StateButton_C::GetDefaultObj()
{
	static class UTextScrollStyle_StateButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextScrollStyle_StateButton_C*>(UTextScrollStyle_StateButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


