// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimNotifyState.h"
#include "MyCharacter.h"
#include "MyAnimInstance.h"

FString UMyAnimNotifyState::GetNotifyName_Implementation() const
{
	return TEXT("NextAttack");
}

void UMyAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	AMyCharacter* MyCharacter = Cast<AMyCharacter>(MeshComp->GetOwner());
	UE_LOG(LogTemp, Warning, TEXT("Count : %d"), MyCharacter->ComboCount);

}

void UMyAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	AMyCharacter* MyCharacter = Cast<AMyCharacter>(MeshComp->GetOwner());
	UE_LOG(LogTemp, Warning, TEXT("Notify End"));
	MyCharacter->ComboCount = 0;

}