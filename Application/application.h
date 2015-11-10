#ifndef APPLICATION_H
#define APPLICATION_H

#include <QtWidgets/QMainWindow>
#include "GeneratedFiles/ui_application.h"
#include "../FrameworkQT/Framework/IModule/imodule.h"

class Application : public QMainWindow
{
	Q_OBJECT

public:
	Application(QWidget *parent = 0);
	~Application();
	void loadModules(QList<IModule *>);

private:
	Ui::ApplicationView ui;

private slots:
	void changedModule();
	
};

#endif // APPLICATION_H
