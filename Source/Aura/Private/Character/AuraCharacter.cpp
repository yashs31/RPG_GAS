// Copyright @FLYSPY


#include "Character/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 400, 0);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	//character shoudl not use controlelr rotation
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
