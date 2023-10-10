// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintAssertLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT0_API UMyBlueprintAssertLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Debugging")
		static void BlueprintAssert(UObject* caller, const bool precondition);
};
