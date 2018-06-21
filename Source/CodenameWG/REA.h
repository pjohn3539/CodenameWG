// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "REA.generated.h"

UENUM(BlueprintType) 
enum EMyEnum 
{
	
	PRE_Value1 UMETA(DisplayName = "BlueprintName"),
	PRE_Value2 UMETA(DisplayName = "BlueprintName2"),
	PRE_Value3 UMETA(DisplayName = "BlueprintName3")
	// etc. etc. 
};


USTRUCT(BlueprintType) 
struct FREA 
{ 
	GENERATED_BODY() 

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
	bool changes = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct") 
	float radius_Size_Current;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct") 
	float radius_Size_Increment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct") 
	float radius_Size_Default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct") 
	float radius_Size_Walk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
	float Radius_Size_Crouch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
	float radius_Size_Crouch_Walk;


};
