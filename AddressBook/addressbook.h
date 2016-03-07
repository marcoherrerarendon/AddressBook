#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QtWidgets>
#include "ui_addressbook.h"
#include "adddialog.h"
#include "deletedialog.h"

class AddressBook : public QMainWindow
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = 0);
	~AddressBook();
	

private slots:
	void on_addButton_clicked();
	void on_addressList_currentItemChanged();
	void on_deleteButton_clicked();

private:
	Ui::AddressBookClass ui;
};

#endif // ADDRESSBOOK_H
