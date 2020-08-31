#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_appWidget.h"
#include "appWidget.h"

class qt_appWidget : public QWidget
{
    Q_OBJECT

public:
    qt_appWidget(QWidget *parent = Q_NULLPTR);

private:
    Ui::qt_appWidgetClass ui;
    appWidget* m_appWidget;
};
