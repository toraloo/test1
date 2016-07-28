#ifndef ZWLWIDGET_H
#define ZWLWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>

#define _MAX_COL_NUM    10
#define _MAX_ROW_NUM    10

class zwlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit zwlWidget(QWidget *parent = 0);

    QPushButton     m_chessBtn[_MAX_COL_NUM][_MAX_ROW_NUM];
    QButtonGroup    *m_btnGroup;

signals:

public slots:
};

#endif // ZWLWIDGET_H
