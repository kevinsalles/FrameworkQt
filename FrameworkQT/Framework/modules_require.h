#ifndef INCLUDE_H
#define INCLUDE_H

#include "../../Modules/DialogWidget/dialwidget.h"
#include "../../Modules/cal/cal.h"
#include "../../Modules/Slider/slider.h"
#include "../../Modules/LabelView/labelview.h"

#define LOADALLMODULES true

#define ALLMODULE new DialWidget() << new Slider() << new cal() << new LabelView()

#define SETUPMODULE ALLMODULE
#endif