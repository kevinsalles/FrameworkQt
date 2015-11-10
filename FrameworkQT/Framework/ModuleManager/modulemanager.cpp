#include "modulemanager.h"

ModuleManager::ModuleManager()
	: QObject()
{
	this->_initialize();
}

ModuleManager::~ModuleManager()
{

}

void ModuleManager::_initialize()
{
	if (LOADALLMODULES)
		this->_modules << SETUPMODULE;
}

QList<IModule*> ModuleManager::getModules()
{
	return this->_modules;
}

IModule * ModuleManager::getModule(QString moduleName){
	for (int i = 0; i < this->_modules.length(); i++){
		if (this->_modules[i]->WidgetName == moduleName)
			return this->_modules[i];
	}

	return NULL;
}

