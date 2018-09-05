#include "dialog.h"
/*添加代码*/
#include <QGridLayout>
const static double PI=3.1416;
/*添加代码*/
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    /*添加代码*/
        label1=new QLabel(this);
        label1->setText(tr("请输入圆的半径："));
        label2=new QLabel(this);
        button=new QPushButton(this);
        button->setText(tr("显示对应圆的面积："));
        QGridLayout *mainLayout=new QGridLayout(this);   //用于布局管理器，将所有控件的位置固定
        mainLayout->addWidget(label1,0,0);
        mainLayout->addWidget(lineEdit,0,1);
        mainLayout->addWidget(label2,1,0);
        mainLayout->addWidget(button,1,1);

        connect(button,SIGNAL(clicked()),this,SLOT(showArea()));

        /*添加代码*/
}

Dialog::~Dialog()
{

}
void Dialog::showArea()
{
    bool ok;
    QString tempStr;
    QString valueStr=lineEdit->text();
    int valueInt=valueStr.toInt(&ok);
    double area=valueInt*valueInt*PI;
    label2->setText(tempStr.setNum(area));
}
