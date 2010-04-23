/********************************************************************************
** Form generated from reading UI file 'AddressBook.ui'
**
** Created: Fri Apr 23 15:10:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBook
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QLabel *addressLabel;
    QTextEdit *addressText;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QLineEdit *nameSearch;

    void setupUi(QWidget *AddressBook)
    {
        if (AddressBook->objectName().isEmpty())
            AddressBook->setObjectName(QString::fromUtf8("AddressBook"));
        AddressBook->resize(446, 323);
        gridLayout = new QGridLayout(AddressBook);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLabel = new QLabel(AddressBook);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameLine = new QLineEdit(AddressBook);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setReadOnly(true);

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);

        addressLabel = new QLabel(AddressBook);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        gridLayout->addWidget(addressLabel, 2, 0, 1, 1);

        addressText = new QTextEdit(AddressBook);
        addressText->setObjectName(QString::fromUtf8("addressText"));
        addressText->setReadOnly(true);

        gridLayout->addWidget(addressText, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        addButton = new QPushButton(AddressBook);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        submitButton = new QPushButton(AddressBook);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        verticalLayout->addWidget(submitButton);

        cancelButton = new QPushButton(AddressBook);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 2, 2, 1, 1);

        nameSearch = new QLineEdit(AddressBook);
        nameSearch->setObjectName(QString::fromUtf8("nameSearch"));

        gridLayout->addWidget(nameSearch, 0, 2, 1, 1);


        retranslateUi(AddressBook);

        QMetaObject::connectSlotsByName(AddressBook);
    } // setupUi

    void retranslateUi(QWidget *AddressBook)
    {
        AddressBook->setWindowTitle(QApplication::translate("AddressBook", "Simple Adress Book made with Designer", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("AddressBook", "Name", 0, QApplication::UnicodeUTF8));
        addressLabel->setText(QApplication::translate("AddressBook", "Informations", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("AddressBook", "Add", 0, QApplication::UnicodeUTF8));
        submitButton->setText(QApplication::translate("AddressBook", "Submit", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddressBook", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddressBook: public Ui_AddressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
