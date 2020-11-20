// White Tiger Studios 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "E_AttackMove.h"
#include "Combat.generated.h"


UCLASS(ClassGroup = (Custom), BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class EXPERIMENT_API UCombat : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCombat();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AttackMove AttackMoveEnum;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ActionInput();
};