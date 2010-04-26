#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include <QWidget>
#include "ui_addressbook.h"


namespace Ui {
    class AddressBook;
}

class AddressBook : public QWidget, private  Ui::AddressBook {
    Q_OBJECT
public:
    AddressBook(QWidget *parent = 0);
    ~AddressBook();


protected:
  void changeEvent(QEvent *e);


private:

  void addContact();

  void submitContact(QString name, QString address);

  void cancel();

  void displaySearchedContact(QString name);


  // private variables :
  //a bookmap to store informations (name, address)
  Qmap <QString, CContact> bookMap;
  // the last viewed contact
  QString lastViewedName;

private slots:
  void on_addButton_clicked();

  void on_submitButton_clicked();

  void on_cancelButton_clicked();

  void on_nameSearch_textChanged();

};

#endif // ADDRESSBOOK_H
