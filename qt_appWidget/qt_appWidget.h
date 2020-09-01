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
    appWidget* m_appWidget1;
    appWidget* m_appWidget2;
    appWidget* m_appWidget3;
    appWidget* m_appWidget4;
    appWidget* m_appWidget5;
    QGridLayout* m_qgdltLayout;
    QVBoxLayout* m_qvbltLayout;
};
