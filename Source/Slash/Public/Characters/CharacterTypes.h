#pragma once

/*
	Unreal Engine Enum Nomenclature:
	- UENUM(): Exposes Enum to Blueprint
	- BlueprintType: Allows it to be selected?
	- class: Forces a typecall when using the Enum
	- E[EnumName]: Shows that [EnumName] is of type Enum
	- uint8: Forces Enum selections to be 8 bits
	- E[EnumType]_[EnumSelectionName]: Just makes it more clear this is an Enum
	- UMETA(): Change the metadata for the enum selection. Particularly for Blueprint legibility.
	- DisplayName = "": Metadata to change the name seen in Blueprints.
*/
UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One Handed Weapon"),
	ECS_EquippedTwoHandedWeapon UMETA(DisplayName = "Equipped Two Handed Weapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DisplayName = "Equipping Weapon")
};