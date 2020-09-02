#include "qt_appWidget.h"
#include <QMessageBox>
#include <QMouseEvent>

qt_appWidget::qt_appWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    ui.pushButton->setText(QStringLiteral("首页"));
    ui.pushButton_2->setText(QStringLiteral("应用"));
    //ui.stackedWidget->setStyleSheet("background:green;");
    m_appWidget = new appWidget();   
    m_appWidget->setAppName("My App");
    QImage* img = new QImage(":/icons/Assets/icons/books.png");
    m_appWidget->setAppIcon(*img);
    m_appWidget->installEventFilter(this);    // 安装事件过滤器

    m_appWidget1 = new appWidget();
    m_appWidget1->setAppName("My App");
    QImage* img1 = new QImage(":/icons/Assets/icons/folder.png");
    m_appWidget1->setAppIcon(*img1);

    m_appWidget2 = new appWidget();
    m_appWidget2->setAppName("My App");
    QImage* img2 = new QImage(":/icons/Assets/icons/books.png");
    m_appWidget2->setAppIcon(*img2);

    m_appWidget3 = new appWidget();
    m_appWidget3->setAppName("My App");
    QImage* img3 = new QImage(":/icons/Assets/icons/folder.png");
    m_appWidget3->setAppIcon(*img3);

    m_appWidget4 = new appWidget();
    m_appWidget4->setAppName("My App");
    QImage* img4= new QImage(":/icons/Assets/icons/books.png");
    m_appWidget4->setAppIcon(*img4);

    m_appWidget5 = new appWidget();
    m_appWidget5->setAppName("My App");
    QImage* img5 = new QImage(":/icons/Assets/icons/folder.png");
    m_appWidget5->setAppIcon(*img5);

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

    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onBtn1Click()));
    connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(onBtn2Click()));
}

void qt_appWidget::onBtn1Click() {
    ui.stackedWidget->setCurrentIndex(0);
}
void qt_appWidget::onBtn2Click() {
    ui.stackedWidget->setCurrentIndex(1);
}
bool qt_appWidget::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == m_appWidget)//指定某个QLabel
    {
        if (event->type() == QEvent::MouseButtonPress) //鼠标点击
        {
            QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event); // 事件转换

            if (mouseEvent->button() == Qt::LeftButton)
            {
                ui.stackedWidget->setCurrentIndex(1);
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else {
    // pass the event on to the parent class
    return QWidget::eventFilter(obj, event);
    }
}