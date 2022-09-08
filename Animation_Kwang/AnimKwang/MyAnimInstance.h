// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ANIMKWANG_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UMyAnimInstance();
	void SetCurrentMontage(UAnimMontage* AttackMontage) { CurrentMontage = AttackMontage; }
	UAnimMontage* CetCurrentMontage() { return CurrentMontage; }
	void ChangeMontage(int Combo);
	void PlayAttackMontage();

private:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	UAnimMontage* CurrentMontage;

	UAnimMontage* AttackMontage_A;
	UAnimMontage* AttackMontage_B;
	UAnimMontage* AttackMontage_C;
	UAnimMontage* AttackMontage_D;
	
};
