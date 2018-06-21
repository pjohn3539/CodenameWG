// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "REA.h"
#include "MyREAStaticFunctions.generated.h"

/**
 * 
 */
UCLASS()
class CODENAMEWG_API UMyREAStaticFunctions : public UObject
{
	GENERATED_BODY()
	
public:

	/*UFUNCTION(BlueprintNativeEvent)
	void CallSetREA(FREA test)
	{
		SetREA(test);
	}*/
	UFUNCTION(BlueprintCallable, Category = "REA")
	static void SetREACurrent(TArray<FREA> oldREA, int index, float newCurrent);
	

	UFUNCTION(BlueprintCallable, Category = "REA")
	static void SetREAIncrement(TArray<FREA> oldREA, int index, float newIncrement);
	
	UFUNCTION(BlueprintCallable, Category = "REA")
	static void InitREA(TArray<FREA> oldREA);

};
