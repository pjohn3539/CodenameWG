// Fill out your copyright notice in the Description page of Project Settings.

#include "CGWorldSettings.h"


// Sets default values
ACGWorldSettings::ACGWorldSettings()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACGWorldSettings::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACGWorldSettings::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACGWorldSettings::OnToggleSplitScreen(AActor* Context, bool disable) 
{
	if (Context)
	{
		isSplitScreenDisable = disable;
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(isSplitScreenDisable);
		//Context->GetWorld()->GetGameViewport();
	}
}

