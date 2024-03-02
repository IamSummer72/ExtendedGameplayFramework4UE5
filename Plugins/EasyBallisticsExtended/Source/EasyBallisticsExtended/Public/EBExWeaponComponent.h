// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EBExWeaponComponent.generated.h"

class AEBExWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), DisplayName = "WeaponComponent")
class EASYBALLISTICSEXTENDED_API UEBExWeaponComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEBExWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// The weapon class to spawn
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<class AEBExWeapon> WeaponClass;

	// The weapon instance
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	AEBExWeapon* Weapon;

};
