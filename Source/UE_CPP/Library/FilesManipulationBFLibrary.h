// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FilesManipulationBFLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE_CPP_API UFilesManipulationBFLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	 * Open a text file and read its content
	 *
	 * @param FilePath			The path of file
	 * @param bOutSuccess		If the action was a success or not
	 * @param OutInfoMessage	More information about the action's result
	 *
	 * @return The string content of file
	 */
	UFUNCTION(BlueprintCallable, Category = "Work with Files")
	static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	
};
