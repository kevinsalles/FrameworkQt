#include "cal.h"

cal::cal(QWidget *parent)
	: QWidget(parent), IModule(parent)
{
	ui.setupUi(this);
	this->VisualName = tr("Calendrier");
	this->ActionName = "action" + this->objectName();
	this->WidgetName = this->objectName();
	this->Widget = this;
}

cal::~cal()
{

}
