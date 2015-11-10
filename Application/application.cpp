#include "application.h"

Application::Application(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(tr("Mon application modulaire"));
	
}

Application::~Application()
{

}

void Application::changedModule()
{
	QAction *action = qobject_cast<QAction*>(this->sender());
	ui.stackedWidget->setCurrentIndex(action->data().toInt());
}

void Application::loadModules(QList<IModule *> _modules)
{
	for (int i = 0; i < _modules.count(); i++)
	{
		QWidget *widget = _modules.at(i)->Widget;
		// A elaborer pour la taille des widgets
		//widget->setBaseSize(this->baseSize());
		ui.stackedWidget->addWidget(widget);
		QAction *action = new QAction(this);
		QString string = _modules.at(i)->ActionName;
		action->setObjectName(string);
		action->setData(QVariant(i));
		action->setText(_modules.at(i)->VisualName);
		connect(action, SIGNAL(triggered()), this, SLOT(changedModule()));
		ui.menuModules->addAction(action);
	}

	ui.stackedWidget->setCurrentIndex(0);

}