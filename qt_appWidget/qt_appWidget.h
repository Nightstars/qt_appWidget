#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_appWidget.h"
#include "appWidget.h"
#include <QScrollArea>

class qt_appWidget : public QWidget
{
    Q_OBJECT

public:
    qt_appWidget(QWidget *parent = Q_NULLPTR);
    bool eventFilter(QObject* obj, QEvent* event);	// ����¼�����������
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
    appWidget* m_appWidget9;
    appWidget* m_appWidget10;
    appWidget* m_appWidget11;
    appWidget* m_appWidget12;
    appWidget* m_appWidget13;
    appWidget* m_appWidget14;
    appWidget* m_appWidget15;
    appWidget* m_appWidget16;
    appWidget* m_appWidget17;
    appWidget* m_appWidget18;
    appWidget* m_appWidget19;
    QGridLayout* m_qgdltLayout;
    QVBoxLayout* m_qvbltLayout;
    QScrollArea* m_qscarScroll;
};
