// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintAssertLibrary.h"

void UMyBlueprintAssertLibrary::BlueprintAssert(UObject* caller, const bool precondition)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING // Do not execute in Shipping or Test unless explictly enabled.
	if (!precondition)
	{
		FBlueprintExceptionInfo BreakpointExceptionInfo(EBlueprintExceptionType::Breakpoint);
		FBlueprintCoreDelegates::ThrowScriptException(
			caller,
			*(FBlueprintContextTracker::Get().GetCurrentScriptStackWritable().Last()),
			BreakpointExceptionInfo);
	}
#endif
}
