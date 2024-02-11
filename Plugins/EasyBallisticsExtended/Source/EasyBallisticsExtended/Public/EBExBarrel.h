// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EBBarrel.h"
#include "EBExBarrel.generated.h"

UCLASS()
class EASYBALLISTICSEXTENDED_API UEBExBarrel : public UEBBarrel
{
	GENERATED_BODY()

	/*
	public:
		// If enabled, spare ammo will not be used when reloading
		UPROPERTY(Replicated,EditAnywhere, BlueprintReadWrite, Category = "Ammo")
		bool bSpareAmmoUnlimited;
		// Spare ammo count for the barrel
		UPROPERTY(Replicated,EditAnywhere, BlueprintReadWrite, Category = "Ammo")
		int SpareAmmoCount;
		// Maximum ammo count for the barrel
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
		int CycleAmmoMax;

		// Reload the barrel with the specified ammo
		UFUNCTION(BlueprintCallable, Category = "Reloading")
		void Reload(TSubclassOf<class AEBBullet> AmmoType);

		//Delegate called when reload is complete
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoReloaded);
		UPROPERTY(BlueprintAssignable, Category = "Events")
		FAmmoReloaded AmmoReloaded; 
	*/

};

