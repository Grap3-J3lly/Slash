// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	// Logs to the Console
	//UE_LOG(LogTemp, Warning, TEXT("Begin Play Called"));

	// Logs to the Screen and the Console
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message"));
	}*/

	
	DRAW_SPHERE(GetActorLocation());
	/*DRAW_LINE(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
	DRAW_POINT(GetActorLocation() + GetActorForwardVector() * 100.f);*/
	DRAW_VECTOR(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Logs DeltaTime to the Console
	/*UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);*/

	// Logs DeltaTime to the Screen and the Console
	/*if (GEngine)
	{
		FString Message = FString::Printf(TEXT("DeltaTime: %f"), DeltaTime);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);
	}*/

	// Logs Object Name to Console
	//UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *GetName());

	// Logs Object Name to Screen and Console
	/*if (GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);
	}*/
}

