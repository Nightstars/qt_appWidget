#include "qt_appWidget.h"

qt_appWidget::qt_appWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    m_appWidget = new appWidget(this);   
    m_appWidget->setAppName("My App");
    QImage* img = new QImage("E:\\myimg\\demo.jpg");
    m_appWidget->setAppIcon(*img);
}
