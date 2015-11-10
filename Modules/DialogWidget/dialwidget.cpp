#include "dialwidget.h"

DialWidget::DialWidget(QWidget *parent)
	: QWidget(parent), IModule(parent)
{
	ui.setupUi(this);
	this->VisualName = tr("Potentiometre");
	this->ActionName = "action" + this->objectName();
	this->WidgetName = this->objectName();
	this->Widget = this;
}

DialWidget::~DialWidget()
{

}
