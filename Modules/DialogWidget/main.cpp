#include "dialwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DialWidget w;
	w.show();
	return a.exec();
}
