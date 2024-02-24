#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Attention_Highlight.ButtonStyle_Attention_Highlight_C
// (None)

class UClass* UButtonStyle_Attention_Highlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Attention_Highlight_C");

	return Clss;
}


// ButtonStyle_Attention_Highlight_C ButtonStyle_Attention_Highlight.Default__ButtonStyle_Attention_Highlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Attention_Highlight_C* UButtonStyle_Attention_Highlight_C::GetDefaultObj()
{
	static class UButtonStyle_Attention_Highlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Attention_Highlight_C*>(UButtonStyle_Attention_Highlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


