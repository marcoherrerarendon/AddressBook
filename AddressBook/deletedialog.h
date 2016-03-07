#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include "ui_deletedialog.h"

class DeleteDialog : public QDialog, public Ui::DeleteDialog
{
	Q_OBJECT

public:
	DeleteDialog(QWidget *parent = 0);
	~DeleteDialog();
};

#endif // DELETEDIALOG_H
