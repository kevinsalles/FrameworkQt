#ifndef MODULEMANAGER_H
#define MODULEMANAGER_H

#include <QObject>
#include "../modules_require.h"
#include "../IModule/imodule.h"

class ModuleManager : public QObject
{
	Q_OBJECT

public:
	ModuleManager();
	~ModuleManager();
	QList<IModule *>getModules();
	IModule *getModule(QString);

private:
	void _initialize();
	QList<IModule *> _modules = QList<IModule * >();
	
};

#endif // MODULEMANAGER_H
