// Fill out your copyright notice in the Description page of Project Settings.

#include "MyREAStaticFunctions.h"



void UMyREAStaticFunctions::SetREACurrent(TArray<FREA> oldREA, int index, float newCurrent)
{
	oldREA[index].radius_Size_Current = newCurrent;
};


void UMyREAStaticFunctions::SetREAIncrement(TArray<FREA> oldREA, int index, float newIncrement)
{
	oldREA[index].radius_Size_Increment = newIncrement;
};

void UMyREAStaticFunctions::InitREA(TArray<FREA> oldREA) 
{
	
	for (int i = 0; i < oldREA.Num(); i++) 
	{
		if (oldREA[i].changes)
			oldREA[i].radius_Size_Current = oldREA[i].radius_Size_Default;
	}
}
