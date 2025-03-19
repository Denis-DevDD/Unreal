// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Moving.h"
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TriggerComp.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWDUNGEON_API UTriggerComp : public UBoxComponent
{
	GENERATED_BODY()

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
    UTriggerComp();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	void SetMover(UMoving* Mover);

private:
	UPROPERTY(EditAnywhere)
	FName AcceptableActorTag;
	UMoving* Mover;
	AActor* GetAcceptableActor() const;	
};
