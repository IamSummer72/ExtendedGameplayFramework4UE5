// Fill out your copyright notice in the Description page of Project Settings.

#include "EBExWeapon.h"
#include "EBExWeaponComponent.h"

// Sets default values for this component's properties
UEBExWeaponComponent::UEBExWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UEBExWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the weapon
	if (IsValid(WeaponClass))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();

		Weapon = GetWorld()->SpawnActor<AEBExWeapon>(WeaponClass, GetComponentTransform(), SpawnParams);
		Weapon->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}


// Called every frame
void UEBExWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

