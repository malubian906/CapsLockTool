/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *te_original;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QRadioButton *rb_upper;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *rb_lower;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_conversion;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *te_uppercase;
    QLabel *label_2;
    QTextEdit *te_lowercase;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(913, 756);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        te_original = new QTextEdit(Widget);
        te_original->setObjectName(QString::fromUtf8("te_original"));

        verticalLayout_3->addWidget(te_original);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        rb_upper = new QRadioButton(Widget);
        rb_upper->setObjectName(QString::fromUtf8("rb_upper"));
        rb_upper->setChecked(true);

        verticalLayout->addWidget(rb_upper);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        rb_lower = new QRadioButton(Widget);
        rb_lower->setObjectName(QString::fromUtf8("rb_lower"));

        verticalLayout->addWidget(rb_lower);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        btn_conversion = new QPushButton(Widget);
        btn_conversion->setObjectName(QString::fromUtf8("btn_conversion"));

        verticalLayout->addWidget(btn_conversion);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        te_uppercase = new QTextEdit(Widget);
        te_uppercase->setObjectName(QString::fromUtf8("te_uppercase"));

        verticalLayout_2->addWidget(te_uppercase);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        te_lowercase = new QTextEdit(Widget);
        te_lowercase->setObjectName(QString::fromUtf8("te_lowercase"));

        verticalLayout_2->addWidget(te_lowercase);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\216\237\346\226\207\357\274\232", nullptr));
        rb_upper->setText(QCoreApplication::translate("Widget", "\345\244\247\345\206\231", nullptr));
        rb_lower->setText(QCoreApplication::translate("Widget", "\345\260\217\345\206\231", nullptr));
        btn_conversion->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\275\254\344\270\272\345\244\247\345\206\231\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\275\254\344\270\272\345\260\217\345\206\231\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
