#include "slider.h"

Slider::Slider(QWidget *parent)
	: QWidget(parent), IModule(parent)
{
	ui.setupUi(this);
	this->VisualName = tr("Slider");
	this->ActionName = "action" + this->objectName();
	this->WidgetName = this->objectName();
	this->Widget = this;
}

Slider::~Slider()
{

}
