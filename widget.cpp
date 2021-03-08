#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("英文转大写、小写工具");
    InitConnect();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::InitConnect()
{
    connect(ui->rb_lower,&QRadioButton::clicked,[&](bool flag){
        if(flag)
        {
            m_flag = LOWER;
        }
    });

    connect(ui->rb_upper,&QRadioButton::clicked,[&](bool flag){
        if(flag)
        {
            m_flag = UPPER;
        }
    });

    connect(ui->btn_conversion,&QPushButton::clicked,[&](){
        switch (m_flag)
        {
        case LOWER:
            Func_Lower();
            break;
        case UPPER:
            Func_Upper();
            break;
        }
    });
}

void Widget::Func_Upper()
{
    QString src = ui->te_original->toPlainText();

    QTextCursor tc = ui->te_original->textCursor();
    tc.setPosition(3,QTextCursor::KeepAnchor);



    ui->te_uppercase->clear();
    ui->te_uppercase->setText(src.toUpper());
}

void Widget::Func_Lower()
{
    QString src = ui->te_original->toPlainText();
    ui->te_lowercase->clear();
    ui->te_lowercase->setText(src.toLower());
}
