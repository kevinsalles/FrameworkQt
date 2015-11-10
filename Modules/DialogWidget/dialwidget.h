#ifndef DIALWIDGET_H
#define DIALWIDGET_H

#include <QtWidgets/QWidget>
#include "GeneratedFiles/ui_dialwidget.h"
#include "../../FrameworkQT/Framework/IModule/imodule.h"

class DialWidget : public QWidget, public IModule
{
	Q_OBJECT

public:
	DialWidget(QWidget *parent = 0);
	~DialWidget();

private:
	Ui::DialWidget ui;
};

#endif // DIALWIDGET_H
