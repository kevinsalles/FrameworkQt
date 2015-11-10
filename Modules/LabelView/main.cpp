#include "labelview.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LabelView w;
	w.show();
	return a.exec();
}
