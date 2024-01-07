// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetSelectedCharacter.generated.h"

/**
 * 
 */
UCLASS()
class UE5_HERO_API UWidgetSelectedCharacter : public UUserWidget
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* btn_Back;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* btn_Next;


	void ClickedBackButton();
	
};
