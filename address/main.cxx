#include <QtGui>
#include "addressbook.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);


  AddressBook addressbook;
  addressbook.show();

  return app.exec();
}
