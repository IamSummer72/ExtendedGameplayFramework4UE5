// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtendedGameUserSettings.h"

UExtendedGameUserSettings* UExtendedGameUserSettings::GetExtendedGameUserSettings()
{
	return Cast<UExtendedGameUserSettings>(UExtendedGameUserSettings::GetGameUserSettings());
}

void UExtendedGameUserSettings::SetToggleCrouch(bool bEnable)
{
	bToggleCrouch = bEnable;
}

bool UExtendedGameUserSettings::IsToggleCrouch() const
{
	return bToggleCrouch;
}

void UExtendedGameUserSettings::SetToggleSprint(bool bEnable)
{
	bToggleSprint = bEnable;
}

bool UExtendedGameUserSettings::IsToggleSprint() const
{
	return bToggleSprint;
}

void UExtendedGameUserSettings::SetToggleAim(bool bEnable)
{
	bToggleAim = bEnable;
}

bool UExtendedGameUserSettings::IsToggleAim() const
{
	return bToggleAim;
}
