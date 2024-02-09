// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilityTask_WaitVelocityDecrease.h"
#include "AbilitySystemLog.h"
#include "GameFramework/MovementComponent.h"

void UAbilityTask_WaitVelocityDecrease::TickTask(float DeltaTime)
	{
		if (CachedMovementComponent)
		{
			float dot = FVector::DotProduct(Direction, CachedMovementComponent->Velocity);

			if (dot < MinimumMagnitude)
			{
				if (ShouldBroadcastAbilityTaskDelegates())
				{
					OnVelocityChange.Broadcast();
				}
				EndTask();
			}
		}
		else
		{
			ABILITY_LOG(Warning, TEXT("UAbilityTask_WaitVelocityDecrease ticked without a valid movement component. ending."));
			EndTask();
		}
	}

UAbilityTask_WaitVelocityDecrease* UAbilityTask_WaitVelocityDecrease::CreateWaitVelocityDecrease(UGameplayAbility* OwningAbility, FVector InDirection, float InMinimumMagnitude)
{
	UAbilityTask_WaitVelocityDecrease* MyObj = NewAbilityTask<UAbilityTask_WaitVelocityDecrease>(OwningAbility);

	MyObj->MinimumMagnitude = InMinimumMagnitude;
	MyObj->Direction = InDirection.GetSafeNormal();


	return MyObj;
}
