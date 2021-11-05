#ifndef SOMEFORM_H
#define SOMEFORM_H

#include <QWidget>

namespace Ui {
class SomeForm;
}

class SomeForm : public QWidget
{
    Q_OBJECT

public:
    explicit SomeForm(QWidget *parent = nullptr);
    ~SomeForm();

private:
    Ui::SomeForm *ui;
};

#endif // SOMEFORM_H
