#include "addressbook.h"

AddressBook::AddressBook(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

AddressBook::~AddressBook()
{

}

void AddressBook::on_addButton_clicked()
{
	AddDialog dialog(this);

	if (dialog.exec()) {
		QString name = dialog.nameEdit->text();
		QString email = dialog.emailEdit->text();

		if (!name.isEmpty() && !email.isEmpty()) {
			QListWidgetItem *item = new QListWidgetItem(name, ui.addressList);
			item->setData(Qt::UserRole, email);
			ui.addressList->setCurrentItem(item);
		}
	}
}

void AddressBook::on_deleteButton_clicked()
{
	DeleteDialog dlg(this);

	dlg.exec();
}

void AddressBook::on_addressList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.addressList->currentItem();

	if (curItem) {
		ui.nameLabel->setText("Name: " + curItem->text());
		ui.emailLabel->setText("Email: " +
			curItem->data(Qt::UserRole).toString());
	}
	else {
		ui.nameLabel->setText("<No item selected>");
		ui.emailLabel->clear();
	}
}