#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
/*添加代码*/
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
/*添加代码*/
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    /*添加代码*/
private:
    QLabel *label1,*label2;
    QLineEdit *lineEdit;
    QPushButton *button;
private slots:
    void showArea();
    /*添加代码*/
};

#endif // DIALOG_H
