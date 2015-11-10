#ifndef SLIDER_H
#define SLIDER_H

#include <QtWidgets/QWidget>
#include "GeneratedFiles/ui_slider.h"
#include "../../FrameworkQT/Framework/IModule/imodule.h"

class Slider : public QWidget, public IModule
{
	Q_OBJECT

public:
	Slider(QWidget *parent = 0);
	~Slider();

private:
	Ui::Slider ui;

/*signals:
	void valueChanged(const int);*/
};

#endif // SLIDER_H
