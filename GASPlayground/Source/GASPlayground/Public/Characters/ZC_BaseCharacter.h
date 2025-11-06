// @zerocool 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZC_BaseCharacter.generated.h"

UCLASS(Abstract)
class GASPLAYGROUND_API AZC_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZC_BaseCharacter();
};
