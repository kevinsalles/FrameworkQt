#include "labelview.h"

LabelView::LabelView(QWidget *parent)
	: QWidget(parent), IModule(parent)
{
	ui.setupUi(this);
	this->VisualName = tr("Affichage de la valeur du slider");
	this->ActionName = "action" + this->objectName();
	this->WidgetName = this->objectName();
	this->Widget = this;
}

LabelView::~LabelView()
{

}
