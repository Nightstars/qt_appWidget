#include "appWidget.h"

appWidget::appWidget(QWidget *parent)
	: QWidget(parent)
{
	m_qbxltContainer = new QVBoxLayout();
	m_qimgAppicon = new QLabel();
	m_qimgAppicon->resize(50,50);
	m_qlbAppName = new QLabel();
	m_qbxltContainer->addWidget(m_qimgAppicon);
	m_qbxltContainer->addWidget(m_qlbAppName);
	this->setLayout(m_qbxltContainer);
	setWindowFlags(Qt::FramelessWindowHint);//ÎÞ´°Ìå
	setAttribute(Qt::WA_TranslucentBackground);//±³¾°Í¸Ã÷
}

appWidget::~appWidget()
{
	delete m_qimgAppicon;
	m_qimgAppicon = NULL;
	delete m_qlbAppName;
	m_qlbAppName = NULL;
	delete m_qbxltContainer;
	m_qbxltContainer = NULL;
}
void appWidget::setAppName(const QString& iconName)
{
	m_qlbAppName->setText(iconName);
}
void appWidget::setAppIcon(const QImage& image)
{
	m_qimgAppicon->setPixmap(QPixmap::fromImage(image));
}