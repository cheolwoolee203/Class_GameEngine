// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE_A(TEXT("/Game/Animation/Animation/My_CPP_PrimaryAttack_A_Slow_Montage.My_CPP_PrimaryAttack_A_Slow_Montage"));
	if (ATTACK_MONTAGE_A.Succeeded())
	{
		AttackMontage_A = ATTACK_MONTAGE_A.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE_B(TEXT("/Game/Animation/Animation/My_CPP_PrimaryAttack_B_Slow_Montage.My_CPP_PrimaryAttack_B_Slow_Montage"));
	if (ATTACK_MONTAGE_B.Succeeded())
	{
		AttackMontage_B = ATTACK_MONTAGE_B.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE_C(TEXT("/Game/Animation/Animation/My_CPP_PrimaryAttack_C_Slow_Montage.My_CPP_PrimaryAttack_C_Slow_Montage"));
	if (ATTACK_MONTAGE_C.Succeeded())
	{
		AttackMontage_C = ATTACK_MONTAGE_C.Object;
	}

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE_D(TEXT("/Game/Animation/Animation/My_CPP_PrimaryAttack_D_Slow_Montage.My_CPP_PrimaryAttack_D_Slow_Montage"));
	if (ATTACK_MONTAGE_D.Succeeded())
	{
		AttackMontage_D = ATTACK_MONTAGE_D.Object;
	}

	SetCurrentMontage(AttackMontage_A);

}

void UMyAnimInstance::ChangeMontage(int Combo)
{
	switch (Combo)
	{
	case 1:
		SetCurrentMontage(AttackMontage_A);
		break;

	case 2:
		SetCurrentMontage(AttackMontage_B);
		break;

	case 3:
		SetCurrentMontage(AttackMontage_C);
		break;

	case 4:
		SetCurrentMontage(AttackMontage_D);
		break;
	}
}

void UMyAnimInstance::PlayAttackMontage()
{
	if (!Montage_IsPlaying(CurrentMontage))
	{
		Montage_Play(CurrentMontage, 1.0f);
	}

}