// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_WaitVelocityChange.h"
#include "AbilityTask_WaitVelocityDecrease.generated.h"

UCLASS()
class EXTENDEDFRAMEWORK_API UAbilityTask_WaitVelocityDecrease : public UAbilityTask_WaitVelocityChange
{
	GENERATED_BODY()

	virtual void TickTask(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "WaitVelocityDecrease", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_WaitVelocityDecrease* CreateWaitVelocityDecrease(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
};
