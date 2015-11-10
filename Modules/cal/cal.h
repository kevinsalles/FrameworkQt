#ifndef CAL_H
#define CAL_H

#include <QtWidgets/QWidget>
#include "GeneratedFiles/ui_cal.h"
#include "../../FrameworkQT/Framework/IModule/imodule.h"

class cal : public QWidget, public IModule
{
	Q_OBJECT

public:
	cal(QWidget *parent = 0);
	~cal();

private:
	Ui::calClass ui;
};

#endif // CAL_H
