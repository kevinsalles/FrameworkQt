#include "cal.h"
#include <QtWidgets/QApplication>
#include <qtranslator.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTranslator aTranslator;
	aTranslator.load("cal_fr");
	a.installTranslator(&aTranslator);

	cal w;
	w.show();
	return a.exec();
}
