#include "dialog.h"
#include "ui_dialog.h"
const static double PI=3.1416;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->lineEdit->text();
    int valueInt=valueStr.toInt(&ok);//判断是否为十进制
    double area=valueInt*valueInt*PI;    //计算圆形的面积
    ui->radiusLabel_2->setText(tempStr.setNum(area));
}
