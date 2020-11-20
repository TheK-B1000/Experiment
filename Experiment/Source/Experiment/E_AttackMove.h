// White Tiger Studios 2020

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "E_AttackMove.generated.h"

/**
 * 
 */
UENUM(BlueprintType, Blueprintable)
enum class AttackMove : uint8 {
	None			UMETA(DisplayName = "None"),
	LightAttack		UMETA(DisplayName = "Light Attack"),
	StrongAttack	UMETA(DisplayName = "Strong Attack"),

};