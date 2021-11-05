#include "someform.h"
#include "ui_someform.h"

SomeForm::SomeForm(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SomeForm) {
    ui->setupUi(this);
    QObject::connect(ui->pushButton, &QPushButton::clicked, this, &QWidget::close);
}

SomeForm::~SomeForm() {
    delete ui;
}
