// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ExtendedGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class EXTENDEDFRAMEWORK_API UExtendedGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(Config)
	bool bToggleCrouch;

	UPROPERTY(Config)
	bool bToggleSprint;

	UPROPERTY(Config)
	bool bToggleAim;

public:
	UFUNCTION(BlueprintCallable, Category = "Settings")
	static UExtendedGameUserSettings* GetExtendedGameUserSettings();

	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetToggleCrouch(bool bEnable);

	UFUNCTION(BlueprintPure, Category = "Settings")
	bool IsToggleCrouch() const;

	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetToggleSprint(bool bEnable);

	UFUNCTION(BlueprintPure, Category = "Settings")
	bool IsToggleSprint() const;

	UFUNCTION(BlueprintCallable, Category = "Settings")
	void SetToggleAim(bool bEnable);
	
	UFUNCTION(BlueprintPure, Category = "Settings")
	bool IsToggleAim() const;
};
