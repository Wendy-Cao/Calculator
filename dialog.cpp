#include "dialog.h"
#include "ui_dialog.h"

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

void Dialog::on_pushButton_0_clicked()
{
    m_szNum += ui->pushButton_0->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_1_clicked()
{
    m_szNum += ui->pushButton_1->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_2_clicked()
{
    m_szNum += ui->pushButton_2->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_3_clicked()
{
    m_szNum += ui->pushButton_3->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_4_clicked()
{
    m_szNum += ui->pushButton_4->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_5_clicked()
{
    m_szNum += ui->pushButton_5->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_6_clicked()
{
    m_szNum += ui->pushButton_6->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_7_clicked()
{
    m_szNum += ui->pushButton_7->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_8_clicked()
{
    m_szNum += ui->pushButton_8->text();
       ui->lineEdit->setText(m_szNum);
}

void Dialog::on_pushButton_9_clicked()
{
    m_szNum += ui->pushButton_9->text();
       ui->lineEdit->setText(m_szNum);
}


void Dialog::on_pushButton_10_clicked()
{
    m_opr = ui->pushButton_10->text();
       m_first = m_szNum.toInt();
       m_szNum.clear();
}

void Dialog::on_pushButton_11_clicked()
{
    m_opr = ui->pushButton_11->text();
       m_first = m_szNum.toInt();
       m_szNum.clear();
}

void Dialog::on_pushButton_12_clicked()
{
    m_opr = ui->pushButton_12->text();
       m_first = m_szNum.toInt();
       m_szNum.clear();
}

void Dialog::on_pushButton_13_clicked()
{
    m_opr = ui->pushButton_13->text();
       m_first = m_szNum.toInt();
       m_szNum.clear();
}

void Dialog::on_pushButton_14_clicked()
{
    m_opr = ui->pushButton_14->text();
       m_first = m_szNum.toInt();
       m_szNum.clear();
}

void Dialog::on_pushButton_15_clicked()
{
    // 1.获得两个运算数
       m_second = m_szNum.toInt();
       m_szNum.clear();
       // 2.根据运算符运算
       int result = 0;
       if ( m_opr.compare("+") == 0)
           result = m_first + m_second;
       else if ( m_opr.compare("-") == 0)
           result = m_first - m_second;
       else if ( m_opr.compare("*") == 0)
           result = m_first * m_second;
       else if ( m_opr.compare("/") == 0)
           result = m_first / m_second;
       else if ( m_opr.compare("%") == 0)
           result = m_first % m_second;

       // 3.显示运算结果
       QString szResult = QString().setNum(result);
       ui->lineEdit->setText(szResult);

       return ;
}
