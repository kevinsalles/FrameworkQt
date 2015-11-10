#ifndef IMODULE_H
#define IMODULE_H

#include <QWidget>

class IModule
{
public:
	IModule(QWidget *parent = 0);
	QWidget* Widget = NULL;
	QString ActionName = "";
	QString WidgetName = "";
	QString VisualName = "";
	~IModule();

private:
	
};

#endif // IMODULE_H
