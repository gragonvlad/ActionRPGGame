// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ActionRPGGame.h"
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "Engine/AssetManager.h"
void FActionRPGGameModule::StartupModule()
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	//AssetRegistryModule.Get().OnFilesLoaded().AddUObject(this, &UARUIAbilityManagerComponent::FinishedLoadinFiles);
	TArray< FString > ContentPaths;
	TArray<FString> RootPaths;
	FPackageName::QueryRootContentPaths(ContentPaths);
	AssetRegistry.ScanPathsSynchronous(ContentPaths);

};
IMPLEMENT_PRIMARY_GAME_MODULE(FActionRPGGameModule, ActionRPGGame, "ActionRPGGame" );
 