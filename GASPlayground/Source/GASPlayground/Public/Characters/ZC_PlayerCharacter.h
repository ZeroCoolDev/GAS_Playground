// @zerocool 

#pragma once

#include "CoreMinimal.h"
#include "ZC_BaseCharacter.h"
#include "ZC_PlayerCharacter.generated.h"

UCLASS()
class GASPLAYGROUND_API AZC_PlayerCharacter : public AZC_BaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZC_PlayerCharacter();

private:
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<class UCameraComponent> FollowCamera;
};
