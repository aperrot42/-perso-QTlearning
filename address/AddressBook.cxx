#include "addressbook.h"
#include <Qtgui>
#include <QMap>

AddressBook::AddressBook(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    cancelButton->hide();

}

AddressBook::~AddressBook()
{

}


void AddressBook::changeEvent(QEvent *e)
{
  QWidget::changeEvent(e);
  switch (e->type())
  {
    case QEvent::LanguageChange:
      retranslateUi(this);
      break;
    default:
      break;
  }
}



// Slots auto connection :

void AddressBook::on_addButton_clicked()
{
  this->addContact();
}

void AddressBook::on_submitButton_clicked()
{
  this->submitContact(nameLine->text(), addressText->toPlainText());
}

void AddressBook::on_cancelButton_clicked()
{
  this->cancel();
}

void AddressBook::on_nameSearch_textChanged()
{
  this->displaySearchedContact(nameSearch->text());
}





// personal functions (culd have been slots) :

// add a new contact
  void AddressBook::addContact()
  {

    // unlock interface for editing
    addButton->hide();
    nameLine->setReadOnly(false);
    addressText->setReadOnly(false);
    cancelButton->show();
    //store last viewed name
    lastViewedName = nameLine->text();
  }

// submit the new contact
  void AddressBook::submitContact(QString name, QString address)
  {

    //empty name
    if (name == "")
    {
      QMessageBox::information(this, tr("Empty field contact name"),
                        tr("Empty field contact name : Write a contact name"));
      return;
    }

    // same contact already exists
    if (bookMap.contains(name) && (bookMap.value(name) == address))
    {
      QMessageBox::information(this, tr("Existing contact name"),
                      tr("Existing contact name : Write another contact name"));
    }
    else //ok to add contact
    {
      bookMap.insert(name, address);
      QMessageBox::information(this, tr("contact added or modified"),
                                  tr("contact added or modified"));
      // lock interface for visualisation :
      nameLine->setReadOnly(true);
      addressText->setReadOnly(true);
      cancelButton->hide();
      addButton->show();
    }
  return;
  }


// cancel the contact addition, return to last viewed contact
  void AddressBook::cancel()
  {
  // lock interface for visualisation
  nameLine->setReadOnly(true);
  addressText->setReadOnly(true);
  cancelButton->hide();
  // show last viewed contact
  displaySearchedContact(lastViewedName);
  return;
  }


  void AddressBook::displaySearchedContact(QString name)
  {
    if (bookMap.contains(name))
    addressText->setText (bookMap.find(name).value());
    nameLine->setText (name);
return;
  }


