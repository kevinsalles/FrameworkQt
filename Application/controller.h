#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "application.h"
#include "../FrameworkQT/Framework/ModuleManager/modulemanager.h"

class Controller : public QObject, public ModuleManager
{
	Q_OBJECT

public:
	Controller();
	~Controller();
	void show();

private:
	Application app;
	void _connections();
};

#endif // CONTROLLER_H
