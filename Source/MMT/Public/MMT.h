//Copyright(c) 2016 Viktor Kuropiatnyk "BoredEngineer"

#pragma once

//#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
//#include "ModuleManager.h"

//DECLARE_LOG_CATEGORY_CLASS(someClassLog, Log, All)

class MMTImpl : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();
};