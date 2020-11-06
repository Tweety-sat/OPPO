#include "auth.h"
#include "ui_auth.h"
#include <QIcon>

auth::auth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::auth)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/source/icon.ico"));

}

auth::~auth()
{
    delete ui;
}
