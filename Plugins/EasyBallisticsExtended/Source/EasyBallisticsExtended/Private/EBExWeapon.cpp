// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "EBExBarrel.h"
#include "EBExWeapon.h"

// Sets default values
AEBExWeapon::AEBExWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));

	RootComponent = Mesh;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));

	BoxComponent->SetupAttachment(Mesh);

	BarrelComponent = CreateDefaultSubobject<UEBExBarrel>(TEXT("Barrel"));

	BarrelComponent->SetupAttachment(Mesh, "Muzzle");

}

// Called when the game starts or when spawned
void AEBExWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEBExWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
