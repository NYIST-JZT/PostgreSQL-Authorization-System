#ifndef CUSTOMMESSAGEBOX_H
#define CUSTOMMESSAGEBOX_H

#include <QDialog>
#include <QMessageBox>
#include <QShowEvent>
#include <QMouseEvent>
#include <QPoint>
#include <QLabel>
#include <QToolButton>
#include <QHBoxLayout>
#include <QResizeEvent>
#include <QPushButton>

class CCustomMessageBox : public QDialog
{
    Q_OBJECT

public:
    CCustomMessageBox(QString msg, int type = 0,QWidget *parent = 0);
    ~CCustomMessageBox();

private:
    QPoint			m_movePoint;
    bool			m_bmousePress;

private:
    QHBoxLayout*	m_titlelayout;
    QLabel*			m_titleLbl;
    QWidget*		m_titleWgt;
    QToolButton*	m_closeBtn;
    QMessageBox*	m_msgBox;
public:
    void initButton(void);
    void setMessage(QString msg, int type);
    void initTitle();
    void showMessage(QString msg, int type);
protected:
    void	mousePressEvent(QMouseEvent *event);
    void	mouseReleaseEvent(QMouseEvent* event);
    void	mouseMoveEvent(QMouseEvent* event);
    void	paintEvent(QPaintEvent * event);

public slots:
    int okClicked();
    int cancelClicked();
};


#endif // CUSTOMMESSAGEBOX_H
