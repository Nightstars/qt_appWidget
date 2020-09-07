#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_appWidget.h"
#include "appWidget.h"

class qt_appWidget : public QWidget
{
    Q_OBJECT

public:
    qt_appWidget(QWidget *parent = Q_NULLPTR);
    bool eventFilter(QObject* obj, QEvent* event);	// 添加事件过滤器声明
private slots:
    void onBtn1Click();
    void onBtn2Click();
private:
    Ui::qt_appWidgetClass ui;
    appWidget* m_appWidget0;
    appWidget* m_appWidget1;
    appWidget* m_appWidget2;
    appWidget* m_appWidget3;
    appWidget* m_appWidget4;
    appWidget* m_appWidget5;
    appWidget* m_appWidget6;
    appWidget* m_appWidget7;
    appWidget* m_appWidget8;
    QGridLayout* m_qgdltLayout;
    QVBoxLayout* m_qvbltLayout;
};
