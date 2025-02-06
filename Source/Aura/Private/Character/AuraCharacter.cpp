// Copyright


#include "Character/AuraCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,400.f,0.f);
	// 점프 억제
	GetCharacterMovement()->bConstrainToPlane = true;
	// 게임 시작 시 평면에서 시작, 평면에서 벗어나 시작하는 것을 방지
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// 마우스(컨트롤러)가 캐릭터의 회전에 영향을 주지 않게 함
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
