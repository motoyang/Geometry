#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QDialog>

namespace Ui {
class Geometry;
}

class Geometry : public QDialog
{
    Q_OBJECT

public:
    explicit Geometry(QWidget *parent = 0);
    ~Geometry();

private:
    Ui::Geometry *ui;
};

#endif // GEOMETRY_H
