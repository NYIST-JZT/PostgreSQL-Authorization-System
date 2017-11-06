#include <QHBoxLayout>
#include <QPalette>
#include <QPainter>
#include <QBrush>
#include <QPushButton>
#include <QFontMetrics>

#include "custommessagebox.h"

#pragma execution_character_set("utf-8")

CCustomMessageBox::CCustomMessageBox(QString msg, int type, QWidget *parent)
    : QDialog(parent), m_bmousePress(false)
{
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint|Qt::Dialog);
    setMouseTracking(true);

    m_titleLbl = new QLabel(this);
    m_closeBtn = new QToolButton(this);
    m_closeBtn->setIcon(QIcon(":/new/button/timg.jpg"));
    connect(m_closeBtn, SIGNAL(clicked()), this, SLOT(close()));
    m_titleWgt = new QWidget(this);

    showMessage(msg, type);
}

CCustomMessageBox::~CCustomMessageBox()
{
}

void CCustomMessageBox::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bmousePress = true;
        m_movePoint = event->pos();
    }
}

void CCustomMessageBox::mouseMoveEvent(QMouseEvent* event)
{
    if (m_bmousePress && (event->buttons()& Qt::LeftButton))
    {
        QPoint move_pos = event->globalPos();
        this->move(move_pos - m_movePoint);
    }
}

void CCustomMessageBox::mouseReleaseEvent(QMouseEvent* event)
{
    m_bmousePress = false;
}

void CCustomMessageBox::paintEvent(QPaintEvent * event)
{
   /* QPainter painter(this);
    int const constLineWidth = 2;
    int const topLeftWidth = constLineWidth / 2;			//上边的和左边的画笔的起始位置
    int const bottomRightWidth = (constLineWidth + 1) / 2;	//右边和下边的画笔的起始位置
    painter.setPen(QPen(Qt::darkGreen, constLineWidth));
    painter.drawLine(0, topLeftWidth, this->width(), topLeftWidth);
    painter.drawLine(this->width() - bottomRightWidth, constLineWidth, this->width() - bottomRightWidth, this->height());
    painter.drawLine(topLeftWidth, 0, topLeftWidth, this->height());
    painter.drawLine(constLineWidth, this->height() - bottomRightWidth, this->width(), this->height() - bottomRightWidth);*/
}

int CCustomMessageBox::okClicked()
{
    done(1);
    close();
    return 1;
}

int CCustomMessageBox::cancelClicked()
{
    done(0);
    close();

    return 0;
}

void CCustomMessageBox::initTitle(void)
{
    m_titlelayout = new QHBoxLayout();
    m_titlelayout->addWidget(m_titleLbl, 0, Qt::AlignLeft);
    m_titlelayout->addWidget(m_closeBtn, 0, Qt::AlignTop);
    m_titlelayout->setSpacing(5);
    m_titlelayout->setContentsMargins(2, 2, 1, 2);
    m_titleWgt->setLayout(m_titlelayout);

    m_titleWgt->setFixedHeight(30);
    m_titleWgt->setAutoFillBackground(true);

    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap("./images/titleBg")));
    m_titleWgt->setPalette(palette);
    m_titleWgt->setGeometry(2, 2, this->width() - 4, 30);
}


void CCustomMessageBox::showMessage(QString msg, int type)
{
    QVBoxLayout* layout = new QVBoxLayout(this);

    initTitle();
    setMessage(msg, type);

    QString text = m_msgBox->windowTitle();
    m_titleLbl->setFont(QFont("TypeWriter", 12, QFont::Bold));
    m_titleLbl->setStyleSheet("background: transparent;");
    m_titleLbl->setText(text);

    layout->addWidget(m_titleWgt);
    layout->addWidget(m_msgBox, 0, Qt::AlignHCenter);
    layout->setContentsMargins(2, 2, 2, 2);

    setLayout(layout);
}

void CCustomMessageBox::setMessage(QString msg, int type)
{
    if (type < 0 || type > 3)
        return;

    QPushButton* okBtn = NULL;
    QPushButton* cancelBtn = NULL;
    //0:基本信息；  1：询问； 2：警告； 3：错误
    switch (type)
    {
    case 0:
        m_msgBox = new QMessageBox(QMessageBox::Information, tr("提示"), msg);
        break;
    case 1:
        m_msgBox = new QMessageBox(QMessageBox::Question, tr("询问"), msg);
        break;
    case 2:
        m_msgBox = new QMessageBox(QMessageBox::Warning, tr("警告"), msg);
        break;
    case 3:
        m_msgBox = new QMessageBox(QMessageBox::Critical, tr("错误"), msg);
        break;
    default:
        break;
    }

    okBtn = m_msgBox->addButton(tr("确定"), QMessageBox::AcceptRole);
    connect(okBtn, &QPushButton::clicked, this, &CCustomMessageBox::okClicked);

    if (type == 1)
    {
        cancelBtn = m_msgBox->addButton(tr("取消"), QMessageBox::RejectRole);
        connect(cancelBtn, &QPushButton::clicked, this, &CCustomMessageBox::cancelClicked);
    }
}

