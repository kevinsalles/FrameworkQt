#include "controller.h"

Controller::Controller()
	: QObject(), ModuleManager()
{
	app.loadModules(this->getModules());
}

Controller::~Controller()
{

}

void Controller::show(){
	return app.show();	
}

void Controller::_connections(){

}
