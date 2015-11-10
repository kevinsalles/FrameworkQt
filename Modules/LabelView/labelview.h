#ifndef LABELVIEW_H
#define LABELVIEW_H

#include <QtWidgets\qwidget.h>
#include "GeneratedFiles\ui_labelview.h"
#include "../../FrameworkQT/Framework/IModule/imodule.h"

class LabelView : public QWidget, public IModule
{
	Q_OBJECT

public:
	LabelView(QWidget *parent = 0);
	~LabelView();

private:
	Ui::LabelViewClass ui;
};

#endif // LABELVIEW_H
