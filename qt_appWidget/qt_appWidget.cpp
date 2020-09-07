#include "qt_appWidget.h"
#include <QMessageBox>
#include <QMouseEvent>
#include <vector>
using namespace std;

qt_appWidget::qt_appWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    ui.pushButton->setText(QStringLiteral("首页"));
    ui.pushButton_2->setText(QStringLiteral("应用"));
    this->setMinimumSize(1280,780);
    m_appWidget0 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget0->installEventFilter(this);    // 安装事件过滤器
    m_appWidget1 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget2 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget3 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget4 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget5 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget6 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget7 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget8 = new appWidget("My App", ":/icons/Assets/icons/folder.png");
    m_appWidget9 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget10 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget11 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget12 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget13 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget14 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget15 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget16 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget17 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget18 = new appWidget("My App", ":/icons/Assets/icons/books.png");
    m_appWidget19 = new appWidget("My App", ":/icons/Assets/icons/books.png");

    m_qgdltLayout = new QGridLayout();
    m_qgdltLayout->addWidget(m_appWidget0, 0, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget1, 0, 1, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget2, 0, 2, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget3, 0, 3, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget4, 0, 4, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget5, 0, 5, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget6, 2, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget7, 3, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget8, 4, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget9, 5, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget10, 6, 1, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget11, 7, 2, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget12, 8, 3, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget13, 9, 2, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget14, 10, 1, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget15, 11, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget16, 12, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget17, 13, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget18, 14, 0, 1, 1);
    m_qgdltLayout->addWidget(m_appWidget19, 15, 0, 1, 1);
    
    // 设置水平间距
    m_qgdltLayout->setHorizontalSpacing(10);
    // 设置垂直间距
    m_qgdltLayout->setVerticalSpacing(10);
    // 设置外间距
    m_qgdltLayout->setContentsMargins(10, 10, 10, 10);
    m_qvbltLayout = new QVBoxLayout();
    m_qvbltLayout->addLayout(m_qgdltLayout);
    m_qvbltLayout->addSpacerItem(new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Expanding));
    m_qscarScroll = new QScrollArea();
    m_qscarScroll->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    m_qscarScroll->setWidgetResizable(true);
    QWidget* widget = new QWidget(this);
    widget->setLayout(this->m_qvbltLayout);
    this->m_qscarScroll->setWidget(widget);
    this->m_qscarScroll->setFrameShape(QFrame::NoFrame);
    this->m_qscarScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏横向滚动条
    this->m_qscarScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏竖向滚动条
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(this->m_qscarScroll);
    ui.page->setLayout(mainLayout);

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
    if (obj == m_appWidget0)//指定某个QLabel
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