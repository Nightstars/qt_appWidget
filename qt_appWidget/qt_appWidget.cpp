#include "qt_appWidget.h"

qt_appWidget::qt_appWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    m_appWidget = new appWidget();   
    m_appWidget->setAppName("My App");
    QImage* img = new QImage("E:\\myimg\\word.png");
    m_appWidget->setAppIcon(*img);

    m_appWidget1 = new appWidget();
    m_appWidget1->setAppName("My App");
    QImage* img1 = new QImage("E:\\myimg\\word.png");
    m_appWidget1->setAppIcon(*img);

    m_appWidget2 = new appWidget();
    m_appWidget2->setAppName("My App");
    QImage* img2 = new QImage("E:\\myimg\\word.png");
    m_appWidget2->setAppIcon(*img);

    m_appWidget3 = new appWidget();
    m_appWidget3->setAppName("My App");
    QImage* img3 = new QImage("E:\\myimg\\word.png");
    m_appWidget3->setAppIcon(*img);

    m_appWidget4 = new appWidget();
    m_appWidget4->setAppName("My App");
    QImage* img4= new QImage("E:\\myimg\\word.png");
    m_appWidget4->setAppIcon(*img);

    m_appWidget5 = new appWidget();
    m_appWidget5->setAppName("My App");
    QImage* img5 = new QImage("E:\\myimg\\word.png");
    m_appWidget5->setAppIcon(*img);

    m_qgdltLayout = new QGridLayout();
    m_qgdltLayout->addWidget(m_appWidget, 0, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget1, 0, 1, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget2, 0, 2, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget3, 0, 3, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget4, 0, 4, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget5, 1, 0, 1, 1);
    
    // 设置水平间距
    m_qgdltLayout->setHorizontalSpacing(10);
    // 设置垂直间距
    m_qgdltLayout->setVerticalSpacing(10);
    // 设置外间距
    m_qgdltLayout->setContentsMargins(10, 10, 10, 10);
    m_qvbltLayout = new QVBoxLayout();
    m_qvbltLayout->addLayout(m_qgdltLayout);
    m_qvbltLayout->addSpacerItem(new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Expanding));
    ui.page->setLayout(m_qvbltLayout);
}
